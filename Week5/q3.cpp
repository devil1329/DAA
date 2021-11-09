#include<iostream>
#include<vector>
#include<map>
using namespace std;

void algo(vector<int>& v1,vector<int>& v2)
{
	// int m=v1.size(),n=v2.size();
	map<int,int> m;
	vector<int> res;
	for(int i:v1)
		m[i]++;
	for(int i:v2)
	{
		int val=m[i];
		m[i]--;
		if(val>m[i] && val>0)
			res.push_back(i);
	}
	for(int i:res)
		cout<<i<<" ";
}

int main()
{
	int n,key;
	cin>>n;
	vector<int> v1,v2;
	for(int j=0;j<n;j++)
	{
		cin>>key;
		v1.push_back(key);
	}
	cin>>n;
	for(int j=0;j<n;j++)
	{
		cin>>key;
		v2.push_back(key);
	}
	algo(v1,v2);
	return 0;
}