#include<iostream>
using namespace std;

int minimumNumber( int a , int b){
    return (a<b)?a:b;
}

int smallestSubstring(int arr[], int length,int k)
{
    int sum =0;
    int windowSize = length + 1 ; int left =0;
    for(int right = 0; right < length ;right++) {
        sum+=arr[right];
        while(sum >= k){
            windowSize = minimumNumber(windowSize , right - left + 1);
            sum-= arr[left ++ ];
        }
    } 
    return windowSize;
}
int main(){
   int arr[] = {2,3,1,2,4,3};
   int length = sizeof(arr)/sizeof(arr[0]);
   int k = 7;
   cout << "Smallest Number is "<<smallestSubstring(arr,length,k)<<endl;
   return 0;
}
