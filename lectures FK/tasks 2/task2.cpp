#include <iostream>
#include <string>
#include <vector>
#include <numeric>

auto is_palindrome(std::string w1,int s1) -> void {
int f1 = 0;
int k = 1;

for (size_t i = 0; i < s1; i++, k++) {
  if(w1[i] != w1[w1.size()-k]){
    f1 ++;
  }
}
if(f1 == 0){
  std::cout << w1 << '\n';
  }
}

auto filter_palindromes(std::vector<std::string> vec1 ) ->void {
  std::string input;
for (size_t i = 0; i < vec1.size(); i++) {
  input = vec1[i];
  is_palindrome(input, input.size());
  }
}

auto main() -> int {
  std::string input;
  auto vec = std::vector<std::string> (0) ;
  for (auto i = 0; i < 5; i++) {
    std::cout << "enter "<< i + 1 << " word" <<'\n';
    std::cin >> input;
    vec.push_back(input);
  }

  std::cout << '\n';
  std::cout << "palindromes : " << '\n';
  filter_palindromes(vec);
  return 0;
}
