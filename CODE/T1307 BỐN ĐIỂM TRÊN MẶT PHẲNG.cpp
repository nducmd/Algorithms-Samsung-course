#include <iostream>

using namespace std;
typedef struct point
{
    int x,y,z;
} P;
P vec(P A, P B)
{
    P AB;
    AB.x = B.x - A.x;
    AB.y = B.y - A.y;
    AB.z = B.z - A.z;
    return AB;
}
P tichCoHuong(P A, P B)
{
    P res;
    res.x = A.y*B.z - A.z*B.y;
    res.y = A.z*B.x - A.x*B.z;
    res.z = A.x*B.y - A.y*B.x;
    return res;
}
int tichVoHuong(P A, P B)
{
    return A.x*B.x + A.y*B.y + A.z*B.z;
}
void proc(P A, P B, P C, P D)
{
    P AB, AC, AD;
    AB = vec(A,B);
    AC = vec(A,C);
    AD = vec(A,D);
    P ABC = tichCoHuong(AB,AC);
    if (tichVoHuong(ABC,AD)==0) cout << "YES";
    else cout << "NO";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        P A,B,C,D;
        cin >> A.x >> A.y >> A.z;
        cin >> B.x >> B.y >> B.z;
        cin >> C.x >> C.y >> C.z;
        cin >> D.x >> D.y >> D.z;
        proc(A,B,C,D);
    }
    return 0;
}

