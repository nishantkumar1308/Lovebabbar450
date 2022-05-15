#include<bits/stdc++.h>
using namespace std;
//Use reverse function
void method1(vector<int>&v)
{
	reverse(v.begin(),v.end());
}
//Use Swapping method

void solve(vector<int>&v)
{
	int i=0;
	int j=v.size()-1;
	while(i<=j)
	{
		swap(v[i],v[j]);
		i++;
		j--;
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