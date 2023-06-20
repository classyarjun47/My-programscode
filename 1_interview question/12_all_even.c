
//? 12.	C Program to print all even numbers in array.

#include<stdio.h>
int main(int argc, char const *argv[])
{


 int arr[]={1,2,3,4,5,6,7,8};

    for(int i=0;i<8;i++)
     {
           if (arr[i]%2==0){
            printf("\nAll even no are array :%d",arr[i]);
           }
        //    else{
        //    printf("\n All odd no are array:%d",arr[i]);

        //    }
     }



    return 0;
}
