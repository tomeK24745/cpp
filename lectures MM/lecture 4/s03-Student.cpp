#include <iostream>
using namespace std;

struct bs{
  string imie;
  string nazwisko;
  int nr_indeksu;
  int aktualny_semestr;
  double srednia_ocen;
} opl = {"Adam","Kowalski",123456789,1,4.6};

int main(){
  cout << "imie: " << opl.imie << '\n';
  cout << "nazwisko: " << opl.nazwisko << '\n';
  cout << "numer indeksu: " << opl.nr_indeksu << '\n';
  cout << "aktualny semestr: " << opl.aktualny_semestr << '\n';
  cout << "srednia ocen: " << opl.srednia_ocen << '\n';
  return 0;
}
