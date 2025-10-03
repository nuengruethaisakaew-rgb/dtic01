//preprocessor directive
//ประกาศ Library
#include <stdio.h>
#include "math.h"

//คือ ประกาศค่าคงที่ คือ การสร้างตัวแทนของอะไรสั่งอย่างหนึ่ง เพื่อเอาไปใช่งานโปรแกรม
#define ShowPa printf("++++++++++++++++++++++++++++++++++++\n");
#define SMILE "^-^555"

//global (ใช้ที่ไหนก็ได้) declation (ประกาศ/สร้าง)
int number = 999;

//user-defined funftion
void showHi(){
    printf("Hi..........\n");
}


int main(){
    printf("DTI-SAU");
    printf("%lf\n", pow(2, 20));
    ShowPa
    showHi();
    showHey();
    
    return 0;
}
//
void showHey(){
    printf("Hey..........\n");
}
