#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main()
{
    int even[6] = {1, 3, 5, 8, 12, 34};
    int odd[5] = {1, 2, 4, 7, 9};
    cout << "In the Even array 12 is at " << BinarySearch(even, 6, 12) << " Index" << endl;
    cout << "In the Odd array 4 is at " << BinarySearch(odd, 6, 4) << " Index";
    return 0;
}
