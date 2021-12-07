#include <iostream>

int main (){
  int a;
  int e=1;
  long long silnia = 1;

  std::cout << "podaj liczbe :" << '\n';
  std::cin>>a;

  while(e<=a){
    silnia=silnia*e;
    e++;
  }
  std::cout << silnia << "!" <<'\n';
}
