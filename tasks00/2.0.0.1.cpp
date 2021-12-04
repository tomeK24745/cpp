#include <iostream>

int main ()
{
int a, b;
std::cout << "podaj dwie liczby: " << '\n';
std :: cin >> a;
std :: cin >> b;
for (int i=a; i<b; i++)
{
std :: cout << i << std :: endl;
}
   return 0;
}
