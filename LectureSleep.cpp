#include<bits/stdc++.h>
using namespace std;
int n,k,a[100001],t,s,m;
int main()
{
cin>>n>>k;
for(int i=1;i<=n;i++)cin>>a[i],s+=a[i];
for(int i=1;i<=n;i++)cin>>t,a[i]*=1-t,s-=a[i],a[i]+=a[i-1];
for(int i=k;i<=n;i++)m=max(m,a[i]-a[i-k]);
cout<<s+m;
return 0;
}
