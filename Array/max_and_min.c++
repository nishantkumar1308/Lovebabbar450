//Find the max and min element  with minimum number of comparison
//arr[]={1000,11,445,1,330,3000}
//if we use min or max maximum number of comparison is o(n)=>1+2(n-2)=>2n-1 comparisons
//We use divide and conqure to find min number of comparison

#include<bits/stdc++.h>
using namespace std;


class pairs{
public:
	int min;
	int max;
};
pairs solve(vector<int>v,int s,int e)
{
	pairs val;
	if(s==e)
	{
		val.min=v[s];
		val.max=v[s];

		return val;
	}
	 if(s+1==e)
	{
		val.min=min(v[s],v[e]);
		val.max=max(v[s],v[e]);
	}

	int mid=(s+e)/2;
	pairs left=solve(v,s,mid);
	pairs right=solve(v,mid+1,e);
	if(left.min>right.min)
	{
		val.min=right.min;
	}
	else {
		val.min=left.min;
	}
	if(right.max>left.max)
	{
		val.max=right.max;
	}
	else
	{
		val.max=left.max;
	}
	return val;
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
	pairs ans= solve(v,0,n-1);
	cout<<ans.min<<" "<<ans.max<<endl;


}