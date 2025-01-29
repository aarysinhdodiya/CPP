#include<iostream>
using namespace std;

int main()
{
    int num,remender, ans = 0, pow = 1;
    cout << "Enter Any Binary Number:" << endl;
    cin >> num;

    while(num > 0){
        remender = (num % 10);
        num = num / 10;
        ans += (pow * remender);
        pow *= 2;
    }
    cout <<"Decimal Number of given Decimal Number is:" << ans;
    return 0;
}