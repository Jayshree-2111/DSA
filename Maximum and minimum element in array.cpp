#include<iostream>
using namespace std;

int max_min(int arr[],int n)
{
	int max, min;
	if(n==1)
	{
		max=arr[0];
		min=arr[0];	
	}
	else
		{
			if(arr[0]>arr[1])
			{
				min=arr[1];
				max=arr[0];
			}
			else
			{
				min=arr[0];
				max=arr[1];
			}
			for(int i=2;i<n;i++)
			{
				if(arr[i]<min)
					min=arr[i];
				if(arr[i]>max)
					max=arr[i];
			}
	
		
	}
	cout<<"Max element: "<<max;
	cout<<endl<<"Min element: "<<min;
}
	
int main()
{
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter array elements: ";
		cin>>arr[i];
	}
	max_min(arr,n);

}
