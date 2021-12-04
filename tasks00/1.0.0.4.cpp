# include <iostream>
# include <string>

auto main ( int argc , char * argv []) -> int
{
auto const a = std :: stoi ( argv [1]);
auto const b = std :: stoi ( argv [2]);

if (a > b) {
  std::cout << "większa liczba to: " << a <<'\n';
} else {
  std::cout << "większa liczba to: "<< b <<'\n';
}
if (a == b) {
  std::cout << "liczby są równe" << '\n';
}
}
