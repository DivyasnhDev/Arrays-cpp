#include <iostream>
using namespace std;


int* rotate(int arr[],int d,int n)
{
    int* r_arr = new int[n];
    int j=0;
    for(int i=d; i<n ; i++,j++)
    {
        r_arr[j] = arr[i];
    }
    for(int i=0;i<d;i++)
    {
        r_arr[j]=arr[i];
        j++;
    }
    return r_arr;
}

int main() {
	// your code goes here
	int arr[4]={1,2,3,4};
	int* ptr = rotate(arr,2,4);
	
	return 0;
}
