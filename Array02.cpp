#include <bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct minmax
{
	int min;
	int max;
};

struct minmax fun(int *A,int n)
{
	struct minmax anse;
	int i;
	if(n==1)
	{
		anse.min=A[0];
		anse.max=A[0];
		return anse;
	}
	else
	{
		if(A[0]>A[1])
		{
			anse.max=A[0];
			anse.min=A[1];
		}
		else
		{
			anse.max=A[1];
			anse.min=A[0];
		}
	

		for(i=0;i<n;i++)
		{
			if(anse.max<A[i])
			{
				anse.max=A[i];
			}
			else if(anse.min>A[i])
			{
				anse.min=A[i];
			}
		}
	}
	
	return anse;
}

int main()
{
int t;
cin>>t;
while(t--)
{
	int A[100];
	int n,i;
	struct minmax ans;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	ans=fun(A,n);
	cout<<"MIN IS:"<<ans.min<<endl;
	cout<<"MAX IS:"<<ans.max<<endl;

}
return 0;
}
