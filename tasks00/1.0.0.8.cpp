# include <iostream>
# include <string>

auto main ( int argc , char * argv []) -> int
{
auto const a = std :: stoi ( argv [1]);
auto const b = std :: stoi ( argv [2]);
auto const c = std :: stoi ( argv [3]);



if ((a > b) && (a > c)) {
  std::cout << "Największa liczba to : " << a <<'\n';
}
if ((b > a) && (b > c)) {
  std::cout << "Największa liczba to : " << b <<'\n';
}
if ((c > a) && (c > b)) {
  std::cout << "Największa liczba to : " << c <<'\n';
}
if ((a == b) && (a == c) && (b == c)) {
  std::cout << "Wszystkie liczby są równe" <<'\n';
}


if (a == b) {
  std::cout << "Największe liczbay to :" << a << " oraz " << b <<'\n';
}
if (a == c) {
  std::cout << "Największe liczbay to :" << a << " oraz " << c <<'\n';
}
if (b == c) {
  std::cout << "Największe liczbay to :" << a << " oraz " << c <<'\n';
}
}
