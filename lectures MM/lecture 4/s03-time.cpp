#include <iostream>
using namespace std;

struct czas{
    int hour;
    int min;
    int sec;

    enum time_of_day:int{noc = 24, poranek = 6, poludnie = 12, wieczor = 18};

    time_of_day NC = noc;
    time_of_day PR = poranek;
    time_of_day PL = poludnie;
    time_of_day WE = wieczor;

    void godzina(){
        std::string tim;
        std::string sHour;
        std::string sMin;
        std::string sSec;



        if(hour < 10){
            sHour = std::to_string (hour);
            sHour = "0" + sHour;
        }else{
            sHour = std::to_string (hour);
        }

        if(min < 10){
            sMin = std::to_string (min);
            sMin = "0" + sMin;
        }else{
            sMin = std::to_string (min);
        }

        if(sec < 10){
            sSec = std::to_string (sec);
            sSec = "0" + sSec;
        }else{
            sSec = std::to_string (sec);
        }

       tim = sHour + ":" + sMin + ":" + sSec;
       std::cout << tim << std::endl;

    }

      czas(int a, int b, int c){

        hour = a;
        min = b;
        sec = c;
    }

    void next_hour(){
        hour = hour + 1;
        if(hour > 23){
            hour = 0;
        }
    }

    void next_minute(){
        min = min + 1;
        if(min > 59){
            min = 0;
        }
    }

    void next_second(){
        sec = sec + 1;
        if(sec > 59){
            sec = 0;
        }
    }

    void kolejna(){
        next_hour();
        next_minute();
        next_second();
    }

    void time_of_day(){
      if(hour > PL && hour < WE) {
        std::cout << "jest poludnie" << '\n';
      }else if(hour > WE && hour < NC){
        std::cout << "jest wieczor" << '\n';
      }else if(hour > NC && hour < PR){
        std::cout << "jest noc" << '\n';
      }else if(hour > PR && hour < PL){
        std::cout << "jest poranek" << '\n';
      }
    }

};

int main()
{
   czas cz(23,59,59);
   cz.godzina();
   cz.kolejna();
   cz.godzina();
   cz.time_of_day();

    return 0;
}
