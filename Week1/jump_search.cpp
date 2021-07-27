#include<iostream>
#include<math.h>

using namespace std;

int jumpSearch(int n,int a[],int key)
{
	int jump=sqrt(n);
	int steps=jump;
	int prev=0;
	int ctr=0;
	while(a[min(steps,n)-1]<key)
	{
		ctr++;
		prev=steps;
		steps+=jump;
		if(prev>=n)
		{
			cout<<"Not Present "<<ctr<<endl;
			return 0;
		}
	}

	while(a[prev]<key){
		ctr++;
		prev+=1;
		if(prev==min(steps,n))
		{
			cout<<"Not Present "<<ctr<<endl;
			return 0;
		}
	}

	if(a[prev]==key){
		cout<<"Present "<<ctr+1<<endl;
	}
	else{
		cout<<"Not Present "<<ctr<<endl;
	}

	return 0;
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
		jumpSearch(n,a,key)+1;
	}
	return 0;
}