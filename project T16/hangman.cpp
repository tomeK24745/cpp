
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <fstream> //files
#include <cstdlib> //random
#include <ctime> // time

//------------------------------------------------------

auto number_of_lines() -> int {

  int number = 0;
  std::string line;
  std::ifstream file("passwords.txt");

  while (getline(file, line))
      number++;
  return number;
}

//------------------------------------------------------

auto random_number() -> int {

  const int min_value = 1;
  int max_value = number_of_lines();
  int random_number;
  unsigned seed = time(0);

  srand(seed);
  random_number = (rand() % (max_value - min_value + 1)) + min_value;
  return random_number;
}

//------------------------------------------------------

auto random_password() -> std::string {

  std::ifstream f("passwords.txt");
  std::string s;
  int LINE = random_number();

  for (int i = 1; i <= LINE; i++)
          std::getline(f, s);

  //std::cout << '\n';
  //std::cout << s << '\n';
  //std::cout << "random :" << '\n';
  //std::cout << random_number() << '\n';
  return s;
}

//------------------------------------------------------

auto win_game () -> void {
  std::cout << '\n';
  std::cout << '\n';
  std::cout << "33 You Won 33" << '\n';
  exit(0);
}

//------------------------------------------------------



//------------------------------------------------------

auto display_hangmman_life (int life) -> void {


  if (life == 5) {
    //std::cout << "[     ]" << '\n';
    std::cout << "                                     HH    " << '\n';
    std::cout << "                                    HH     " << '\n';
    std::cout << "                                   HH      " << '\n';
    std::cout << "                                   H       " << '\n';
    std::cout << "                                   H       " << '\n';
    std::cout << "                                   H       " << '\n';
    std::cout << "                                   H       " << '\n';
    std::cout << "                                  HH   H   " << '\n';
    std::cout << "                                 HHHHHHH   " << '\n';
    std::cout << " HHHH                      H    HHH        " << '\n';
    std::cout << "  H HH H          H        HH HH           " << '\n';
    std::cout << "   HHH HH       HHH         HHH            " << '\n';
    std::cout << "     HHH H     H H           H             " << '\n';
    std::cout << "      H HH    HHH           HH             " << '\n';
    std::cout << "       HHHH HH             H H             " << '\n';
    std::cout << "        HHH H            HH H     H        " << '\n';
    std::cout << "         HHH            HHHHHHHHHHH        " << '\n';
    std::cout << "         HH            H HH HH             " << '\n';
    std::cout << "          H           HHHHHHH              " << '\n';
    std::cout << "           H        HHH H                  " << '\n';
    std::cout << "           H     HHHHH                     " << '\n';
    std::cout << "           HHHHHHHHH                       " << '\n';
    std::cout << "              HHH                          " << '\n';
    std::cout << "            HHH                            " << '\n';
    std::cout << "            H                              " << '\n';
    std::cout << "           H                               " << '\n';
    std::cout << "           H                               " << '\n';
    std::cout << "           HH                              " << '\n';
    std::cout << "           HH                              " << '\n';
    std::cout << "           H                               " << '\n';
    std::cout << "           H                               " << '\n';
    std::cout << "                                           " << '\n';
    std::cout << "           H                               " << '\n';
    std::cout << "                                           " << '\n';
    std::cout << "           H                               " << '\n';
    std::cout << "           HH                              " << '\n';
    std::cout << "            H                              " << '\n';
    std::cout << "            HH                             " << '\n';
    std::cout << "             HH                            " << '\n';
    std::cout << "              H                            " << '\n';
    std::cout << "               H                           " << '\n';
    std::cout << "               H                           " << '\n';
    std::cout << "                H                          " << '\n';
    std::cout << "                H                          " << '\n';
    std::cout << "                H                          " << '\n';
    std::cout << "                H                          " << '\n';
    std::cout << "                HH                         " << '\n';
    std::cout << "                 H                         " << '\n';
    std::cout << "                 H                         " << '\n';
    std::cout << "                 H                         " << '\n';
    std::cout << "                 H                         " << '\n';
    std::cout << "                                           " << '\n';
    std::cout << "                 H                         " << '\n';
    std::cout << "                 H                         " << '\n';
    std::cout << "                 H                         " << '\n';
    std::cout << "                 HH                        " << '\n';
    std::cout << "                  H                        " << '\n';
    std::cout << "                  H                        " << '\n';
    std::cout << "                  HH                       " << '\n';
    std::cout << "                  HH                       " << '\n';
    std::cout << "                   HH                      " << '\n';
    std::cout << "                    HH                     " << '\n';
    std::cout << "                     HHH                   " << '\n';
    std::cout << "                      HHH                  " << '\n';
    std::cout << "                       HHHH                " << '\n';
    std::cout << "                         HHHHH             " << '\n';
    std::cout << "                           HHHHHH          " << '\n';
    std::cout << "                               HHH         " << '\n';

  } else if (life == 4) {
    //std::cout << "[x    ]" << '\n';
    std::cout << "                                     HH    " << '\n';
    std::cout << "                                    HH     " << '\n';
    std::cout << "                                   HH      " << '\n';
    std::cout << "                                   H       " << '\n';
    std::cout << "                                   H       " << '\n';
    std::cout << "                                   H       " << '\n';
    std::cout << "                                   H       " << '\n';
    std::cout << "                                  HH   H   " << '\n';
    std::cout << "                                 HHHHHHH   " << '\n';
    std::cout << " HHHH                      H    HHH        " << '\n';
    std::cout << "  H HH H          H        HH HH           " << '\n';
    std::cout << "   HHH HH       HHH         HHH            " << '\n';
    std::cout << "     HHH H     H H           H             " << '\n';
    std::cout << "      H HH    HHH           HH             " << '\n';
    std::cout << "       HHHH HH             H H             " << '\n';
    std::cout << "        HHH H            HH H     H        " << '\n';
    std::cout << "         HHH            HHHHHHHHHHH        " << '\n';
    std::cout << "         HH            H HH HH             " << '\n';
    std::cout << "          H           HHHHHHHY             " << '\n';
    std::cout << "           H        HHH H    Y             " << '\n';
    std::cout << "           H     HHHHH       Y             " << '\n';
    std::cout << "           HHHHHHHHH         Y             " << '\n';
    std::cout << "              HHH            Y             " << '\n';
    std::cout << "            HHH              Y             " << '\n';
    std::cout << "            H                Y             " << '\n';
    std::cout << "           H                 Y             " << '\n';
    std::cout << "           H                 Y             " << '\n';
    std::cout << "           HH                Y             " << '\n';
    std::cout << "           HH                YY            " << '\n';
    std::cout << "           H                 YY            " << '\n';
    std::cout << "           H                 YY            " << '\n';
    std::cout << "                             YY            " << '\n';
    std::cout << "           H                               " << '\n';
    std::cout << "                                           " << '\n';
    std::cout << "           H                               " << '\n';
    std::cout << "           HH                              " << '\n';
    std::cout << "            H                              " << '\n';
    std::cout << "            HH                             " << '\n';
    std::cout << "             HH                            " << '\n';
    std::cout << "              H                            " << '\n';
    std::cout << "               H                           " << '\n';
    std::cout << "               H                           " << '\n';
    std::cout << "                H                          " << '\n';
    std::cout << "                H                          " << '\n';
    std::cout << "                H                          " << '\n';
    std::cout << "                H                          " << '\n';
    std::cout << "                HH                         " << '\n';
    std::cout << "                 H                         " << '\n';
    std::cout << "                 H                         " << '\n';
    std::cout << "                 H                         " << '\n';
    std::cout << "                 H                         " << '\n';
    std::cout << "                                           " << '\n';
    std::cout << "                 H                         " << '\n';
    std::cout << "                 H                         " << '\n';
    std::cout << "                 H                         " << '\n';
    std::cout << "                 HH                        " << '\n';
    std::cout << "                  H                        " << '\n';
    std::cout << "                  H                        " << '\n';
    std::cout << "                  HH                       " << '\n';
    std::cout << "                  HH                       " << '\n';
    std::cout << "                   HH                      " << '\n';
    std::cout << "                    HH                     " << '\n';
    std::cout << "                     HHH                   " << '\n';
    std::cout << "                      HHH                  " << '\n';
    std::cout << "                       HHHH                " << '\n';
    std::cout << "                         HHHHH             " << '\n';
    std::cout << "                           HHHHHH          " << '\n';
    std::cout << "                               HHH         " << '\n';
  } else if (life == 3) {
    //std::cout << "[xx   ]" << '\n';
std::cout << "                                     HH    " << '\n';
std::cout << "                                    HH     " << '\n';
std::cout << "                                   HH      " << '\n';
std::cout << "                                   H       " << '\n';
std::cout << "                                   H       " << '\n';
std::cout << "                                   H       " << '\n';
std::cout << "                                   H       " << '\n';
std::cout << "                                  HH   H   " << '\n';
std::cout << "                                 HHHHHHH   " << '\n';
std::cout << " HHHH                      H    HHH        " << '\n';
std::cout << "  H HH H          H        HH HH           " << '\n';
std::cout << "   HHH HH       HHH         HHH            " << '\n';
std::cout << "     HHH H     H H           H             " << '\n';
std::cout << "      H HH    HHH           HH             " << '\n';
std::cout << "       HHHH HH             H H             " << '\n';
std::cout << "        HHH H            HH H     H        " << '\n';
std::cout << "         HHH            HHHHHHHHHHH        " << '\n';
std::cout << "         HH            H HH HH             " << '\n';
std::cout << "          H           HHHHHHHY             " << '\n';
std::cout << "           H        HHH H    Y             " << '\n';
std::cout << "           H     HHHHH       Y             " << '\n';
std::cout << "           HHHHHHHHH         Y             " << '\n';
std::cout << "              HHH            Y             " << '\n';
std::cout << "            HHH              Y             " << '\n';
std::cout << "            H                Y             " << '\n';
std::cout << "           H                 Y             " << '\n';
std::cout << "           H                 Y             " << '\n';
std::cout << "           HH                Y             " << '\n';
std::cout << "           HH                YY    x xx    " << '\n';
std::cout << "           H                 YY  xxxxxxx   " << '\n';
std::cout << "           H                 YY xxxxxxx    " << '\n';
std::cout << "                             YYxxxxx xxx   " << '\n';
std::cout << "           H                 Yxxx xxxxx    " << '\n';
std::cout << "                             YBxxxxxx      " << '\n';
std::cout << "           H                               " << '\n';
std::cout << "           HH                              " << '\n';
std::cout << "            H                              " << '\n';
std::cout << "            HH                             " << '\n';
std::cout << "             HH                            " << '\n';
std::cout << "              H                            " << '\n';
std::cout << "               H                           " << '\n';
std::cout << "               H                           " << '\n';
std::cout << "                H                          " << '\n';
std::cout << "                H                          " << '\n';
std::cout << "                H                          " << '\n';
std::cout << "                H                          " << '\n';
std::cout << "                HH                         " << '\n';
std::cout << "                 H                         " << '\n';
std::cout << "                 H                         " << '\n';
std::cout << "                 H                         " << '\n';
std::cout << "                 H                         " << '\n';
std::cout << "                                           " << '\n';
std::cout << "                 H                         " << '\n';
std::cout << "                 H                         " << '\n';
std::cout << "                 H                         " << '\n';
std::cout << "                 HH                        " << '\n';
std::cout << "                  H                        " << '\n';
std::cout << "                  H                        " << '\n';
std::cout << "                  HH                       " << '\n';
std::cout << "                  HH                       " << '\n';
std::cout << "                   HH                      " << '\n';
std::cout << "                    HH                     " << '\n';
std::cout << "                     HHH                   " << '\n';
std::cout << "                      HHH                  " << '\n';
std::cout << "                       HHHH                " << '\n';
std::cout << "                         HHHHH             " << '\n';
std::cout << "                           HHHHHH          " << '\n';
std::cout << "                               HHH         " << '\n';
  } else if (life == 2) {
    //std::cout << "[xxx  ]" << '\n';
    std::cout << "                                     HH    " << '\n';
std::cout << "                                    HH     " << '\n';
std::cout << "                                   HH      " << '\n';
std::cout << "                                   H       " << '\n';
std::cout << "                                   H       " << '\n';
std::cout << "                                   H       " << '\n';
std::cout << "                                   H       " << '\n';
std::cout << "                                  HH   H   " << '\n';
std::cout << "                                 HHHHHHH   " << '\n';
std::cout << " HHHH                      H    HHH        " << '\n';
std::cout << "  H HH H          H        HH HH           " << '\n';
std::cout << "   HHH HH       HHH         HHH            " << '\n';
std::cout << "     HHH H     H H           H             " << '\n';
std::cout << "      H HH    HHH           HH             " << '\n';
std::cout << "       HHHH HH             H H             " << '\n';
std::cout << "        HHH H            HH H     H        " << '\n';
std::cout << "         HHH            HHHHHHHHHHH        " << '\n';
std::cout << "         HH            H HH HH             " << '\n';
std::cout << "          H           HHHHHHHY             " << '\n';
std::cout << "           H        HHH H    Y             " << '\n';
std::cout << "           H     HHHHH       Y             " << '\n';
std::cout << "           HHHHHHHHH         Y             " << '\n';
std::cout << "              HHH            Y             " << '\n';
std::cout << "            HHH              Y             " << '\n';
std::cout << "            H                Y             " << '\n';
std::cout << "           H                 Y             " << '\n';
std::cout << "           H                 Y             " << '\n';
std::cout << "           HH                Y             " << '\n';
std::cout << "           HH                YY    x xx    " << '\n';
std::cout << "           H                 YY  xxxxxxx   " << '\n';
std::cout << "           H                 YY xxxxxxx    " << '\n';
std::cout << "                             YYxxxxx xxx   " << '\n';
std::cout << "           H                 Yxxx xxxxx    " << '\n';
std::cout << "                             YBxxxxxx      " << '\n';
std::cout << "           H               BBB BBBB        " << '\n';
std::cout << "           HH             BBBBBBBBBB       " << '\n';
std::cout << "            H            BBB BBB B B       " << '\n';
std::cout << "            HH          BBBBBBB BB BB      " << '\n';
std::cout << "             HH         BBB  B BBB  B      " << '\n';
std::cout << "              H        BBBBBB  B B  B      " << '\n';
std::cout << "               H       B  B    BBB  B      " << '\n';
std::cout << "               H      BB  B B BBB BBBB     " << '\n';
std::cout << "                H     BB  BB B  B BB B     " << '\n';
std::cout << "                H     BB  BBBBBBB BB B     " << '\n';
std::cout << "                H     BBBBBBBB B  BB B     " << '\n';
std::cout << "                H        BB  BBBBBBBBB     " << '\n';
std::cout << "                HH       BB  BB  BB B      " << '\n';
std::cout << "                 H       BB  B B BBB       " << '\n';
std::cout << "                 H       B B BB BBB        " << '\n';
std::cout << "                 H       BUBBBBUBBB        " << '\n';
std::cout << "                 H                         " << '\n';
std::cout << "                                           " << '\n';
std::cout << "                 H                         " << '\n';
std::cout << "                 H                         " << '\n';
std::cout << "                 H                         " << '\n';
std::cout << "                 HH                        " << '\n';
std::cout << "                  H                        " << '\n';
std::cout << "                  H                        " << '\n';
std::cout << "                  HH                       " << '\n';
std::cout << "                  HH                       " << '\n';
std::cout << "                   HH                      " << '\n';
std::cout << "                    HH                     " << '\n';
std::cout << "                     HHH                   " << '\n';
std::cout << "                      HHH                  " << '\n';
std::cout << "                       HHHH                " << '\n';
std::cout << "                         HHHHH             " << '\n';
std::cout << "                           HHHHHH          " << '\n';
std::cout << "                               HHH         " << '\n';
  } else if (life == 1) {
    //std::cout << "[xxxx ]" << '\n';
    std::cout << "                                     HH    " << '\n';
std::cout << "                                    HH     " << '\n';
std::cout << "                                   HH      " << '\n';
std::cout << "                                   H       " << '\n';
std::cout << "                                   H       " << '\n';
std::cout << "                                   H       " << '\n';
std::cout << "                                   H       " << '\n';
std::cout << "                                  HH   H   " << '\n';
std::cout << "                                 HHHHHHH   " << '\n';
std::cout << " HHHH                      H    HHH        " << '\n';
std::cout << "  H HH H          H        HH HH           " << '\n';
std::cout << "   HHH HH       HHH         HHH            " << '\n';
std::cout << "     HHH H     H H           H             " << '\n';
std::cout << "      H HH    HHH           HH             " << '\n';
std::cout << "       HHHH HH             H H             " << '\n';
std::cout << "        HHH H            HH H     H        " << '\n';
std::cout << "         HHH            HHHHHHHHHHH        " << '\n';
std::cout << "         HH            H HH HH             " << '\n';
std::cout << "          H           HHHHHHHY             " << '\n';
std::cout << "           H        HHH H    Y             " << '\n';
std::cout << "           H     HHHHH       Y             " << '\n';
std::cout << "           HHHHHHHHH         Y             " << '\n';
std::cout << "              HHH            Y             " << '\n';
std::cout << "            HHH              Y             " << '\n';
std::cout << "            H                Y             " << '\n';
std::cout << "           H                 Y             " << '\n';
std::cout << "           H                 Y             " << '\n';
std::cout << "           HH                Y             " << '\n';
std::cout << "           HH                YY    x xx    " << '\n';
std::cout << "           H                 YY  xxxxxxx   " << '\n';
std::cout << "           H                 YY xxxxxxx    " << '\n';
std::cout << "                             YYxxxxx xxx   " << '\n';
std::cout << "           H                 Yxxx xxxxx    " << '\n';
std::cout << "                             YBxxxxxx      " << '\n';
std::cout << "           H               BBB BBBB        " << '\n';
std::cout << "           HH             BBBBBBBBBB       " << '\n';
std::cout << "            H            BBB BBB B B       " << '\n';
std::cout << "            HH          BBBBBBB BB BB      " << '\n';
std::cout << "             HH         BBB  B BBB  B      " << '\n';
std::cout << "              H        BBBBBB  B B  B      " << '\n';
std::cout << "               H       B  B    BBB  B      " << '\n';
std::cout << "               H      BB  B B BBB BBBB     " << '\n';
std::cout << "                H     BB  BB B  B BB B     " << '\n';
std::cout << "                H     BB  BBBBBBB BB B     " << '\n';
std::cout << "                H     BBBBBBBB B  BB B     " << '\n';
std::cout << "                H        BB  BBBBBBBBB     " << '\n';
std::cout << "                HH       BB  BB  BB B      " << '\n';
std::cout << "                 H       BB  B B BBB       " << '\n';
std::cout << "                 H       B B BB BBB        " << '\n';
std::cout << "                 H       BUBBBBUBBB        " << '\n';
std::cout << "                 H        UU               " << '\n';
std::cout << "                          UU               " << '\n';
std::cout << "                 H        UU               " << '\n';
std::cout << "                 H        UU               " << '\n';
std::cout << "                 H         U               " << '\n';
std::cout << "                 HH       UU               " << '\n';
std::cout << "                  H       UU               " << '\n';
std::cout << "                  H       UU               " << '\n';
std::cout << "                  HH      UUU              " << '\n';
std::cout << "                  HH        UU             " << '\n';
std::cout << "                   HH                      " << '\n';
std::cout << "                    HH                     " << '\n';
std::cout << "                     HHH                   " << '\n';
std::cout << "                      HHH                  " << '\n';
std::cout << "                       HHHH                " << '\n';
std::cout << "                         HHHHH             " << '\n';
std::cout << "                           HHHHHH          " << '\n';
std::cout << "                               HHH         " << '\n';
  } else if (life == 0) {
    //std::cout << "[xxxxx]" << '\n';
    std::cout << "                                     HH    " << '\n';
std::cout << "                                    HH     " << '\n';
std::cout << "                                   HH      " << '\n';
std::cout << "                                   H       " << '\n';
std::cout << "                                   H       " << '\n';
std::cout << "                                   H       " << '\n';
std::cout << "                                   H       " << '\n';
std::cout << "                                  HH   H   " << '\n';
std::cout << "                                 HHHHHHH   " << '\n';
std::cout << " HHHH                      H    HHH        " << '\n';
std::cout << "  H HH H          H        HH HH           " << '\n';
std::cout << "   HHH HH       HHH         HHH            " << '\n';
std::cout << "     HHH H     H H           H             " << '\n';
std::cout << "      H HH    HHH           HH             " << '\n';
std::cout << "       HHHH HH             H H             " << '\n';
std::cout << "        HHH H            HH H     H        " << '\n';
std::cout << "         HHH            HHHHHHHHHHH        " << '\n';
std::cout << "         HH            H HH HH             " << '\n';
std::cout << "          H           HHHHHHHY             " << '\n';
std::cout << "           H        HHH H    Y             " << '\n';
std::cout << "           H     HHHHH       Y             " << '\n';
std::cout << "           HHHHHHHHH         Y             " << '\n';
std::cout << "              HHH            Y             " << '\n';
std::cout << "            HHH              Y             " << '\n';
std::cout << "            H                Y             " << '\n';
std::cout << "           H                 Y             " << '\n';
std::cout << "           H                 Y             " << '\n';
std::cout << "           HH                Y             " << '\n';
std::cout << "           HH                YY    x xx    " << '\n';
std::cout << "           H                 YY  xxxxxxx   " << '\n';
std::cout << "           H                 YY xxxxxxx    " << '\n';
std::cout << "                             YYxxxxx xxx   " << '\n';
std::cout << "           H                 Yxxx xxxxx    " << '\n';
std::cout << "                             YBxxxxxx      " << '\n';
std::cout << "           H               BBB BBBB        " << '\n';
std::cout << "           HH             BBBBBBBBBB       " << '\n';
std::cout << "            H            BBB BBB B B       " << '\n';
std::cout << "            HH          BBBBBBB BB BB      " << '\n';
std::cout << "             HH         BBB  B BBB  B      " << '\n';
std::cout << "              H        BBBBBB  B B  B      " << '\n';
std::cout << "               H       B  B    BBB  B      " << '\n';
std::cout << "               H      BB  B B BBB BBBB     " << '\n';
std::cout << "                H     BB  BB B  B BB B     " << '\n';
std::cout << "                H     BB  BBBBBBB BB B     " << '\n';
std::cout << "                H     BBBBBBBB B  BB B     " << '\n';
std::cout << "                H        BB  BBBBBBBBB     " << '\n';
std::cout << "                HH       BB  BB  BB B      " << '\n';
std::cout << "                 H       BB  B B BBB       " << '\n';
std::cout << "                 H       B B BB BBB        " << '\n';
std::cout << "                 H       BUBBBBUBBB        " << '\n';
std::cout << "                 H        UU   UU          " << '\n';
std::cout << "                          UU   UUU         " << '\n';
std::cout << "                 H        UU   U U         " << '\n';
std::cout << "                 H        UU   UUU         " << '\n';
std::cout << "                 H         U   UU          " << '\n';
std::cout << "                 HH       UU    UU         " << '\n';
std::cout << "                  H       UU               " << '\n';
std::cout << "                  H       UU    UU         " << '\n';
std::cout << "                  HH      UUU   U U        " << '\n';
std::cout << "                  HH        UU   UUU       " << '\n';
std::cout << "                   HH                      " << '\n';
std::cout << "                    HH                     " << '\n';
std::cout << "                     HHH                   " << '\n';
std::cout << "                      HHH                  " << '\n';
std::cout << "                       HHHH                " << '\n';
std::cout << "                         HHHHH             " << '\n';
std::cout << "                           HHHHHH          " << '\n';
std::cout << "                               HHH         " << '\n';
std::cout << '\n';
    std::cout << "     G  A   ME    OV   E R" << '\n';
  }


}

