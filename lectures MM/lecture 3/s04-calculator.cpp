# include <iostream>

auto main( int argc , char * argv []) -> int
{
  int wybor;
  std::cout << "\n 1. dodawanie \n 2. odejmowanie \n 3. mnożenie \n 4. dzielenie" << '\n';
  std::cin >> wybor;
  if (wybor == 1) {
    auto const a = std :: stoi ( argv [1]);
    auto const b = std :: stoi ( argv [2]);
    std::cout << ( a + b ) << "\n";
    return 0;
  }
  if (wybor == 2) {
    auto const a = std :: stoi ( argv [1]);
    auto const b = std :: stoi ( argv [2]);
    std::cout << ( a - b ) << "\n";
    return 0;
  }
  if (wybor == 3) {
    auto const a = std :: stoi ( argv [1]);
    auto const b = std :: stoi ( argv [2]);
    std::cout << ( a * b ) << "\n";
    return 0;
  }
  if (wybor == 4) {
    auto const a = std :: stoi ( argv [1]);
    auto const b = std :: stoi ( argv [2]);
    std::cout << ( a / b ) << "\n";
    return 0;
  }
}
