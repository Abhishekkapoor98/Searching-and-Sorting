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
 
multiset<lli> tic;
 
void solve()
{
	lli n,m,val;
	cin>>n>>m;
 
	while(n--)
	{
		cin>>val;
		tic.insert(val);
	}
 
	while(m--)
	{
		cin>>val;
 
		auto i = tic.lower_bound(val+1);
		if(i == tic.begin())
		{
			cout<<-1<<endl;
		}
		else
		{
			i--;
			cout<<*i<<endl;
			tic.erase(i);
		}
 
	}	
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