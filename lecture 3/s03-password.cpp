#include <iostream>
#include <cstdlib>
using namespace std;


string password;
string password_r;


int main()
{
  cout << "password" << '\n';
  getline (cin, password);
  cout << "enter your password" << '\n';

  do{
    getline(cin, password_r);
    std::cout << "try again" << '\n';
  } while (password_r != password);
    cout << "correct" << '\n';
    return 0;
}
