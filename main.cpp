#include <iostream>
#include <string>
#include "Circle.h"

using namespace std;

int main()
{
    Circle c1;
    int opc;

    cout<<"Hi sulist, what do you want?" <<endl;
    cout<<"1: find the radium, 2: find the diameter or 3:find the area" <<endl;
    cin>>opc;

    switch(opc)
    {
      case 1:
      {
        c1.setRay();
        cout<<"the ray is "<<c1.getRay() <<endl;
        break;
      }

      case 2:
      {
        c1.setDiameter();  
        cout<<"the diameter is "<<c1.getDiameter() <<endl;
        break;
      }

      case 3:
      {
        c1.setRay();
        cout<<"the ray is "<<c1.getRay() <<endl;
        break;
      }
      
    }
    return 0;
}