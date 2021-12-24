#include <iostream>


int main() {
  std::string l = "";
  std::string suml1 = "";
  int x;
  std::cout << "set x" << '\n';
  std::cin >> x;

  for (int i = 0; i < x; i++) {
    l = l + "* ";
    suml1 += l + "\n";
  }

  std::cout << suml1 << '\n';
  return 0;
}
