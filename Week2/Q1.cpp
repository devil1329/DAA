#include<iostream>
using namespace std;

int binarySearch(int n,int a[],int key)
{
	int l=0,r=n-1;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(a[mid]==key)
		{
			return mid;
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
	return -1;
}

void algo(int a[],int n,int key)
{
	int ctr=0;
	int l=binarySearch(n,a,key);
	if(l==-1)
		return;
	int r=l+1;
	while(a[l]==key && l>-1)
	{
		ctr++;
		l--;
	}
	while(a[r]==key && r<n)
	{
		ctr++;
		r++;
	}
	cout<<key<<"-"<<ctr<<endl;
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
		algo(a,n,key);
	}
}
