#include <iostream>
#include <stdio.h>

int main(){
  int a, b;
  int s=0;
  std::cout << "podaj limit: " << '\n';
  std::cin >> a;
  std::cout << "podaj dzielnik: " << '\n';
  std::cin >> b;

    for (int i = 0; i < b; i++) {
      if(i%b==0){
        s +=a;
      }
    }
    std::cout << "suma:" << s << '\n';

    return 0;
}
