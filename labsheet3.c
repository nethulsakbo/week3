#include<stdio.h>
int main(){
    int a = 20;
    int b = 15;
    int c = 10;
//  addition, subtraction, multiplication, division- arethmetic operators
    printf ("Addition of a & b: %d\n", a + b);
    printf ("Subtraction of a & b: %d\n", a - b);
    printf ("Multiplication of a & b: %d\n", a * b);
    printf ("Division of a & b: %d\n", a / b);
    //relational operators
    printf("a==b: %d\n", a == b);
    printf("a!=b: %d\n", a != b);
    printf("a>b: %d\n", a > b);
    printf("a<b: %d\n", a < b);
    printf("a>=b: %d\n", a >= b);
    printf("a<=b: %d\n", a <= b);
    
    //logical operators
    printf("a&&b: %d\n", a && b);
    printf("a||b: %d\n", a || b);
    printf("!b: %d\n", !b);
    printf("!c: %d\n", !c);
    
    //bitwise operators
    printf("a&b: %d\n", a & b);
    printf("a|b: %d\n", a | b);
    printf("a^b: %d\n", a ^ b);
    printf("-c: %d\n", -c);
    printf("a<<2: %d\n", a << 2);
    printf("a>>2: %d\n", a >> 2);


}