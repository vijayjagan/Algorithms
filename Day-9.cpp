#include <iostream>
using namespace std;

double mathPow(double x , int n){
    if(n == 0)
        return 1;
    if(n>0)
        return x * mathPow(x , n-1);    
    return  (1/x) * mathPow(x , n+1)  ;    
}
int main(){
     cout<<mathPow(2.0000,-2)<<endl;
}