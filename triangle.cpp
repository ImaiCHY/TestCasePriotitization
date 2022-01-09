//
// Created by ImaiLisa on 1/9/22.
//

#include "triangle.h"
void triangleTypeONE(int x,int y,int z)
{
    if(x+y<=z || x+z<=y || y+z<=x)
        cout<<"Not Triangle"<<endl;
    else if(x==y || y==z || z==x)
    {
        if(x==y && x==z)
        {
            cout<<"Equilateral triangle"<<endl;
        }
        else
        {
            cout<<"Isosceles triangle"<<endl;
        }
    }
    else cout<<"Normal triangle"<<endl;
    return;
};

void triangleTypeTWO(int x,int y,int z)
{
    if(x+y<=z || x+z<=y || y+z<=x)
        cout<<"Not Triangle"<<endl;
    else if(x*x+y*y>z*z || x*x+z*z>y*y || y*y+z*z>x*x)
        cout<<"Acute triangle"<<endl;
    else if(x*x+y*y==z*z || x*x+z*z==y*y || y*y+z*z==x*x)
        cout<<"Right triangle"<<endl;
    else cout<<"Obtuse triangle"<<endl;
    return;
}