//
// Created by ImaiLisa on 1/8/22.
//

#include "bubble.h"
#include <iostream>
using namespace std;


void bubbleSort(int array[], int length)
{   if (length==0)
        return ;

    int i,j,tmp;
    for (i=0;i<length;++i)
        for (j=0;j<length-i;++j)
            if(array[j]>array[j+1])
            {
                tmp=array[j+1];
                array[j+1]=array[j];
                array[j]=tmp;
            }

}