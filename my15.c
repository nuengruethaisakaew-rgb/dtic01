#include <stdio.h>
#define senpa printf ("++++++++++++++++++++++++++++++\n");
 int main (){
    int i;
    senpa
    printf ("Divisble by 8 \n");
    senpa
    for ( i = 0; i < 100; i++){
        if (i % 8 !=0){
            continue;
        }
        printf ("%d \n" , i);
    }
    senpa
    return 0;
 }