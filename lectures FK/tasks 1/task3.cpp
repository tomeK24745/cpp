#include <iostream>
#include <string>

int main(){
  std::string name1;
  std::string name2;

  std::cout << "What's your first name ?" << '\n';
  std::cin >> name1;
  std::cout << "What's your middle name ?" << '\n';
  std::cin >> name2;

  if (name1.size() > name2.size() ) {
    std::cout << "Your first name is longer !" << '\n';
  }
  if (name1.size() < name2.size() ) {
    std::cout << "Your middle name is longer ..." << '\n';
  }
  if (name1.size() == name2.size() ) {
    std::cout << "Your names got the same lengh ." << '\n';
  }

  return 0;
}
