#include <iostream>
#include <string>

auto main() -> int {
  int mnames = 0;
  int fnames = 0;
  std::string str[6];

  for (auto i = 0; i < 5; i++) {
    std::cout << "enter "<< i + 1 << " name" <<'\n';
    std::cin >> str[i];
    if (str[i].back() == 'a') {
      fnames += 1;
    } else {
      mnames += 1;
    }
  }
  std::cout << '\n';
  std::cout << "male names :" << mnames << '\n';
  std::cout << "female names :" << fnames << '\n';
  return 0;
}
