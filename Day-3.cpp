#include<iostream>
using namespace std;
int sum(int left , int right , int arr[]){
    int sum =0;
    for(int i=left ;i<right;i++){
        sum+=arr[i];
    }
    return sum;
}
int equilibriumIndex(int arr[],int length){
    int leftSum = 0; int rightSum=0;
    for(int i=0;i<length;i++){
        if(i!=0 && i != length - 1){
            leftSum = sum(0,i,arr);
            rightSum = sum(i+1,length,arr);
            if(leftSum == rightSum)
                return i;
        }
    }
    return -1;
}
int main (){
    int arr[] = {1,2,3};
    int length = sizeof(arr)/sizeof(arr[0]);
    cout<<"Index is "<<equilibriumIndex(arr,length)<<endl;

}