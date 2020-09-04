/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int findmissingnumber(int arr[],int n){
    int result;
    result=(n+1)*(n+2)/2;
    for(int i=0;i<n;i++){
        result=result -arr[i];
        
    }
    return result;
}

int main()
{
   int arr[]={1,2,4,6,3,7,8};
   int num=findmissingnumber(arr,7);
   printf("The missing number from 1 to 8 is %d",num);
    

}
