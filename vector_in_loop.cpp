#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3};
    for(int val : vec){
        cout << val << endl;
    }
    return 0;
}