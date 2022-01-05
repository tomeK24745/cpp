#include <iostream>
#include <vector>

auto dot_product(std::vector<int> vec1, std::vector<int> vec2) -> void {
  int dot;
  if (vec1.size() == vec2.size()) {
    for (size_t i = 0; i < vec1.size(); i++) {
      dot += vec1[i] * vec2[i];
    }
  }
  std::cout <<'\n';
  std::cout << dot << '\n';
}

auto main() -> int {
  auto vec1 = std::vector<int> (0) ;
  auto vec2 = std::vector<int> (0) ;
  int input;

  for (auto i = 0; i < 5; i++) {
    std::cout << "enter "<< i + 1 << " number for" << " 1 " << "vector" <<'\n';
    std::cin >> input;
    vec1.push_back(input);
  }

  std::cout <<'\n';
  std::cout << "enter next vector" << '\n';
  std::cout <<'\n';

  for (auto j = 0; j < 5; j++) {
    std::cout << "enter "<< j + 1 << " number for" << " 2 " << "vector" <<'\n';
    std::cin >> input;
    vec2.push_back(input);
  }
  dot_product(vec1, vec2);
  return 0;
}
