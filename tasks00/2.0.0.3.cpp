#include <iostream>

int main ()
{
int a, b, s;
std::cout << "podaj dwie liczby: " << '\n';
std :: cin >> a;
std :: cin >> b;
std::cout << "podaj dwie liczbe s: " << '\n';
std :: cin >> s;

if (s<=0) {
  std::cout << "s nie może być mniejsze bądź równe 0 " << '\n';
  return 0;
}else{
  for (int i=1; i<=s; i++)
  {
    for (int i=a; i<=s; i++)
    {
    std :: cout << i << std :: endl;
    }
  }
     return 0;
  }
}
