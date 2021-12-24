#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int x;
  int podana;
  srand(time(NULL));
  x = rand()%100+1;
  cout << "wybierz liczbe od 1 do 100" << '\n';
  while(x != podana)
  {
    std::cout << "podaj liczbe" << '\n';
    std::cin >> podana;
    if (x > podana) {
      std::cout << "za mała" << '\n';
    } else if(x < podana){
      std::cout << "za duża" << '\n';
    }
  }
  std::cout << "zgadłeś/zgadłaś" << '\n';

  return 0;
}
