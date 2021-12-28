#include <iostream>

auto is_even(int number) -> bool {

  if (number % 2 == 0) {
    return true;
  } else {
    return false;
  }
}
  auto main() -> int {
    int a;
    std::cout << "enter number" << '\n';
    std::cin >> a;
    std::cout << "result : " << is_even(a) << '\n';
    return 0;
  }
