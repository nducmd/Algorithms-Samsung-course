#include <bits/stdc++.h>

using namespace std;
int maxx(int aa,int bb)
{
	if (aa>=bb) return aa;else return bb;
}
int minn(int aaa,int bbb)
{
	if (aaa<=bbb) return aaa;else return bbb;
}
int check(int a,int b,int c,int d,int e,int f)
{
	int temp =maxx(a,b);
	if (temp==maxx(c,d)+minn(e,f)) return 1;
	if (temp==maxx(e,f)+minn(c,d)) return 1;
	if (temp==minn(e,f)+minn(c,d)+minn(a,b)) return 1;
	if (temp==maxx(e,f)+maxx(c,d)) return 1;
	return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[7];
	int i;
	int j=1;
	int m=0;
	int dd=0;
	int t=0;
	for (i=1;i<=3;i++)
	{
		scanf("%d%d",&a[j],&a[j+1]);
		t=t+a[j]*a[j+1];
		if (m<maxx(a[j],a[j+1]))
		{
			m=maxx(a[j],a[j+1]);
			dd=j;
		}
		j=j+2;
	}
	i=sqrt(t);
	//printf("%d %d\n",i,t);
//	printf("%d\n",dd);
	if (i*i!=t) printf("NO");
	else
	{
		int kt=0;
		if (dd==1) kt=check(a[1],a[2],a[3],a[4],a[5],a[6]);
		if (dd==3) kt=check(a[3],a[4],a[1],a[2],a[5],a[6]);
		if (dd==5) kt=check(a[5],a[6],a[3],a[4],a[1],a[2]);
		if (kt==1) printf("YES");else printf("NO");
	}
	cout << endl;
    }
    return 0;
}
