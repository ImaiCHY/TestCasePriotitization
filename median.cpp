//
// Created by ImaiLisa on 1/9/22.
// Find median
//

#include "median.h"
#include "bubble.h"
void findMedian(int array[],int length)
{
    bubbleSort(array,length);
    cout<<array[(length+1)/2]<<endl;
}