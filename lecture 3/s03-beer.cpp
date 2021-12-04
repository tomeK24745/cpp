#include <iostream>
using namespace std;

int main()
{
  int x;
  cout << "text" << '\n';
  cin >> x;
  
if (x==0) {
  x=99;
}
  for(x=x;x>0;x--)
  {
    cout << "Go to the store and buy some more, " << x;
    cout << " bottles of beer on the wall.." << '\n';
  }
  cout << "No more bottles of beer on the wall, no more bottles of beer" << '\n';
  return 0;
}
