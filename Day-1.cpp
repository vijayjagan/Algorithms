#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int number(int array[5] , int length,int n){
    sort(array,array+length);
    int number = 0;
    for(int i=0;i<length;i++){
        number += array[i];
        int result = number + (array[i] * (length - 1 - i));
        if(result == n)
            return array[i];
    }
    return -1;
}
int main(){
   int array[5] = {3, 1, 10, 8, 4};
   int n = 16;
   int arrayLength = sizeof(array)/ sizeof(array[0]);
   cout<<"Number is "<< number(array,arrayLength,n);

}