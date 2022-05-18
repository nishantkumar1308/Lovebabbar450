/*
We have to move all -ve element to one side of array 

arr[]={-12,11,-13,-5,6,-7,5,3,-6}
o/p={-12,-13,-5,-7,-6,11,6,5,3}

Method->
We will use swapping method
Whenever we start traversing we just swap if we encounter negative value

*/




#include <bits/stdc++.h>
using namespace std;


void solve(vector<int>&v)
{
	int n=v.size();
	int s=0;
	int mov=0;
	while(s<n)
	{
		if(v[s]<0)
		{
			swap(v[s],v[mov]);
			mov++;
		}
		s++;
	}
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	solve(v);
	for(auto it:v)
	{
		cout<<it<<" ";
	}
	cout<<endl;
}