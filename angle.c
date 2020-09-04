/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int calculateangle(int hr,int min){
    if(hr==12)
        hr=0;
    if(min==60)
       min=0;
     int hourangle=(int)(0.5*(hr*60+min));
     int minangle=(int)(6*min);
     int angle= abs(hourangle- minangle);
     int deg=360-angle;
     return deg;
}

int main()
{
    int hr,min;
    scanf("%d:%d",&hr,&min);
    int num=calculateangle(hr, min);
    printf("%d",num);
    
}
