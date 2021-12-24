#include <iostream>


int main() {
  std::string l = "";
  std::string suml1 = "";
  int x;
  int y;
  std::cout << "set x" << '\n';
  std::cin >> x;
  std::cout << "set y" << '\n';
  std::cin >> y;

  for (int i = 0; i < x; i++) {
    l = l + "* ";
  }
  for (int i = 0; i < y; i++) {
    suml1 +=l +"\n";
  }

  std::cout << suml1 << '\n';
  return 0;
}
