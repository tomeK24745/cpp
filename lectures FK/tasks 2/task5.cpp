#include <iostream>
#include <string>
#include <vector>

auto split(std::string sentence) -> void {
  auto vec = std::vector<std::string> (0) ;
  std::string input;

  std::cout << sentence.size() << '\n';

  for(int i = 0;i < sentence.size();i++) {
    input.push_back(sentence[i]);
    std::cout << input << '\n';
        if(sentence[i] == ' '){
            vec.push_back(input);
            input = "";
            }

          }

std::cout << input << '\n';
}

auto main() -> int {
  std::string sentence;
  std::cout << "enter a sentence" << '\n';
  std::cin >> sentence;
  split(sentence);
}
