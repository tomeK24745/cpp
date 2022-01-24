#include <iostream>
#include <string>
#include <vector>

auto split(std::string sentence) -> std::vector<std::string> {
  auto vec = std::vector<std::string> (0) ;
  std::string input;

  std::cout << sentence.size() << '\n';

  for(int i = 0;i < sentence.size();i++) {

        if(sentence[i] == ' ' || sentence[i] == sentence.size()-1) {
            vec.push_back(input);
            input = "";
            std::cout << "PUSH" << '\n';
            }
            std::cout << i << '\n';
            input.push_back(sentence[i]);
            std::cout << input <<"|"<< '\n';
          }

std::cout << input << '\n';
  return vec;
}

auto main() -> int {
  auto asd = std::vector<std::string> (0) ;
  std::string sentence;
  std::cout << "enter a sentence" << '\n';
  getline(std::cin, sentence);

  asd=split(sentence);
std::cout << " " << '\n';
std::cout << " " << '\n';
  for (size_t i = 0; i < asd.size(); i++) {
    std::cout << asd[i] << '\n';
  }

}
