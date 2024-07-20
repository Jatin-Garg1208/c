#include<stdio.h>

int main()
{
    int n,m,sum,i;
    n=0;
    m=0;
    char option,select;
    printf("\t\t\t\t\t\tMultiple Choice Questions");
    printf("\n\n\nRead the instructions very carefully");
    printf("\n1. You have only one attempt do carefully");
    printf("\n2. This paper consist of total 15 questions");
    printf("\n3. You have given 4 marks for each right question and -1 for wrong");
    printf("\n4. You have only 30 min to do this test ");
    printf("\n\nAre you ready: ");
    for(i=1; i<=3; i++)
        if (sum<30)
        {
            if (i==2||i==3)
           {
             printf("\n\n\n\nAre you ready to try again: ");
           }
            scanf(" %c",&option);
            if (option=='y')
            {
                printf("\n\nStart the test");

                printf("\n\nQ1- Who developed C language ?");
                printf("\n(a) Dennis Ritchie");
                printf("\n(b) James Gosling");
                printf("\n(c) Guido Van Rossum ");
                printf("\n(d) Bjarne Stroustrup ");
                printf("\n\nWrite answer: ");
                scanf(" %c",&select);

                if (select=='a')
                {
                    printf("\nThis is right answer");
                    n++;
                }
                else
                {
                    printf("\nThis is wrong answer");
                    m++;
                }

                printf("\n\nQ2- When c was developed ? ");
                printf("\n(a) 1985-1986");
                printf("\n(b) 1956-1957");
                printf("\n(c) 1978-1979 ");
                printf("\n(d) 1972-1973 ");
                printf("\n\nWrite answer: ");
                scanf(" %c",&select);

                if (select=='d')
                {
                    printf("\nThis is right answer");
                    n++;
                }
                else
                {
                    printf("\nThis is wrong answer");
                    m++;
                }


                printf("\n\nQ3- C is a ________ programming language. ");
                printf("\n(a) Procedural");
                printf("\n(b) Object Oriented");
                printf("\n(c) Structural ");
                printf("\n(d) Machine Dependent ");
                printf("\n\nWrite answer: ");
                scanf(" %c",&select);

                if (select=='a')
                {
                    printf("\nThis is right answer");
                    n++;
                }
                else
                {
                    printf("\nThis is wrong answer");
                    m++;
                }


                printf("\n\nQ4- _______ is a value that does not change during the execution of the program.");
                printf("\n(a) Literal");
                printf("\n(b) Variable");
                printf("\n(c) Keyword");
                printf("\n(d) Expression");
                printf("\n\nWrite answer: ");
                scanf(" %c",&select);

                if (select=='a')
                {
                    printf("\nThis is right answer");
                    n++;
                }
                else
                {
                    printf("\nThis is wrong answer");
                    m++;
                }

                printf("\n\nQ5- _______ command is used to add a header file to the program which contains various functions. ");
                printf("\n(a) @import");
                printf("\n(b) #include");
                printf("\n(c) #import");
                printf("\n(d) #insert");
                printf("\n\nWrite answer: ");
                scanf(" %c",&select);

                if (select=='b')
                {
                    printf("\nThis is right answer");
                    n++;
                }
                else
                {
                    printf("\nThis is wrong answer");
                    m++;
                }


                printf("\n\nQ6- Block of code is marked by enclosing the statements in ______.");
                printf("\n(a) (  )");
                printf("\n(b) \"  \" ");
                printf("\n(c) [  ]");
                printf("\n(d) {  }");
                printf("\n\nWrite answer: ");
                scanf(" %c",&select);

                if (select=='d')
                {
                    printf("\nThis is right answer");
                    n++;
                }
                else
                {
                    printf("\nThis is wrong answer");
                    m++;
                }

                printf("\n\nQ7- ______ operators will generate a true or false result always.");
                printf("\n(a) Arithmetic ");
                printf("\n(b) Relational");
                printf("\n(c) Assignment");
                printf("\n(d) Bitwise");
                printf("\n\nWrite answer: ");
                scanf(" %c",&select);

                if (select=='b')
                {
                    printf("\nThis is right answer");
                    n++;
                }
                else
                {
                    printf("\nThis is wrong answer");
                    m++;
                }

                printf("\n\nQ8- What is 1+8*3 ?");
                printf("\n(a) 27");
                printf("\n(b) 54");
                printf("\n(c) 25");
                printf("\n(d) 42");
                printf("\n\nWrite answer: ");
                scanf(" %c",&select);

                if (select=='c')
                {
                    printf("\nThis is right answer");
                    n++;
                }
                else
                {
                    printf("\nThis is wrong answer");
                    m++;
                }

                printf("\n\nQ9- The order in which operators of same precedence level are evaluated from left to right is called __________.");
                printf("\n(a) Associativity");
                printf("\n(b) Authenticity");
                printf("\n(c) Creativity");
                printf("\n(d) Opertionality");
                printf("\n\nWrite answer: ");
                scanf(" %c",&select);

                if (select=='a')
                {
                    printf("\nThis is right answer");
                    n++;
                }
                else
                {
                    printf("\nThis is wrong answer");
                    m++;
                }

                printf("\n\nQ10- what is\n 8+7*2 ? ");
                printf("\n(a) 16");
                printf("\n(b) 18");
                printf("\n(c) 20");
                printf("\n(d) 22");
                printf("\n\nWrite answer: ");
                scanf(" %c",&select);

                if (select=='d')
                {
                    printf("\nThis is right answer");
                    n++;
                }
                else
                {
                    printf("\nThis is wrong answer");
                    m++;
                }

                printf("\n\nQ11- Which of these operators will be executed first, if used in same expression ? ");
                printf("\n(a) +");
                printf("\n(b) >=");
                printf("\n(c) *");
                printf("\n(d) &&");
                printf("\n\nWrite answer: ");
                scanf(" %c",&select);

                if (select=='c')
                {
                    printf("\nThis is right answer");
                    n++;
                }
                else
                {
                    printf("\nThis is wrong answer");
                    m++;
                }

                printf("\n\nQ12- Which of these operators will be executed last, if used in same expression ?");
                printf("\n(a) +");
                printf("\n(b) >=");
                printf("\n(c) *");
                printf("\n(d) =");
                printf("\n\nWrite answer: ");
                scanf(" %c",&select);

                if (select=='d')
                {
                    printf("\nThis is right answer");
                    n++;
                }
                else
                {
                    printf("\nThis is wrong answer");
                    m++;
                }

                printf("\n\nQ13- A word which is already defined to the compiler is called ________. ");
                printf("\n(a) Keyword");
                printf("\n(b) Identifier");
                printf("\n(c) Literal");
                printf("\n(d) Variable");
                printf("\n\nWrite answer: ");
                scanf(" %c",&select);

                if (select=='a')
                {
                    printf("\nThis is right answer");
                    n++;
                }
                else
                {
                    printf("\nThis is wrong answer");
                    m++;
                }

                printf("\n\nQ14- Which of these symbol is used to terminate a statement in the code ?");
                printf("\n(a) .");
                printf("\n(b) /");
                printf("\n(c) \\");
                printf("\n(d) ;");
                printf("\n\nWrite answer: ");
                scanf(" %c",&select);

                if (select=='d')
                {
                    printf("\nThis is right answer");
                    n++;
                }
                else
                {
                    printf("\nThis is wrong answer");
                    m++;
                }

                printf("\n\nQ15- Execution of the program starts from function __________. ");
                printf("\n(a) Main");
                printf("\n(b) Printf");
                printf("\n(c) Scanf");
                printf("\n(d) None of these");
                printf("\n\nWrite answer: ");
                scanf(" %c",&select);

                if (select=='a')
                {
                    printf("\nThis is right answer");
                    n++;
                }
                else
                {
                    printf("\nThis is wrong answer");
                    m++;
                }


                sum = (4*n)-m;
                printf("\n\nYour total score is %d",sum);

                if (sum>=45)
                    printf("\n\nYou are qualify for the next round");
                else
                    printf("\n\nSorry, better luck next time\n\n");



        }
        else
            printf("\n\nYou are not interested to do next round");
     }

            else
                printf("\n\nSorry, try next time");

    return 0;


}
