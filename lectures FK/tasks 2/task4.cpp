#include <iostream>
#include <string>
#include <vector>
#include <numeric>



auto average_of(std::vector<int> vec1 ) -> void {
  int sum1;
  int av;
  sum1 = accumulate(vec1.begin(), vec1.end(), 0);
  av = sum1 / vec1.size();
  std::cout << "avarage : " << av << '\n';
}

auto main() -> int {
  int input;
  struct student {
    std::string imie;
    std::string nazwisko;
    std::vector<int> oceny;
  }
  s1234 = {"Adam","Kowalski",{1,2,3,4,5}};

  std::cout << '\n';
  average_of(s1234.oceny);

  return 0;
}
