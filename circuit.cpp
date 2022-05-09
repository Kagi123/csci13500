//Name:  Sangheum Park
//Email: sangheum.park27@myhunter.cuny.edu
//Date:  May 06 2022
//Simulate a circuit for controlling a hallway light that has switches at both ends of the hallway. Each switch can be up or down, and the light can be on or off. Toggling either switch turns the lamp on or off. Provide member functions

#include <iostream>
#include <string>
using namespace std;

class Circuit{
public:
		int get_first_switch_state(){
      return first_switch;
    }
		int get_second_switch_state(){
      return second_switch ;
    }
		int get_lamp_state(){
      return lamp_state;
    }
		void toggle_first_switch(){
      first_switch=(first_switch==0?1:0);
      lamp_state=(lamp_state==0?1:0);
    }
		void toggle_second_switch(){
    second_switch =(second_switch ==0?1:0);
    lamp_state=(lamp_state==0?1:0);
    }

	private:
		int first_switch = 0;
		int second_switch = 0;
		int lamp_state = 0;


};

int main() {
   return 0;
   
}

