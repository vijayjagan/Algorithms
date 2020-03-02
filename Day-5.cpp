/*
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"
*/


#include <iostream>
using namespace std;

string zigZagString(string s, int row)
{
    string zigzag = "";
    int n = row;
    int index = 0;
    int up = 0;

    for (int i = 0; i < s.length(); i++)
    {
        int currentRow = row - n + 1;
        if (n == row || n == 1)
        {
            zigzag+=s[index];
            index = index + (row - 1) * 2;
        }
        /* one increase and one decrease Operation */
        else
        {
            zigzag+=s[index];
            if (up++ % 2 == 0)
                index = index + (row - currentRow) * 2;
            else
            {
                index = index + (row - n) * 2;
                up = 0;
            }
        }

        if (index >= s.length())
        {
            n--;
            index = row - n;
            up = 0;
        }
    }
    return zigzag;
}
int main()
{
    string s = "paypalishiring";
    cout<<zigZagString(s, 3)<<endl;
}