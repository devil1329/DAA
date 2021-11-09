#include<iostream>
#include<map>
#include<vector>
using namespace std;

void algo(vector<char>& v,int n)
{
	map<char,int> m;
	for(char c:v)
	{
		m[c]++;
	}
	char maxc=' ';
	int max=1;
	for(auto it=m.begin();it!=m.end();it++)
	{
		if(max<it->second)
		{
			maxc=it->first;
			max=it->second;
		}
	}
	if(max!=1)
		cout<<maxc<<"-"<<max<<endl;
	else
		cout<<"No Duplicates Present"<<endl;
}

int main()
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int ctr=0;
		int n;char key;
		cin>>n;
		vector<char> v;
		for(int j=0;j<n;j++)
		{
			cin>>key;
			v.push_back(key);
		}
		algo(v,v.size());
	}
	return 0;
}