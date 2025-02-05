#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;
    cout << "size =" << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout << vec.at(0) << endl;
    return 0;
}