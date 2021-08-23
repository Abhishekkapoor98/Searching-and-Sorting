#include<bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define PB push_back
#define MP make_pair
#define vi vector<lli>
#define uos unordered_set<int>
#define min_heap priority_queue<int,vector<int>,greater<int>>
#define max_heap priority_queue<int>
#define pii pair<int,int>
#define F first
#define S second
#define endl '\n'
 
vi vec;
 
void solve()
{
	lli n,val;
	cin>>n;
 
	while(n--)
	{
		cin>>val;
		vec.PB(val);
	}
 
	sort(vec.begin(),vec.end());
 
	lli ans = 1;
	
	for(lli i=0;i<vec.size();i++)
	{
		if(ans < vec[i])
			break;
		else
			ans += vec[i];
	}
	cout<<ans<<endl;
}
 
int main()
{
	fast_io;
 
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
#endif
 
	solve();
	
	return 0;
}