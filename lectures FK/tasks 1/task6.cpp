#include <iostream>

auto is_divisible(int number,int divider) -> bool {
  if (number % divider == 0) {
    return true;
  } else {
    return false;
  }
}

auto is_even(int number,int divider) -> bool {
  bool result = is_divisible(number, divider);
  if (result == true) {
    return true;
  } else {
    return false;
  }
}

  auto main() -> int {
    int a;
    int b;
    std::cout << "enter number" << '\n';
    std::cin >> a;
    std::cout << "enter divider" << '\n';
    std::cin >> b;
    std::cout << "result : " << is_even(a,b) << '\n';
    return 0;
  }
