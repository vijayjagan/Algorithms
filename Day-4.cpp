/*
Write an efficient program to find the sum of contiguous subarray within a one-dimensional array of numbers which has the largest sum.
*/

#include <iostream>
using namespace std;
int max(int a, int b){
    return (a>b)?a:b;
}
int maximumNumber(int arr[],int length){
    int localMax = 0; int globalMax = INT32_MIN;
    for(int i = 0;i<length;i++){
        localMax = max(arr[i],arr[i]+localMax);
        globalMax = (localMax>globalMax)?localMax : globalMax;
    }
    return globalMax;
}
int main(){
    int arr[] ={5,4,-1,2,7,8,-6};
    int size = sizeof(arr)/sizeof(int);
    cout << "Maximum Number is : "<<maximumNumber(arr,size)<<endl;
}