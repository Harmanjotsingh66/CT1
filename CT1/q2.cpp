#include<iostream>
#include<algorithm>
using namespace std;

//Function to find pair in an array
void findPair(int nums[],int n,int target)
{
    // sorting in ascending order form
    sort(nums,nums+n);
    //pointing to the endpoint of array
    int low=0;
    int high=n-1;

    while(low<high)
    {
        //sum found
        if (nums[low]+ nums[high]==target)
        {
            cout<<"pair found("<<nums[low]<<","<<nums[high]<<")\n";
            return;
        }
        //increment low
        //decrement high
        (nums[low]+nums[high]<target)? low++: high--;
    }
    cout<<"pair not found";
}
int main()
{
    int nums[]={5, 2, 6, 8, 1, 9};
    int target=12;

    int n=sizeof(nums)/sizeof(nums[0]);
    findPair(nums,n,target);
    return 0;

}