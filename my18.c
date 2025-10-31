//no parameter - has return 
//return type (data type) -> int, long int, float, double, char, ........
#include <stdio.h>
double dti02( );

int dti01(){
    return 555 ; // literal data/raw data ข้อมูลจริง
}

int main(){
    double xxx;

    //dti01();ทำได้แต่ไม่มีใตรเขาทำกัน เพราะมันเป็นฟังก์ชันที่มี return
    printf("Result of call frncion dti01 = %d\n", dti01() );
    //dti02();
    xxx = dti02();

    printf("%lf\n", xxx + dti02() );

    return 0;

}

double dti02(){
    printf("Wow....\n");
    return 10 * 20.5; //expression
}