/*
arr[]={0,1,2,0,1,2}
o/p={0,0,1,1,2,2}

Method 1:-
 Sorting the array but it take O(Nlog(N)) complexity which is not optimal
 Method 2:-
 Use Dutchman flag Algorithm to solve problem
  Use 3 pointer 
  s=0;
  mid=0;
  e=n-1;
  now use-> when we encounter mid as 0 swap with s and increment both 
          -> when we encounter mid as 1 leave as it is and incremnet mid
          ->when we encounter mid as 2 swap with e and  not  increment mid  because it might be possible that swapped 
          element  come will be 1 or 2 and decrement e;     

*/


#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&v)
{
	int n=v.size();
	int s=0;
	int mid=0;
	int e=n-1;
	while(mid<=e)
	{
		if(v[mid]==0)
		{
			swap(v[s],v[mid]);
			s++;
			mid++;
		}
		else if(v[mid]==1)
		{
			mid++;
		}
		else
		{
			swap(v[mid],v[e]);
			
			e--;
		}
	}
}










int main()
{
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