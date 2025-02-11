#include<iostream>
using namespace std;

void ascending(int arr[], int size){
    for(int start = 0; start < size - 1; start++){
        for(int start1 = start + 1; start1 < size - start - 1;start1++){
            if(arr[start] > arr[start1]){
                int temp = arr[start];
                arr[start] = arr[start1];
                arr[start1] = temp;
            }
        }
    }
}
int arithmetic(int arr[], int size){
    ascending(arr, 5);
    int key = arr[1] - arr[0];
    for(int start = 0; start < 4; start++){
        if(key != arr[start + 1] - arr[start]){
            return -1;
        }
    }
    return 1;
}
int main()
{
    int arr[5] = {1, 5, 3, 7, 9};
   
    cout << arithmetic(arr, 5);
}