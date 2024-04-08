#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//FUN START==========================================
void and();/*21.bit and*/
void ap();/*17.alphabet print*/
void atn();/*19.ASCII code to NUMBER*/
void ca();/*15.Circle area cal*/
void calc();/*02.calculator*/
void cw();/*27. About ME*/
void even();/*07.even number print*/
void fac();/*16. Factorial*/
void lrg();/*03.find largest*/
void ls();/*24.bitwise Left Shift*/
void mn();/*01. MENU*/
void mt();/*12.multiplication table*/
void nc();/*11.number counter*/
void ng();/*14.number grade*/
void nsp();/*09.Number Series Print*/
void nta();/*20.NUMBER to ASCII code*/
void odd();/*06.odd number print*/
void oe();/*05.odd-even*/
void or();/*22.bit or*/
void osc();/*26.1's complement*/
void pn();/*08.positive-negative*/
void po();/*13. power of a number*/
void rs();/*25.bitwise Right Shift*/
void sml();/*04.find smallest*/
void st();/*10.series total*/
void vc();/*18.vowel-consonant detect*/
void xor();/*23.bit XOR*/
//Common fun==========================================
void ig();/*input greeting*/
void ex();/*EXIT*/
int o;
//===================code START=======================
int main()
{
    printf("\t\t\t\t------------------------------------------------\n");
    printf("\t\t\t\t+++++++++++++++++Greetings User+++++++++++++++++\n");
    printf("\t\t\t\t------------------------------------------------\n");
    mn();

    while(1)
    {
        printf("\nPlease enter your choice from main MENU(1) and press enter:\t");
        if( scanf(" %d", &o)==1)
        {
                switch(o)
                {
                case 1:  ig();   mn();   break;
                case 2:  ig();   calc(); break;
                case 3:  ig();   lrg();  break;
                case 4:  ig();   sml();  break;
                case 5:  ig();   oe();   break;
                case 6:  ig();   odd();  break;
                case 7:  ig();   even(); break;
                case 8:  ig();   pn();   break;
                case 9:  ig();   nsp();  break;
                case 10: ig();   st();   break;
                case 11: ig();   nc();   break;
                case 12: ig();   mt();   break;
                case 13: ig();   po();   break;
                case 14: ig();   ng();   break;
                case 15: ig();   ca();   break;
                case 16: ig();   fac();  break;
                case 17: ig();   ap();   break;
                case 18: ig();   vc();   break;
                case 19: ig();   atn();  break;
                case 20: ig();   nta();  break;
                case 21: ig();   and();  break;
                case 22: ig();   or();   break;
                case 23: ig();   xor();  break;
                case 24: ig();   ls();   break;
                case 25: ig();   rs();   break;
                case 26: ig();   osc();  break;
                case 27: ig();   cw();   break;
                case 0:  ex();           break;
                default: printf("\nPlease read the menu & try again.\n");
                }
        }
        else{
              printf("\n\nError: Wrong input.\n");
              ex();
        }
    }
    return 0;
}
//===input greeting===================================
void ig(){
    if(o>=1 && o<=9){
            printf("\n\t\t\t\t\t|========================|\n");
              printf("\t\t\t\t\t|   Option  %d  Selected  |\n",o);
              printf("\t\t\t\t\t|========================|\n\n");
    }
    else{
            printf("\n\t\t\t\t\t|========================|\n");
              printf("\t\t\t\t\t|  Option  %d  Selected  |\n",o);
              printf("\t\t\t\t\t|========================|\n\n");
    }
}
//EXIT================================================
void ex()
{
    printf("\nExiting the program . . . bye?\n");
    exit(0);
}
//01. MENU ==========================
void mn()
{
    printf("\t\t\t\t                ++++++MENU++++++               \n");
    printf("\t|=======================================                =======================================|\n");
    printf("\t|           \t\t\tInput-1 for showing the 'MENU' again.\t\t\t       |\n");
    printf("\t|----------------------------------------------||----------------------------------------------|\n");
    printf("\t|Input-2 to use Calculator.                    ||Input-15 to use Circle Area calculator.       |\n");
    printf("\t|Input-3 to find the Largest.                  ||Input-16 to find Factorial.                   |\n");
    printf("\t|Input-4 to find the Smallest.                 ||Input-17 for Alphabet printer.                |\n");
    printf("\t|Input-5 for Odd-Even number detector.         ||Input-18 for Vowels & Consonant detector.     |\n");
    printf("\t|Input-6 for Odd number printer.               ||Input-19 to convert ASCII code to Number.     |\n");
    printf("\t|Input-7 for Even number printer.              ||Input-20 to convert Number to ASCII code.     |\n");
    printf("\t|Input-8 for Positive-Negative number detector.||Input-21 binary AND operation.                |\n");
    printf("\t|Input-9 for Number Series printer.            ||Input-22 binary OR operation.                 |\n");
    printf("\t|Input-10 to get Number Series Total sum.      ||Input-23 binary XOR operation.                |\n");
    printf("\t|Input-11 for Number Counter.                  ||Input-24 binary Left shift.                   |\n");
    printf("\t|Input-12 for Multiplication Table.            ||Input-25 binary Right shift.                  |\n");
    printf("\t|Input-13 calculate Exponent/Power of a number.||Input-26 ONE's complement.                    |\n");
    printf("\t|Input-14 for exam Number Grading system.      ||Input-27 to know about Code Writer.           |\n");
    printf("\t|----------------------------------------------||----------------------------------------------|\n");
    printf("\t|           \t\t\tInput-0 to turn OFF the program.\t\t\t       |\n");
    printf("\t|==============================================================================================|\n");
}
//02. Basic calculator===============
void calc()
{
    double a,b;
    char c;
    printf("============Welcome to basic calculator============\n\n");
    printf("Enter any operation type (+,-,*,/):\t");
    scanf(" %c", &c);
    printf("Enter two numbers:\t");
    scanf(" %lf %lf", &a,&b);

    switch(c)
    {
    case'+':    printf("%.2lf + %.2lf = %.2lf\n",a,b,a+b);   break;
    case'-':    printf("%.2lf - %.2lf = %.2lf\n",a,b,a-b);   break;
    case'*':    printf("%.2lf * %.2lf = %.2lf\n",a,b,a*b);   break;
    case'/':    printf("%.2lf / %.2lf = %.2lf\n",a,b,a/b);   break;
    default:    printf("\n\nWrong Input. Going back to main menu...\n");
    }
}
//03. largest========================
void lrg()
{
    int a,i,l;
    printf("============Largest number finder============\n");
    printf("Enter the number of numbers you want to work with:\t");
    scanf(" %d", &a);

    int numbers[a];

    printf("Enter %d numbers:\n", a);
    for (i=0; i<a; i++) {
        scanf(" %d", &numbers[i]);
    }

    l=numbers[0];
    for(i=1; i<a; i++){
        if (numbers[i] > l) {
            l = numbers[i];
        }
    }
    printf("The largest number is: %d\n",l);
}

