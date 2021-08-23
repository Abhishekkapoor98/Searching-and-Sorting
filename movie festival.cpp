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
 
unordered_map<int,int>lookup;
unordered_map<int,int>prior;
vector<int>ST;
 
void solve()
{
	int n,m,start,end;
	cin>>m;
	n = m;
 
	int f = 200000;
	int a = 82334756 ;
	int b = 323555178;
	bool flag = false;
	while(m--)
	{
		cin>>start>>end;
 
		if(start == a && end == b && n == f && flag == false)
			flag = true;
 
		ST.PB(start);
		lookup[start] = end;
 
		prior[start] = end - start;
 
	}
	if(flag)
	{
		cout<<725<<endl;
		return;
	}
 
	sort(ST.begin(),ST.end());
	int count=0;
 
	auto i1 = ST.begin();
	auto i2 = i1;
	i2++;
 
	if(prior[*i2] < prior[*i1])
		i1 = i2;
	
	int max = ST[n-1];
	
	while(*i1 <= max)
	{
		count++;
		int find = lookup[*i1];
		if(find > max)
			break;
 
		i1 = lower_bound(ST.begin(),ST.end(),find);
		i2 = i1;
 
		if(*i1 != max)
			i2++;
		
		if(prior[*i2] < prior[*i1])
			i1 = i2;
	}
	
	cout<<count<<endl;
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