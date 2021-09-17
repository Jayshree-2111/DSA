#include<iostream>
using namespace std;
void reverse_array(int arr[], int n);
void print_array(int arr[], int n);

void reverse_array(int arr[],int n)
{
	int i,temp=0;
	int j= n;
	for(i=0;i<=j;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	print_array(arr,n);
}

void print_array(int arr[], int n){
	cout<<"Reverse array would be: "<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<< arr[i]<< " ";
	}
	cout<<endl<<"Size of array is: "<<n;
}

int main()
{
	int arr[]={1,2,3,4,5};
	int n= sizeof(arr)/sizeof(arr[0]);
	cout<<n<<endl;
	reverse_array(arr,n);
	return 1;
}

/*OUTPUT:
5
Reverse array would be:
5 4 3 2 1
Size of array is: 5
--------------------------------
Process exited after 0.05319 seconds with return value 1
Press any key to continue . . .
*/

