#include<iostream>
using namespace std;

int main()
{
    int num,remender,ans = 0,pow = 1;
    cout << "Enter Any Number:" << endl;
    cin >> num ;

    while(num > 0){
        remender = (num % 2);
        num = num / 2;
        ans += (pow * remender);
        pow *= 10;
    }
    cout << "The Connvertion of given number into Binary is:" << ans << endl;
    return 0;
}