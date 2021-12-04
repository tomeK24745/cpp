#include <iostream>
using namespace std;

int main(){
   int a;
   bool flag = true;
   cout<<" Podaj liczbe : " << '\n';
   cin>>a;

   if (a<=0) {
     std::cout << "a nie może być mniejsze bądź równe 0" << '\n';
   }else{
     for(int i = 2; i <= a / 2; i++) {
        if(a % i == 0) {
           flag = false;
           break;
        }
     }
     if (flag==true)
        cout<<a<<" twoja liczba jest pierwsza" << '\n';
     else
        cout<<a<<" twoja liczba nie jest pierwsza" << '\n';
     return 0;
  } 
   }
