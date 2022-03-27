#ifndef Circle_h
#define Circle_h 

#include <math.h>
#include <string>
using namespace std;

class Circle
{
    private:
        float Radium =0;
        float Diameter =0;
        float Pi;
        float Area=0;

    public:
        Circle()
        {
            this->Pi = 3.14;
        }
        void setRay()
        {
            cout<<"type the radium"<<endl;
            cin>>this->Radium;
        }
        float getRay()
        {
            if (this->Radium!=0)
            {
                return this->Radium;
            }
            else
            {
                if(this->Radium==0)
                {
                    this->setDiameter();
                }
                return this->Radium = this->Diameter / 2;
            }
        }






        void setDiameter()
        {
            cout<<"type the diameter" <<endl;
            cin>>this->Diameter;
        }
        float getDiameter()
        {
            if(this->Diameter!=0)
            {
                return this->Diameter;
            }
            else
            {
                if(this->Diameter==0)
                {
                    this->setRay();
                } 
            }
            return this->Diameter = 2 * this->Radium;
        }   





        float getPi()
        {
            return this->Pi;
        }




        void setArea()
        {
            cout<<"type the area: " <<endl;
            cin>>this->Area;
        }

        float getArea()
        {
            if(this->Area!=0)
            {
                return this->Area;
            }
            
            else
            {
               if(this->Radium==0)
               {
                  this->setRay();
               }
            }
            return this->Pi * pow (this->Radium, 2);
        } 










};      

#endif