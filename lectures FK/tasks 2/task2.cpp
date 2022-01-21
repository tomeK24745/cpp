#include <iostream>
#include <string>
#include <vector>
#include <numeric>

auto is_palindrome(std::string w1,int s1) -> bool {
int f1 = 0;
int k = 1;

for (size_t i = 0; i < s1; i++, k++) {
  if(w1[i] != w1[w1.size()-k]){
    f1 ++;
  }
}
if(f1 == 0){
  return true;
}else{
      return false;
    }
}

auto filter_palindromes(std::vector<std::string> vec1 ) -> std::vector<std::string> {
  auto vec = std::vector<std::string> (0) ;
  auto palindrome = false;
  std::string input;

for (size_t i = 0; i < vec1.size(); i++) {
  input = vec1[i];
  palindrome = is_palindrome(input, input.size());
    if (palindrome = true) {
      vec.push_back(input);
    }
  }
  return vec;
}

auto main() -> int {
  std::string input;
  auto vec = std::vector<std::string> (0) ;
  std::vector<std::string> vec33 = filter_palindromes(vec);

  for (auto i = 0; i < 5; i++) {
    std::cout << "enter "<< i + 1 << " word" <<'\n';
    std::cin >> input;
    vec.push_back(input);
  }

  std::cout << '\n';
  std::cout << "palindromes : " << '\n';
  //filter_palindromes(vec);
  /**for (auto element : filter_palindromes(vec))
   {
       std::cout << element << " ";
   }
   **/

   for (auto i = 0; i < 5; i++) {
     std::cout << vec33[i] <<'\n';
   }

   std::cout << "\n";
  return 0;
}