//04. smallest=======================
void sml()
{
    int a,i,l;
    printf("============Smallest number finder============\n");
    printf("\nEnter the number of numbers you want to work with:\t");
    scanf(" %d", &a);

    int numbers[a];

    printf("Enter %d numbers:\n", a);
    for (i=0; i<a; i++) {
        scanf(" %d", &numbers[i]);
    }

    l=numbers[0];
    for(i=1; i<a; i++){
        if (numbers[i] < l) {
            l = numbers[i];
        }
    }
    printf("The smallest number is: %d\n",l);
}
//05. odd-even=======================
void oe()
{
    int n;
    printf("============ODD-EVEN detector============\n\n");
    printf("Input a number to check odd/even:\t");
    scanf(" %d",&n);
    (n==0)?printf("It's Zero\n"):(n%2==0)?printf("It's an Even number\n"):printf("It's an Odd number\n");
}
//06. odd number printer=============
void odd()
{
    int a,i;
    printf("============ODD number print============\n");
    printf("Enter the max number limit to print:\t");
    scanf(" %d",&a);
    for(i=1; i<=a; i+=2) {   printf("%d\t",i);   }
}
//07. even number printer============
void even()
{
    int a,i;
    printf("============EVEN number print============\n");
    printf("Enter the max number limit to print:\t");
    scanf(" %d",&a);
    for(i=2; i<=a; i+=2) {  printf("%d\t",i);   }
}
//08. positive-negative==============
void pn()
{
    int n;
    printf("============Positive - Negative detector============\n\n");
    printf("Input a number to check positive/negative:\t");
    scanf(" %d",&n);
    (n==0)?printf("It's Zero\n"):(n>0)?printf("It's a positive number\n"):printf("It's a negative number\n");
}
//09. Number series print============
void nsp()
{
    int a,b,c,i;
    printf("============Number Series Printer============\n");
    printf("Enter start number of the series:\t");
    scanf(" %d",&a);
    printf("Enter difference between two numbers:\t");
    scanf(" %d",&b);
    printf("Enter last number of the series:\t");
    scanf(" %d",&c);
    for(i=a; i<=c; i+=b)
    {
        printf("%d\t",i);
    }
}
//10. series total===================
void st()
{
    int a,b,c,i,s=0;
    printf("============Number Series Total============\n");
    printf("Enter start number of the series:\t");
    scanf(" %d",&a);
    printf("Enter difference between two numbers:\t");
    scanf(" %d",&b);
    printf("Enter last number of the series:\t");
    scanf(" %d",&c);
    for(i=a; i<=c; i+=b)
    {   s=s+i; }
    printf("Answer is %d\n",s);
}
//11. number counter=================
void nc()
{
    int a,b,i;
    char c;
    printf("============Number Counter============\n\n");
    printf("Press F for Forward or Press R for reverse count:\n");
    scanf(" %c", &c);
    switch(c)
    {
    case 'F':
    case 'f':
        printf("==Forward mode active==\n");
        printf("Enter first number to start:\n");
        scanf(" %d",&a);
        printf("Enter last number to stop:\n");
        scanf(" %d",&b);
        if(b>a)
        {
            for(i=a; i<=b; i++)
            {   printf("%d\t",i);   }
        }
        else
        {   printf("Wrong input\n");    }
        break;
    case 'R':
    case 'r':
        printf("==Reverse mode active==\n");
        printf("Enter first number to start:\n");
        scanf(" %d",&a);
        printf("Enter last number to stop:\n");
        scanf(" %d",&b);
        if(a>b)
        {
            for(i=a; i>=b; i--)
            {   printf("%d\t",i);   }
        }
        else
        {   printf("Wrong input\n");    }
        break;
    default: printf("Wrong input\n");
    }
}
//12. multiplication table===========
void mt()
{
    int a,i;
    printf("============Multiplication Table============\n\n");
    printf("Enter the number of the table you need: \t");
    scanf(" %d",&a);
    for(i=1; i<=10; i++)
    {
        printf(" %d X %d = %d\n",a,i,a*i);
    }
}
//13. power==========================
void po(){
    double b,e;
    printf("============Exponent/Power calculator============\n");
    printf("Input the base number:\n");
    scanf(" %lf",&b);
    printf("Input the exponent/power:\n");
    scanf(" %lf",&e);
    printf("\n\n%.2lf to the power of %.2lf is %.4lf\n",b,e,pow(b, e));
}
//14. Number grading=================
void ng()
{
    int n;
    printf("============Number Grading System============\n\n");
    printf("Enter your number(out of 100):\t");
    scanf(" %d",&n);
    if(n<=100 && n>=0)
    {
        (n>=80)? printf("You got A+\n") :
        (n>=75)? printf("You got A\n")  :
        (n>=70)? printf("You got A-\n") :
        (n>=65)? printf("You got B+\n") :
        (n>=60)? printf("You got B\n")  :
        (n>=55)? printf("You got B-\n") :
        (n>=50)? printf("You got C+\n") :
        (n>=45)? printf("You got C\n")  :
        (n>=40)? printf("You got D\n")  :
                 printf("You got F\n")  ;
    }
    else{
        printf("Invalid Input");
    }
}
//15. Circle Area====================
void ca()
{
    double r;
    printf("============Circle Area calculator============\n");
    printf("\nEnter the radius of the circle: \n");
    scanf(" %lf", &r);

    (r>0) ? printf("The area of the circle is %.2f\n", 3.14159*r*r)   :   printf("\nThis is not a circle.\n");
}
//16. Factorial=====================
void fac()
{
    int a,i,f=1;
    printf("============Factorial============\n");
    printf("Enter the number you need(1-12):\n");
    scanf(" %d",&a);
            for(i=1;i<=a;i++){
                f=f*i;
            }
    printf("%d! = %d\n",a,f);
}
//17. print all alphabets============
void ap()
{
    int i;
    char a,b;
    printf("============ALPHABET PRINTER============\n");
    printf("Please enter the letter you want to start from: \t");
    scanf( " %c",&a);
    printf("Please enter the letter you want to stop from: \t");
    scanf( " %c",&b);

    if( (a<=b) && (((a>='A' && a<='Z') && (b>='A' && b<='Z')) || ((a>='a' && a<='z') && (b>='a' && b<='z'))) )
    {
        printf("\nForward mode\n");
        for(i=a; i<=b; i++) {   printf("%c\t",i);   }
    }
    else if((a>=b) && (((a>='A' && a<='Z') && (b>='A' && b<='Z')) || ((a>='a' && a<='z') && (b>='a' && b<='z'))))
    {
        printf("\nReverse mode\n");
        for(i=a; i>=b; i--) {   printf("%c\t",i);   }
    }
    else{   printf("Wrong Input\n");    }
}
//18. vowel, consonant detector======
void vc()
{
    char c;
    printf("============Vowel & Consonant detector============\n");
    printf("\n\nInput one alpabet:\t");
    scanf(" %c", &c);
    if((c>='A' && c<='Z') || (c>='a' && c<='z'))
    {
        switch(c)
        {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("\nThis is a Vowel\n");
            break;
        default:
            printf("\nThis is a Consonant\n");
        }
    }
    else{
        printf("\nWrong Input.\n");
    }
}
//19. ASCII code to Number===========
void atn()
{
    char c;
    printf("============ASCII code to NUMBER============\n");
    printf("Enter an alphabet to convert:\t");
    scanf(" %c",&c);
    printf("%d",c);
}
//20. Number to ASCII code===========
void nta()
{
    int c;
    printf("============NUMBER to ASCII code============\n");
    printf("Enter an number to convert:\t");
    scanf(" %d",&c);
    printf("%c\n",c);
}
//21. bit op AND=====================
void and()
{
    int a,b;
    printf("============Bitwise AND operation============\n");
    printf("Enter two numbers:\t");
    scanf(" %d %d",&a,&b);
    printf("%d & %d = %d\n",a,b,a&b);
}
//22. bit op OR======================
void or()
{
    int a,b;
    printf("============Bitwise OR operation============\n");
    printf("Enter two numbers:\t");
    scanf(" %d %d",&a,&b);
    printf("%d | %d = %d\n",a,b,a|b);
}
//23. bit op XOR=====================
void xor()
{
    int a,b;
    printf("============Bitwise XOR operation============\n");
    printf("Enter two numbers:\t");
    scanf(" %d %d",&a,&b);
    printf("%d ^ %d = %d\n",a,b,a^b);
}
//24. left shift=====================
void ls()
{
    int a,b;
    printf("============Bitwise Left Shift============\n");
    printf("Enter the value: \n");
    scanf(" %d",&a);
    printf("Enter the amount of shift you need: \n");
    scanf(" %d",&b);
    printf("Answer %d\n",a<<b);
}
//25. right shift====================
void rs()
{
    int a,b;
    printf("============Bitwise Right Shift============\n");
    printf("Enter the value: \n");
    scanf(" %d",&a);
    printf("Enter the amount of shift you need: \n");
    scanf(" %d",&b);
    printf("Answer %d\n",a>>b);
}
//26. 1's complement==================
void osc()
{
    int a;
    printf("============1's complement============\n");
    printf("Enter the value: \n");
    scanf(" %d",&a);
    printf("Answer %d\n",~a);
}
//27. About me========================
void cw()
{
    printf("\t\t\t\t\t +++++++++About Writer+++++++++\n");
    printf("\t\t\t\t\t=|^Name: Mansur Hossain Yuvraj|=\n");
    printf("\t\t\t\t\t=|^ID: CSE2302029121          |=\n");
    printf("\t\t\t\t\t=|^Section: 29A2              |=\n");
    printf("\t\t\t\t\t=|^Department of CSE          |=\n");
    printf("\t\t\t\t\t=|^Sonargaon University       |=\n");
    printf("\t\t\t\t\t=|^Phone: +8801*05199***      |=\n");
}
