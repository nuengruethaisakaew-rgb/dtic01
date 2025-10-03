   
 // " " double quote, ' ' single quote, # hash, / slash \ backslash
 // : colon, ; semicolon, ( ) round bracket, [ ] square bracket
 // { } curly bracke, < > angle bracker, | Pipe, & ampersand
 // . backtick (Alt+9+6)



#include "stdio.h" // หรือ <stdio.h>

int main(){
    //แสดงเฉพาะที่อยู่ใน "" แรกเท่านั้น โดยเขียนอย่างไรแสดงอย่างงัน
    //แต่หากมีอะไรต่อจาก "" แรก จะต้องนำมาแสดงผลที่ "" แรกเสมอ โดยใช้ format sper/format code
    printf("Hello....\n");
    printf("AAA %d BBB %s %d^_^\n", 555, "Wow wow wow", 100+200);

    printf("HI\n\n\nHey\tHoo\t\t\tWow\\");

    return 0;

}