#include <iostream>

int main ()
{
int a, b;
std::cout << "podaj trzy liczby: " << '\n';
std :: cin >> a;
std :: cin >> b;
std::cin >> c;
for (int i=a; i<b; i++)
{
std :: cout << i << std :: endl;
}
   return 0;
}
