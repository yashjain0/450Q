#include<bits/stdc++.h>
using namespace std;

void shiftall(int arr[],int l,int r)
{
	int temp;
	while(l<=r)
	{
		if(arr[l]<0 && arr[r]<0) l++;
		else if(arr[l]>=0 && arr[r]<0)
		{
			temp=arr[l];
			arr[l]=arr[r];
			arr[r]=temp;
			l++;
			r--;
		} 
		else if(arr[l]>=0 && arr[r]>0)
		{
			r--;
		}
	}
}

int main()
{
	int arr[10]={-1,1,4,2,1,-5,-1,-5,-8,-9};
	int i;
	int l=0,r=9;
	shiftall(arr,l,r);
	for(i=0;i<10;i++)
	{
		cout<<arr[i];
	}

}
