#include<iostream>
#include<math.h>
using namespace std;

int jumpSearch(int n,int a[],int key)
{
	int jump=sqrt(n);
	int steps=jump,prev=0,ctr=0;
	while(a[min(steps,n)-1]<key)
	{
		ctr++;
		prev=steps;
		steps+=jump;
		if(prev>=n)
		{
			return -1;
		}
	}

	while(a[prev]<key){
		ctr++;
		prev+=1;
		if(prev==min(steps,n))
		{
			return -1;
		}
	}

	if(a[prev]==key){
		return prev;
	}

	return -1;
}

// time complexity for this algo is O(n*n*sqrt(n))
void algo(int arr[],int n)
{
	int flag=0;
	for(int i=0;i<n;i++)// O(n)
	{
		for(int j=0;j<n;j++)// O(n)
		{
			int s=arr[i]+arr[j];
			int k=jumpSearch(n,arr,s);// O(sqrt(n))
			if(k!=-1 && i<j && j<k)
			{
				cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
				flag=1;
			}
		}
	}
	if(flag==0)
		cout<<"No sequence found."<<endl;
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
