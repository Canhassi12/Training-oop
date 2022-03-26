#ifndef Circle_h
#define Circle_h 

#include <math.h>
#include <string>
using namespace std;

class Circle
{
    private:
        float Ray;
        float Diameter;
        float Pi;
        float Area;
        
    public:
        Circle(float Ray)
        {
           this->Diameter = 2 * Ray;
           this->Pi = 3.14;
           this->Ray = Ray;
        }
        void setRay(float ray)
        {
            this->Ray = ray;
        }
        float getRay()
        {
            return this->Ray;
        }

        float getDiameter()
        {
            return this->Diameter;
        }

        float getPi()
        {
            return this->Pi;
        }
        void setArea()
        {
            this->Area = this->Pi * pow(this->Ray, 2);
        }

        float getArea()
        {
            return this->Area;
        }  
};
#endif