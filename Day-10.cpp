
/**
 * Print all subsets with given sum
 * eg : array contains 2,3,5,6,8,10 and sum is given as 10
 * we have to print all the subset of an array that gives addition of the sum
 */

#include <iostream>
using namespace std;
void printPerfectSum(int arr[],int size ,int sum){
    int left = 0; 
    int windowSize = 0;
    for(int right=0;right<size;right++){
        windowSize+=arr[right];
        while (windowSize>sum)
        {
            windowSize-=arr[left++];
        }
        if(sum == windowSize ){
            cout <<"Starting to ending index are : "<<left <<" ,"<<right<<endl ;
            windowSize-= arr[left++];
        }
    }
    
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int sum = 7;
    printPerfectSum(arr, sizeof(arr)/sizeof(int),sum);
}