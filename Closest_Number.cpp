/* Given two integers n and m (m != 0). Find the number closest to n and divisible by m. 
 If there is more than one such number, then output the one having maximum absolute value.*/

 #include<iostream>
 using namespace std;
 
 int main(){
     int n, m;
     cout << "Enter value of m:";
     cin >> m;
 
     cout << "Enter value of n:";
     cin >> n;

     int Num = (n/m) * m;
     int Num1 = Num;
     Num += m;

     int Num2 = n - Num;
     int Num3 = Num - n;

     if(Num2 > Num3){
        cout << Num;
     }
     else if(Num2 = Num3){
        cout << Num;
     }
     else{
        cout << Num1;
     }
     return 0;
 }