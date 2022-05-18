//kth smallest/largest in unsorted array
/*
arr[]={7,10,4,3,20,15},k=3
Method1:->
Sort the array and find arr[k-1]th element
T.C=>O(nlogn)


Method 2
use set and insert all in set it internally uses BST which acessing time is O(logn)

*/

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&v,int k)
{
	int n=v.size();
	set<int>s(v.begin(),v.end());
	auto it=s.begin();
	advance(it,k-1);
	
	return *it;
}
int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int ans=solve(v,k);
	cout<<ans<<endl;
}
