#include<iostream>
using namespace std;

void change(int arr[], int n){
    cout << "In the function" << endl;
    for(int i = 0; i < n; i++){
        arr[i] *= 2;
        cout << arr[i] << " ";
        
    }
}
int main()
{
    int x[3] = {1, 2, 3};

    change(x, 3);
    cout << endl;
    cout<< "In main"<< endl;
    for(int i = 0; i < 3; i++){
        cout <<x[i] << " ";
    }
    return 0;
}