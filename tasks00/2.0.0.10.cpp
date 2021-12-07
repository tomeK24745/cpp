#include <iostream>

int main (){
  int a;
  int e=1;
  long long silnia = 1;

  std::cout << "podaj liczbe :" << '\n';
  std::cin>>a;

  do {
    silnia=silnia*e;
    e++;
  } while (e<=a);

  std::cout << silnia << "!" <<'\n';
}
