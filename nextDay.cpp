//
// Created by ImaiLisa on 1/9/22.
// Calculate date
//

#include "nextDay.h"
void nextDay()
{
    int y,m,d;
    int Feb =0;
    cout<<"year:";cin>>y;cout<<endl;
    cout<<"month:";cin>>m;cout<<endl;
    cout<<"date:";cin>>d;cout<<endl;
    if(m<1 || m>12)
        cout <<"error month" <<endl;
    if(d<1 || d>31)
        cout <<"error date" <<endl;
    if((y%4==0 && y%100!=0 )|| y % 400 ==0)
        Feb =1;

    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10)
    {
        if (d == 31)
        {
            m++;
            d = 1;
        }
        else d++;
    }
    else if(m==4 || m==6 || m==9 || m==11)
    {
        if(d==30)
        {
            m++;
            d=1;
        }
        else if (d==31)
        {
            cout << "error date" << endl;
            return;
        }
        else d++;
    }
    else if(m==2)
    {
        if(Feb==0)
        {
            if(d==28)
            {
                m++;
                d=1;
            }
            else if(d>28)
            {
                cout << "error date" << endl;
                return;
            }
            else d++;
        }
        else
        {
            if(d==29)
            {
                m++;
                d=1;
            }
            else if(d>29)
            {
                cout << "error date" << endl;
                return;
            }
            else d++;
        }
    }
    else
    {
        if(d=31)
        {
            y++;
            m=1;
            d=1;
        }
        else d++;
    }
    cout<<"year:"<<y<<" month:"<<m<<" date:"<<d<<endl;

}
