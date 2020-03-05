/*
Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Example 1:

Input: [1,3,5,6], 5
Output: 2
*/
#include<iostream>
using namespace std;
int productOfTwoNumbers(int arr[] ,int size ,int target){
    int minimumValue = INT_MAX; int index = -1 ;
    for(int i = 0;i<size;i++){
        if(arr[i]==target)
            return i;
        int difference = target - arr[i];
        if(minimumValue > difference && difference > 0){
            index = i;
            minimumValue = difference;
        }
    }
    return index + 1;
}
int main(){
    int arr[] = {1,3,5,6};
    int target = 0; int size = sizeof(arr)/sizeof(int);
    cout << productOfTwoNumbers (arr,size,target)<<endl;

}