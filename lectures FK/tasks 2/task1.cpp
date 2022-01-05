#include <iostream>
#include <string>
#include <vector>
#include <numeric>

auto average_of(std::vector<int> vec1 ) -> void {
  int sum1;
  int av;
  sum1 = accumulate(vec1.begin(), vec1.end(), 0);
  av = sum1 / vec1.size();
  std::cout << "avarage : " << av << '\n';
}

auto main() -> int {
  int input;
  auto vec = std::vector<int> (0) ;
  for (auto i = 0; i < 5; i++) {
    std::cout << "enter "<< i + 1 << " nuber" <<'\n';
    std::cin >> input;
    vec.push_back(input);
  }

  std::cout << '\n';
  average_of(vec);

  return 0;
}
