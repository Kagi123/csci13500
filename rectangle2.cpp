//Name:  Sangheum Park
//Email: sangheum.park27@myhunter.cuny.edu
//Date:  May 09 2022
//Provide a constructor to construct a rectangle with a given width and height, member functions get_perimeter and get_area that compute the perimeter and area, and a member function void resize(double factor) that resizes the rectangle by multiplying the width and height by the given factor.

#include <iostream>
#include <string>
using namespace std;

class Rectangle {
	public:
		Rectangle(double input_w, double input_h){
      width = input_w;
      height = input_h;
    }
		double get_perimeter(){ 
      return (width+height)*2;
    }

		double get_area(){
      return width * height;
    }
		void resize(double factor){
      width *= factor;
      height *= factor;
    }
	private:
		double width;
		double height;
};

int main() {
   return 0;
   
}

