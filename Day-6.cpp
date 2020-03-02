/*
Given a binary string, that is it contains only 0s and 1s. We need to make this string a sequence of alternate characters by flipping some of the bits, our goal is to minimize the number of bits to be flipped.
Examples :

Input : str = “001”
Output : 1
Minimum number of flips required = 1
We can flip 1st bit from 0 to 1 

Input : str = “0001010111”
Output : 2
Minimum number of flips required = 2
We can flip 2nd bit from 0 to 1 and 9th 
bit from 1 to 0 to make alternate 
string “0101010101”.
*/

#include <iostream>
using namespace std;

int min(int a, int b)
{
    return a < b ? a : b;
}
char flip(char a)
{
    return a == '0' ? '1' : '0';
}
int totalCount(string s, char firstCharacter)
{
    int count = 0;
    count = (s[0] != firstCharacter) ? count + 1 : count;
    s[0] = firstCharacter;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] != s[i + 1])
            ;
        else
        {
            count++;
            s[i + 1] = flip(s[i + 1]);
        }
    }
    return count;
}
int main()
{
    string s;
    cin >> s;
    cout << "Total number of flip : " << min(totalCount(s, '0'), totalCount(s, '1')) << endl;
}