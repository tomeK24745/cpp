#include <iostream>

int main() {
  int i;
  int j;
  int s;
  int c=0;

for (s = 0; s < 2; s++) {
  for (i = 1; i <= 20; i++) {
    for (j = 2; j < i; j++) {
      if(i%j==0) {
        c++;
        break;
      }
    }
    if(c==0 && i!=1)
    std::cout << i << " ";
    c = 0;
  }
  std::cout << '\n';
}
  return 0;
}
