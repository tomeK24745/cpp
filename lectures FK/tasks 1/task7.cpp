#include <iostream>
#include <string>


auto count_chars(std::string w1, char c1, int s1) -> int {
  int sum = 0;

  for (size_t i = 0; i < s1; i++) {
    if (w1[i] == c1) {
      sum += 1;
    }
  }
  std::cout << "Char " << c1 << " repeated " << sum << " times." << '\n';
return 0;
}

auto main() -> int {
  std::string word;
  char char1;
  std::cout << "enter word" << '\n';
  std::cin >> word;
  std::cout << "enter char" << '\n';
  std::cin >> char1;
  std::cout << count_chars(word,char1,word.size()+1)<< '\n';

}
