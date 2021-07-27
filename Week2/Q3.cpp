#include<iostream>
using namespace std;

int algo(int arr[],int n,int key)
{
	int ctr=0;
	for(int i=0;i<n;i++)
	{
		int s=arr[i]+key;
		for(int j=0;j<n;j++){
			if(arr[j]==s)
				ctr++;
		}
	}
	return ctr;
}

int main()
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n,key;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++)
			cin>>a[j];
		cin>>key;
		cout<<algo(a,n,key)<<endl;
	}
}
