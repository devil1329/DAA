#include<iostream>
using namespace std;

void binarySearch(int n,int a[],int key)
{
	int l=0,r=n-1,ctr=0;
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
		binarySearch(n,a,key);
	}
	return 0;
}
