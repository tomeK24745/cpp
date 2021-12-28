#include <iostream>
#include <string>

auto is_palindrome(std::string w1,int s1) -> bool {
int f1 = 0;
int k = 1;
bool palindrome;

for (size_t i = 0; i < s1; i++, k++) {
  if(w1[i] != w1[w1.size()-k]){
    f1 ++;
  }
}
if(f1 == 0){
  palindrome = true;
} else {
  palindrome = false;
}
std::cout << "result : " << palindrome << '\n';
return 0;
}

auto main() -> int {
  std::string word;
  std::cout << "enter word" << '\n';
  std::cin >> word;

  std::cout << is_palindrome(word,word.size())<< '\n';
return 0;
}
