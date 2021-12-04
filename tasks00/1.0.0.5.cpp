# include <iostream>
# include <string>

auto main ( int argc , char * argv []) -> int
{
auto const a = std :: stoi ( argv [1]);

if (a < 0) {
  std::cout << a *(-1) <<'\n';
} else{
  std::cout << a << '\n';
}

}