//------------------------------------------------------
// hasło
auto check_normal_win(std::string hiden_password, std::string entered_chars) -> bool { //sprawdza czy przypadkiem ktoś nie wygrał

  bool status = true;

  for (size_t o = 0; o < hiden_password.size(); o++) {
    if (hiden_password[o] == '_') {
      status = false;
    }
  }
  if (status == true ) {
    return true;
  } else {
    return false;
  }
}

//------------------------------------------------------
auto check_instant_win(std::string password, std::string entered_chars) -> bool { //sprawdza czy słowo wygrało

  bool status = true;

  if (password == entered_chars) {
    status = false;
  }
  if (status == false ) {
    return true;
  } else {
    return false;
  }
}
//------------------------------------------------------

auto display_guessing_status(std::string password, std::string entered_chars) -> std::string {

  std::string hiden_password;
  std::string input;



  for (size_t k = 0; k < password.size(); k++) {
    hiden_password.push_back('_');
  }
            for (size_t i = 0; i < password.size(); i++) {
                for (size_t j = 0; j < entered_chars.size(); j++) {
                      //input = entered_chars[j];
                      if (password[i] == entered_chars[j]) {
                  hiden_password[i] = password[i];
                  }
                }
              }
         return hiden_password;
        }

//------------------------------------------------------

