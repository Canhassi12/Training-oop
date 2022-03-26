#include <iostream>
#include <string>
#include "Circle.h"

using namespace std;

int main()
{
    Circle c1(12);
    c1.setArea();
    
    
    cout << c1.getDiameter()<<endl;
    cout << c1.getArea()<<endl;
    return 0;
}