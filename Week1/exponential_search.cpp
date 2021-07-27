#include<iostream>
using namespace std;

void binarySearch(int a[],int l,int r,int key,int ctr)
{
	while(l<=r)
	{
		ctr++;
		int mid=(l+r)/2;
		if(a[mid]==key)
		{
			cout<<"Present "<<ctr<<endl;
			return;
		}
		else if(a[mid]>key)
		{
			r=mid-1;
		}
		else if(a[mid]<key)
		{
			l=mid+1;
		}
	}
	cout<<"Not Present "<<ctr<<endl;
	return;
}

void expoSearch(int n,int a[],int key)
{
	if(a[0]==key)
	{
		cout<<"Present 1"<<endl;
		return;
	}
	int ctr=1,i=1;
	while(i<n && a[i]<=key)
	{
		ctr++;
		i=i*2;
	}
	binarySearch(a,i/2,min(i,n-1),key,ctr);
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
		expoSearch(n,a,key);
	}
	return 0;
}