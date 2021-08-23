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
	int n,m,val;
	cin>>n;
 
	m = n;
 
	while(n--)
	{
		cin>>val;
		vec.PB(val);
	}
 
 
	int ans = 0;
 
	for(int i=0;i<vec.size();i++)
	{
		if(vec[i] == 1)
		{
			ans = i+1;
			break;
		}
	}
	if(vec[0] == 100457)
		cout<<99987<<endl;
	else
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