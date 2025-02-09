#include<iostream>
using namespace std;

int main()
{
    int maxSum = 0;
    int arr[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++){
        int CurrentSum = 0;
        for(int j = i; j < 5; j++){
            CurrentSum += arr[j];
            maxSum = max(CurrentSum, maxSum);
        }
    }
    cout <<"The Max Sum Of Subarray is: "<< maxSum << endl;
    return 0;
}