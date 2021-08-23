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
 
vi ari;
vi lea;
 
void solve()
{
	lli n,v1,v2,m;
	cin>>n;
	m = n;
 
	while(m--)
	{
		cin>>v1>>v2;
 
		ari.PB(v1);
		lea.PB(v2);
	}
 
	sort(ari.begin(),ari.end());
	sort(lea.begin(),lea.end());
 
	int i=0,j=0;
 
	int max = -1;
	int count = 0;
 
	for(;i < n;)
	{
		if(ari[i] < lea[j])
		{
			if(i < n)
				i++;
			count++;
 
			if(max < count)
				max = count;
		}
		else if(ari[i] > lea[j])
		{
			count--;
			j++;
		}
	}
 
	cout<<max<<endl;
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