#include <iostream>
using namespace std;

struct bs{
  int id;
  int id2;
  string name;
} opl = {65,2,"wer"};

int main(){
  std::cout << "name" << opl.name << '\n';
  std::cout << opl.name << '\n';
  return 0;
}
