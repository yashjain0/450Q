#include <bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void fun(int *A,int n)
{
	int j=n-1;
	for(j=n-1;j>=0;j--)
	{
	    printf("%d ",A[j]);
	}
	
}
int main()
{
int t;
cin>>t;
while(t--)
{
	int A[100];
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	fun(A,n);
	

}
return 0;
}
