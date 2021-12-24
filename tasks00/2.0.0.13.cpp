#include <iostream>


int main() {
  std::string l = "";
  std::string suml1 = "";
  int x;
  std::cout << "set x" << '\n';
  std::cin >> x;

  for (size_t i = x; i >= 1; i--) {
    for (size_t j = 0; j <= i; j++) {
      std::cout<<"* ";
    }
    std::cout<<"\n";
  }
    std::cout << "* " << '\n';
  return 0;
}
