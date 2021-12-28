#include <iostream>
#include <string>

auto skip(std::string w1,int s1) ->int {
  for (size_t i = 0; i < s1; i += 2) {
    std::cout << w1[i] << " ";
  }
  std::cout << '\n';
  return 0;
}

auto main() -> int {
  std::string word;
  char char1;
  std::cout << "enter word" << '\n';
  std::cin >> word;

  std::cout << skip(word,word.size()+1)<< '\n';

}
