#include <iostream>
#include <string>
using namespace std;

int main()
{
  int x;
  cout << "wybierz liczbę" << '\n';
  std::cin >> x;

  for(cin >> x; x>0; x--)
  {
    cout << x << '\n';
  }
  cout << "done" << '\n';
  return 0;
}
