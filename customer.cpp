//Name:  Sangheum Park
//Email:  sangheum.park27@myhunter.cuny.edu
//Date:  May 06 2022
//asks the user for a whole number between -31 and 31 and prints out the number in "two's complement" notation,

#include <iostream> 
#include <iomanip> 

using namespace std;


class Customer {
    private:
        string name;
        string unique_id;
    public:

        Customer(){          
        }
        Customer(string nm, string id){
          this->name = nm;
          this->unique_id = id;
        }
        
        string get_name(){
          return name;
        }
        string get_unique_id(){
          return unique_id;
        }
        void set_name(string input_name){
          name = input_name;
        }
        void set_unique_id(string input_unique_id){
          unique_id = input_unique_id;
        }
};


int main(){

  return 0;
}


