/**
 * Given an array of integers and a sum, the task is to print all subsets of given array with sum equal to given sum.

Examples:

Input : arr[] = {2, 3, 5, 6, 8, 10}
        sum = 10
Output : 5 2 3
         2 8
         10

Input : arr[] = {1, 2, 3, 4, 5}
        sum = 10
Output : 4 3 2 1 
         5 3 2 
         5 4 1 
 * */
#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> mySubArray) {
    for (int  it = 0; it <mySubArray.size(); ++it)
        cout << ' ' << mySubArray.at(it);
    cout << endl;
}

void printPerfectSum(vector<int> mySubArray, int arr[], int index, int sum, int arraySize) {
    if (sum == 0) {
        print(mySubArray);
        return;
    }

    if (sum < 0 || index >= arraySize)
        return;
    mySubArray.push_back(arr[index]);
    printPerfectSum(mySubArray, arr, index + 1, sum - arr[index], arraySize);
    mySubArray.erase(mySubArray.end() - 1);
    printPerfectSum(mySubArray, arr, index + 1, sum, arraySize);

}

int main() {
    int arr[] = {2, 3, 5, 6, 8, 10};
    int size = sizeof(arr) / sizeof(int);
    int sum = 10;
    vector<int> vector;
    printPerfectSum(vector, arr, 0, sum, size);
}
