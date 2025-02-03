#include<iostream>
using namespace std;

int search(int arr[], int n){
    for(int i = 0;i < n; i++){
        for(int j = i; j < n; j++){
            if(arr[i] == arr[j]){
                return arr[i];
            }
        }
    }
    return 0;
}
int main()
{
    int n,a = 0;
    cout << "Enter the total element of Array:";
    cin >> n;

    int arr[n];

    cout <<"Enter the Array:";

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << search(arr,n);
    return 0;
}