#include <iostream>

int main (){
  int a;
  long long silnia = 1;

  std::cout << "podaj liczbe :" << '\n';
  std::cin>>a;

  for(int i=1; i<=a; i++)
  silnia*=i;
  std::cout << silnia << "!" <<'\n';
}
