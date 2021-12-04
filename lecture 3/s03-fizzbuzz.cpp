#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "podaj liczbę" << '\n';
  cin >> n;
  if(n%3==0 && n%5==0){
       cout<<"FizzBuzz"<< '\n';
   }else if(n%5==0){
       cout<<"Buzz"<< '\n';
   }else if(n%3==0){
       cout<<"Fizz"<< '\n';
   }
  }
