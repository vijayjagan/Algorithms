/*

*       *
 *     * 
* *   * *
 * * * * 
* * * * *
 * * * * 
* *   * *
 *     * 
*       *

*/


#include <iostream>
using namespace std;

bool condition(int a, int b)
{
    if ((a % 2 == 0 && b % 2 == 0 )|| (a % 2 != 0 && b % 2 != 0)) 
        return true;
    return false;
}
void pattern(int n)
{
    int m = n + (n - 1);
    int left = 0;
    int right = m - 1;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            if (left == j || right == j 
            || (left > j && condition(j, left)) 
            || (right < j && condition(j, right)))
                cout << "*";
            else
                cout << " ";
        }
        if (i>=m/2){
            left--;
            right++;
        }
        else{
            left++;right--;
        }
       cout<<endl;
    }
}
    int main()
{
    int n = 10;
    pattern(n);
}