auto check(std::string password, std::string entered_chars) -> bool {
  bool guessed = false;

  for (size_t i = 0; i < password.size(); i++) {
      for (size_t j = 0; j < entered_chars.size(); j++) {
            if (password[i] == entered_chars[j]) {
              guessed = true;
        }
      }
    }

  return guessed;
}

//------------------------------------------------------


auto main() -> int {

int life = 5;
bool live_flag = false;
bool win = false;
const std::string password = random_password();
std::string hiden_password;
std::string input;
std::string entered_chars;
std::string entered_password;
//auto entered_chars = std::vector<std::string> (0) ;
char input_char;


display_hangmman_life (life);
hiden_password = display_guessing_status(password, entered_chars); //naprawić pentle bo coś sie jebe, sprawdzić cout gdzie to sie jebe, dodać obrazki
std::cout << hiden_password << '\n';

//---------------------------------1 pytanie

  std::cout << "enter char" << '\n';
  getline(std::cin, input);

  if (input.size() == 1 ) { // jeden znak
    //####################################
    entered_chars = input[0];
    //entered_chars.push_back(input);
    //####################################
    hiden_password = display_guessing_status(password, entered_chars);
    win = check_normal_win(hiden_password, entered_chars);

     display_hangmman_life (life);
    std::cout << '\n';
    std::cout << "password : " << hiden_password << '\n';
    std::cout << "life : " << life << '\n';

  } else if (input.size() > 1 ){ // wiele znaków
    win = check_instant_win(password, input);

    display_hangmman_life (life);
   std::cout << '\n';
    std::cout << "password : " << hiden_password << '\n';
    std::cout << "life : " << life << '\n';
  }


  if (win == false){
    life-- ;
  } else if (win == true){
    win_game();
  }



//---------------------------------każde kolejne pytanie

while (life >= 0 || win == true ) {

  std::cout << "enter char" << '\n';
  //std::cin >> entered_chars;
  getline(std::cin, input);
  if (input.size() == 1 ) { // jeden znak
    //####################################
    input_char = input[0];

    entered_chars.push_back(input_char);
    //####################################
    hiden_password = display_guessing_status(password, entered_chars);
    win = check_normal_win(hiden_password, entered_chars);

    display_hangmman_life (life);
   std::cout << '\n';
    std::cout << "password : " << hiden_password << '\n';
    std::cout << "life : " << life << '\n';

  } else if (input.size() > 1 ){ // wiele znaków
    win = check_instant_win(password, input);

    display_hangmman_life (life);
   std::cout << '\n';
    std::cout << "password : " << hiden_password << '\n';
    std::cout << "life : " << life << '\n';
  }

  if (win == false){
    life-- ;
  } else if (win == true){
    win_game();
  }
}

return 0;


} //dodać clean
// zrobić pożądek ze zmiennymi i tak dalej
//naprawić odejmowanie życia przy poprawnej odpowiedzi
//dwie części main sprawdzić :)
