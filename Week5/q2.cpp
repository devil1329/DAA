#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void algo(vector<int>& v,int k,int n)
{
	int l=0,r=n-1;
	int flag=0;
	sort(v.begin(),v.end());
	while(l<r)
	{
		int sum=v[l]+v[r];
		if(sum>k) 
			r--;
		else if(sum<k) 
			l++;
		else if(sum==k)
		{
			//res.push_back(make_pair(a[l],a[r]));
			cout<<v[l]<<" "<<v[r]<<", ";
			l++;
			r--;
			flag=1;
		}
	}
	if(flag==0)
		cout<<"No Such pair Exist";
}

int main()
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int ctr=0;
		int n,key;
		cin>>n;
		vector<int> v;
		for(int j=0;j<n;j++)
		{
			cin>>key;
			v.push_back(key);
		}
		cin>>key;
		algo(v,key,n);
		cout<<endl;
	}
	return 0;
}