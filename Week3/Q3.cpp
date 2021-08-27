// program to check whether there is any duplicate element is present or not


#include<iostream>
using namespace std;

void merge(int a[],int left,int mid,int right)
{
	int n1=mid-left+1,n2=right-mid;
	int l[n1],r[n2];
	for(int i=0;i<n1;i++)
		l[i]=a[left+i];
	for(int i=0;i<n2;i++)
		r[i]=a[mid+1+i];
	int i=0,j=0,k=left;
	while(i<n1 && j<n2)
	{
		if(l[i]<=r[j])
			a[k++]=l[i++];
		else
			a[k++]=r[j++];
	}
	while(i<n1)
		a[k++]=l[i++];
	while(j<n2)
		a[k++]=r[j++];
}

void mergeSort(int a[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		mergeSort(a,l,m);
		mergeSort(a,m+1,r);
		merge(a,l,m,r);
	}
}

void algo(int a[],int n)
{
	mergeSort(a,0,n-1);
	int flag=0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
			flag=1;
	}
	if(flag==1)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
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
		algo(a,n);
	}
}