/* Given two integers n and m (m != 0). Find the number closest to n and divisible by m. 
 If there is more than one such number, then output the one having maximum absolute value.*/

 #include<iostream>
 using namespace std;
 
 int main(){
     int n, m,a;
     cout << "  Enter Positive integer!!" << endl;
     cout << "Enter value of m:";
     cin >> m;
 
     cout << "Enter value of n:";
     cin >> n;
 
     for(int i = m; i < m + n; i++){
         if(i % m == 0){
            if(i < n){
                a = i;
            }
            else if(i > n){
                if((n - a) < (i - n)){
                    cout << a;
                }
                else{
                    cout << i;
                }
            }
         }
     }
     return 0;
 }