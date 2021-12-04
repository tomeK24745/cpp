#include <iostream>
using namespace std;

int main(){
   int a;
   int b;
   bool flag = true;
   cout<<" Podaj liczby : " << '\n';
   cin>>a;
   cin>>b;

   for(int i = 2; i <= a / 2; i++) {
      if(a % i == 0) {
         flag = false;
         break;
      }
   }
   if (flag==true)


   for(int i = 2; i <= b / 2; i++) {
      if(b % i == 0) {
         flag = false;
         break;
      }
   }
   if (flag==true)
   std::cout << "twoje liczby są pierwsze: " << a << ','<< b << '\n';

   if (a > b) {
     std::cout << "większa liczba to: " << a <<'\n';
   } else {
     std::cout << "większa liczba to: "<< b <<'\n';
   }
   if (a == b) {
     std::cout << "liczby są równe" << '\n';
   }
   return 0;
}
