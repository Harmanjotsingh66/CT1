#include<iostream>
using namespace std;

// Function to swap elements
void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

//Function to rearrange the array 
void rearrangeArray(int arr[],int n)
{
    //Start from second element and increment
    for(int i=1;i<n;i+=2)
    {
        if (arr[i-1]>arr[i])
        {
            swap(arr,i-1,i);
        }
        //swap the elements
        if (i+1<n && arr[i+1]>arr[i])
        {
            swap (arr,i+1,i);
        }
    }
}

int main()
{
    int arr[]={1, 2, 3, 4, 5, 6, 7};
    int n=sizeof(arr) / sizeof(arr[0]);

    rearrangeArray(arr,n);
    // print output array
    for(int i=0;i<n;i++)
    {
        printf("%d",arr [i]);
    }
    return 0;

}

