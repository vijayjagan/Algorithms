/*
Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Example 1:

Given nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.

It doesn't matter what you leave beyond the returned length.
*/

#include <iostream>

using namespace std;
int removeDuplicates(int nums[] , int size) {
    
    int value = nums[0]; int count =0;
    for(int i=1;i<size;i++ ){
        if(value!=nums[i]){
            count++;
            value = nums[i];
            nums[count]=nums[i];
        }
    }
    for(int i = 0;i<count;i++){
        cout<<nums[i];
    }
    cout<<endl;
    return count;
}

int main()
{

    int nums[] = {0,0,1,1,1,2,2,3,3,4,5,5,6,7,8,9,10};
    cout<<removeDuplicates(nums,sizeof(nums)/sizeof(int))<<endl;
    return 0;
}

