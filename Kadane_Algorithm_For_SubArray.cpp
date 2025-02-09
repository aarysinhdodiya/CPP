#include<iostream>
using namespace std;

int main()
{
    int maxSum = 0;
    int CurrentSum = 0;
    int arr[5] = {2, -4, 3, 10, 5};

    for(int i = 0; i < 5; i++){
        CurrentSum += arr[i];
        maxSum = max(CurrentSum, maxSum);
        if(CurrentSum < 0){
            CurrentSum = 0;
        }
    }
    cout <<"The Max Sum Of Subarray is: "<< maxSum << endl;
    return 0;
}