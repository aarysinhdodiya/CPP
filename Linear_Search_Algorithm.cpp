#include<iostream>
using namespace std;

int search(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, target,a = 0;
    cout << "Enter the total element of Array:";
    cin >> n;

    int arr[n];

    cout <<"Enter the Array:";

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\nEnter the target to search from the given array:";
    cin >> target;

    cout << search(arr, n,target);
    return 0;
}