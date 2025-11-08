#include <stdio.h>
#include <stdlib.h>

//Q.1
//11 12 13 14
//21 22 23 24
//31 32 33 34

/*
int main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=4;j++)
        {
            printf("%d%d\t",i,j);
        }
        printf("\n");
    }
    return 0;
}
*/

//Q.2

//*
//**
//***
//****
//*****

/*
int main()
{
    for(int i=1;i<=5;i++)//i=1,2
    {
        for(int j=1;j<=i;j++)//1<=2
            //*
            //**
            printf("*",j);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.3

//1
//12
//123
//1234
//12345

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
            printf("%d",j);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.4

//1
//22
//333
//4444
//55555

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
            printf("%d",i);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.5

//12345 1<=5
//1234  1<=4
//123   1<=3
//12    1<=2
//1     1<=1

/*
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            printf("%d",j);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

//Q.6

//12345 1<=5
//2345  25
//345   35
//45    45
//5     55

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
            printf("%d",j);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.7

//54321  5>=1
//4321   4>=1
//321    3>=1
//21     2>=1
//1      1>=1

/*
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
            printf("%d",j);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

//Q.8

//54321 5>=1
//5432  5>=2
//543   5>=3
//54    5>=4
//5     5>=5

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
                printf("%d",j);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.9

//5      5<=5
//45     4<=5
//345    3<=5
//2345   2<=5
//12345  1<=5

/*
int main()
{
    for(int i=5;i>=1;i--)//i=5,4
    {
        for(int j=i;j<=5;j++)//4=5
            printf("%d",j);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

//Q.10

//1       1>=1
//21      2>=1
//321     3>=1
//4321    4>=1
//54321   5>=1

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j>=1;j--)
            printf("%d",j);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.11

//5      5>=5
//54     5>=4
//543    5>=3
//5432   5>=2
//54321  5>=1

/*
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>=i;j--)
            printf("%d",j);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

//Q.12

//5        5<=5
//45       4<=5
//345      3<=5
//2345     2<=5
//12345    1<=5


/*
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=i;j<=5;j++)
            printf("%d",j);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

//Q.13

//1
//22
//333   33
//4444  4<=4
//55555 55

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
            printf("%d",i);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.14

//5     55  55
//44    45  54
//333       5>3
//2222      52
//11111     51


/*
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>=i;j--)
            printf("%d",i);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

//Q.15

//55555     51
//4444      41
//333       31
//22        21
//1         11

/*
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
            printf("%d",i);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

//Q.16

//11111
//2222
//333
//44
//5

/*
int main()
{
    for(int i=1;i<=5;i++)//i=1,2,3
    {
        for(int j=i;j<=5;j++)//3<=5
            printf("%d",i);
            //11111
            //2222
            //
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.17

//12345
//4321
//123
//21
//1

/*
int main()
{
    for(int i=5;i>=1;i--)//i=5,4
    {
        if(i%2==0)
        {
            for(int j=i;j>=1;j--)
                printf("%d",j);
            printf("\n");
        }
        else
        {
        for(int j=1;j<=i;j++)//1<=5
            printf("%d",j);
            //12345
            //
        printf("\n");
        }
    }
    return 0;
}
*/

//Q.18

//1234567
//12345
//123
//1

/*
int main()
{
    for(int i=7;i>=1;i--)
    {
        if(i%2!=0)
        {
            for(int j=1;j<=i;j++)
                printf("%d",j);
            if(i!=1)
                printf("\n");
        }
    }
    return 0;
}
*/

//different way!!!!

//Q.19

//1234567
//12345
//123
//1

/*
int main()
{
    for(int i=7;i>=1;i-=2)
    {
        for(int j=1;j<=i;j++)
            printf("%d",j);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

//Q.20

//13579
//3579
//579
//79
//9

/*
int main()
{
    for(int i=1;i<=9;i+=2)
    {
        for(int j=i;j<=9;j+=2)
            printf("%d",j);
        if(i!=9)
            printf("\n");
    }
    return 0;
}
*/

//Q.21

//1
//01
//101
//0101
//10101

/*
int main()
{
    for(int i=1;i<=5;i++)//i=2
    {
        if(i%2==0)
        {
            for(int j=1;j<=i;j++)//1<=2
                if(j%2==0)
                    printf("1");
                else
                    printf("0");
        }
        else
        {
            for(int j=1;j<=i;j++)//1<=2
                if(j%2==0)
                    printf("0");
                else
                    printf("1");
        }
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.22

//1
//01
//101
//0101
//10101

/*
int main()
{
    for(int i=1;i<=5;i++)//i=2
    {
        if(i%2==0)
        {
            for(int j=0;j<i;j++)//0<2
                printf("%d",j%2);
                //01
        }
        else
        {
            for(int j=1;j<=i;j++)//0<2
                printf("%d",j%2);
        }
        printf("\n");

    }
    return 0;
}
*/


//Q.23

//1
//01
//101
//0101
//10101

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
            printf("%d",(i+j+1)%2);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.24

//1             1
//2 4           2
//1 3 5         3
//2 4 6 8       4
//1 3 5 7 9     5

/*
int main()
{
    for(int i=1;i<=5;i++)//i=2
    {
        if(i%2==0)
        {
            for(int j=2;j<=(i*2);j+=2)//2<=4
                printf("%d ",j);
        }
        else
        {
            for(int j=1;j<=(i*2);j+=2)//1<=6
                printf("%d ",j);
        }
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.25

//55555
//45555
//34555
//23455
//12345

/*
int main()
{
    for(int i=5;i>=1;i--)//i=5,4
    {
        for(int j=i;j<=5;j++)//4<=5
            printf("%d",j);
            //5
            //45
            //345
            //2345
            //12345

        for(int j=1;j<i;j++)//1<5
            printf("5",j);

        printf("\n");
    }
    return 0;
}
*/

//Q.26

//1
//23
//456
//78910

/*
int main()
{
    int k=1;//1,3,6
    for(int i=1;i<=4;i++)//i=1,2,3,4
    {
        for(int j=1;j<=i;j++)//1<=4
            printf("%d",k++);
            //1
            //23
            //456
            //78910

        printf("\n");
    }
    return 0;
}
*/

//Q.27

//1
//10
//101
//1010
//10101

/*
int main()
{

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
            if(j%2==0)
                printf("0",j);
            else
                printf("1",j);
            //printf("%d",j);
        printf("\n");
    }
    return 0;
}
*/

//Q.28

//1
//10
//101
//1010
//10101

/*
int main()
{
    for(int i=1;i<=5;i++)//i=1,2
    {
        for(int j=1;j<=i;j++)//1<=2
            printf("%d",j%2);
            //1
            //10
        printf("\n");
    }
    return 0;
}
*/

//Q.29

//1
//2 6
//3 7 10
//4 8 11 13
//5 9 12 14 15

/*
int main()
{

    for(int i=1;i<=5;i++)//i=5
    {
        int k=i;//k=5
        int l=4;//l=4
        for(int j=1;j<=i;j++)//1<=5
        {
             if(j==i)
                printf("%d",k);
             else
                printf("%d ",k);
             k=k+l;//14+1
             l--;//1
             //5 9 12 14 15
        }
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.30

//1
//2 9
//3 10 16
//4 11 17 22
//5 12 18 23 27
//6 13 19 24 28 31
//7 14 20 25 29 32 34
//8 15 21 26 30 33 35 36

/*
int main()
{
    for(int i=1;i<=8;i++)
    {
        int k=i;
        int l=7;
        for(int j=1;j<=i;j++)
        {
            if(j==i)
                printf("%d",k);
            else
                printf("%d ",k);
            k=k+l;
            l--;
        }
        if(i!=8)
            printf("\n");
    }
    return 0;
}
*/

//Q.31
//input=5

//1
//2 6
//3 7 10
//4 8 11 13
//5 9 12 14 15

/*
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)//i=5
    {
        int k=i;//k=5
        int l=n-1;//l=4
        for(int j=1;j<=i;j++)//1<=5
        {
             if(j==i)
                printf("%d",k);
             else
                printf("%d ",k);
             k=k+l;//14+1
             l--;//1
             //5 9 12 14 15
        }
        if(i!=n)
            printf("\n");
    }
    return 0;
}
*/

//Q.32

//1         11
//123       13
//12345     15
//1234567   17

/*
int main()
{
    for(int i=1;i<=7;i+=2)
    {
        for(int j=1;j<=i;j++)
            printf("%d",j);
        printf("\n");
    }
    return 0;
}
*/

//Q.33

//12344321
//123**321
//12****21
//1******1

/*
int main()
{
    for(int i=4;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            printf("%d",j);

        for(int j=i;j<4;j++)
            printf("**",j);

        for(int j=i;j>=1;j--)
            printf("%d",j);

        if(i!=1)
            printf("\n");
    }
}
*/

//Q.34

//     *
//    * *
//   * * *
//  * * * *
// * * * * *


//12345*  14
//2345* *   13
//345    12
//45
//5


/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
            printf(" ",j);

        for(int j=1;j<=i;j++)
        {
            if(j==i)
                printf("*",j);
            else
                printf("*-",j);

        }

        printf("\n");
    }
    return 0;
}
*/

//Q.35

//      1
//     1 2
//    1 2 3
//   1 2 3 4
//  1 2 3 4 5

//12345
//2345
//345
//34
//5

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
            printf(" ",j);

        for(int j=1;j<=i;j++)
        {
            if(j==i)
                printf("%d",j);
            else
                printf("%d ",j);
        }
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.36

//      1
//     2 2
//    3 3 3
//   4 4 4 4
//  5 5 5 5 5

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
            printf(" ",j);

        for(int j=1;j<=i;j++)
        {
            if(j==i)
                printf("%d",i);
            else
                printf("%d ",i);
        }
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.37

//      1
//     2 3
//    4 5 6
//   7 8 9 10

/*
int main()
{
    int k=1;
    for(int i=1;i<=4;i++)
    {
        for(int j=i;j<=5;j++)
            printf(" ",j);

        for(int j=1;j<=i;j++)
        {
            if(j==i)
                printf("%d",k++);
            else
                printf("%d ",k++);
        }
        if(i!=4)
            printf("\n");
    }
    return 0;
}
*/

//Q.38

//      A
//     A B
//    A B C
//   A B C D
//  A B C D E

/*
int main()
{

    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
            printf(" ",j);

        int k='A';
        for(int j=1;j<=i;j++)
        {
            if(j==i)
                printf("%c",k++);
            else
                printf("%c ",k++);
        }
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.39

//      A
//     B B
//    C C C
//   D D D D
//  E E E E E

/*
int main()
{
    int k='A';

    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
            printf(" ",j);

        for(int j=1;j<=i;j++)
        {
            if(j==i)
                printf("%c",k);
            else
                printf("%c ",k);
        }
        k++;
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.40

//      1
//    1 2 3
//  1 2 3 4 5

/*
int main()
{
    for(int i=1;i<=5;i+=2)
    {
        for(int j=i;j<=5;j++)
            printf(" ",j);

        for(int j=1;j<=i;j++)
            printf("%d ",j);

        printf("\n");
    }
    return 0;
}
*/

//Q.41

//      1
//    2 3 4
//  5 6 7 8 9

/*
int main()
{
    int k=1;
    for(int i=1;i<=5;i+=2)
    {
        for(int j=i;j<=5;j++)
            printf(" ",j);

        for(int j=1;j<=i;j++)
        {
            if(j==i)
                printf("%d",k++);
            else
                printf("%d ",k++);
        }
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.42

//11111
//2222
//333
//22
//5

/*
int main()
{
    for(int i=1;i<=5;i++)//i=1,2
    {
        for(int j=i;j<=5;j++)//2<=5

            if(i!=4)
                printf("%d",i);
            else
                printf("%d",i-2);

        printf("\n");
    }
    return 0;
}
*/

//Q.43

//5432*
//543*1
//54*21
//5*321
//*4321

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            if(j==i)
                printf("*",j);
            else
                printf("%d",j);
        }
        for(int j=i-1;j>=1;j--)
            printf("%d",j);
        printf("\n");
    }
    return 0;
}
*/

//Q.44

//5432*
//543*1
//54*21
//5*321
//*4321

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=1;j--)
        {
            if(j==i)
                printf("*");
            else
                printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
*/

//Q.45

// 1
// 121
// 12321
// 1234321

/*
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
            printf("%d",j);

        for(int j=i-1;j>=1;j--)
            printf("%d",j);
        printf("\n");
    }
    return 0;
}
*/


/*
# Q-46
# 0
# 909
# 89098
# 7890987
# 678909876
# 56789098765
# 4567890987654
# 345678909876543
# 23456789098765432
# 1234567890987654321
*/

/*
int main()
{
    for(int i=10;i>=1;i--)
    {
        for(int j=i;j<=10;j++)
        {
            if(j==10)
                printf("0");
            else
                printf("%d",j);
        }
        for(int j=9;j>=i;j--)
            printf("%d",j);
        printf("\n");
    }
    return 0;
}
*/

//Q.47

// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
            printf("%d",j);

        for(int j=i;j<5;j++)
            printf(" ",j);

        for(int j=i;j<5;j++)
            printf(" ",j);

        for(int j=i;j>=1;j--)
            printf("%d",j);

        printf("\n");
    }
    return 0;
}
*/

//Q.48

//     1
//    21
//   321
//  4321
// 54321

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<5;j++)
            printf(" ",j);

        for(int j=i;j>=1;j--)
            printf("%d",j);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.49

//1
//23      2
//456    54
//78910 987

/*
int main()
{
    int k=1;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
            printf("%d",k++);

        int l=k-2;
        for(int j=1;j<i;j++)
            printf("%d",l--);
        printf("\n");
    }
    return 0;
}
*/


/*
# Q-50
# 1
# 2*2
# 3*3*3
# 4*4*4*4
# 4*4*4*4
# 3*3*3
# 2*2
# 1
*/

/*
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==i)
                printf("%d",i);
            else
                printf("%d*",i);
        }
        printf("\n");
    }
    for(int i=4;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==i)
                printf("%d",i);
            else
                printf("%d*",i);
        }
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

//Q.51

//11
//12 13
//13 14 15
//14 15 16 17

/*
int main()
{
    for(int i=1;i<=4;i++)//i=1,2,3
    {
        int k=10+i;//k=13
        for(int j=1;j<=i;j++)//1<=3
        {
            if(j==i)
                printf("%d",k++);
            else
                printf("%d-",k++);
        }
            //11
            //12 13
            //13 14 15
        if(i!=4)
            printf("\n");
    }
    return 0;
}
*/

//Q.52

//-------------1  13   1<=13 13>=1
//-----------2 3  11   2<=12
//---------4 5 6   9
//------7 8 9 10   6
//11 12 13 14 15

/*
int main()
{
    int k=1,l=1;
    for(int i=1;i<=5;i++)
    {
        int spaces=13;
        for(int j=1;j<=i;j++)
        {
            if(j==i)
            {
                if(k>=10)
                    spaces-=1;
            }
            else
            {
                if(k>=10)
                    spaces-=3;
                else
                    spaces-=2;
            }
            k++;
        }
        //printf("%d\n",spaces);
        //getch();

        for(int j=1;j<=spaces;j++)
            printf("-",j);

        for(int j=1;j<=i;j++)
        {
            if(j==i)
                printf("%d",l++);
            else
                printf("%d-",l++);

        }
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.53

//     5
//    54
//   543
//  5432
// 54321

/*
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<i;j++)
            printf(" ",j);

        for(int j=5;j>=i;j--)
            printf("%d",j);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

//Q.54

//1
//212
//32123
//4321234

/*
int main()
{
    for(int i=1;i<=4;i++)//i=1,2
    {
        for(int j=i;j>1;j--)//2>=1
            printf("%d",j);
            //1
            //
        for(int j=1;j<=i;j++)
            printf("%d",j);
        if(i!=4)
            printf("\n");
    }
    return 0;
}
*/

/*
int main()
{

    for(int i=1;i<=5;i++)//i=1,2,3
    {
        int k=i;//k=3
        for(int j=1;j<=i;j++)//1<=3
            printf("%d",k++);
            //1
            //23
            //345
        printf("\n");
    }
    return 0;
}
*/

//Q.54

//1234
//2341
//3421
//4321

/*
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=i;j<=4;j++)
            printf("%d",j);
        for(int j=i-1;j>=1;j--)
            printf("%d",j);
        if(i!=4)
            printf("\n");
    }
    return 0;
}
*/

//Q.55

//11111
//0000
//111
//00
//1

/*
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
                printf("0",j);
            else
                printf("1",j);
        }
        printf("\n");
    }
    return 0;
}
*/

//Q.56

//11111
//0000
//111
//00
//1

/*
int main()
{
    for(int i=5;i>=1;i--)//i=5
    {
        for(int j=1;j<=i;j++)//1<=5
            printf("%d",i%2);
            //
        printf("\n");
    }
    return 0;
}
*/

/*
# Q-57
# 1
# 4   9  16
# 25  36  49  64  81
# 100 121 144 169 196 225 256
# 289 324 361 400 441 484 529 576 625
*/

//1
//2 3 4
//5 6 7 8 9
//10 11 12 13 14 15 16
//17 18 19 20 21 22 23 24 25

/*
int main()
{
    int k=1;
    for(int i=1;i<=5;i++)//i=1
    {
        for(int j=1;j<i*2;j++)//1<2
        {
            printf("%d ",k*k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
*/

//Q.57

//11111
//1   1
//1   1
//1   1
//11111

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==1 || i==5)
                printf("1",j);
            else
            {
                if(j==1 || j==5)
                    printf("1",j);
                else
                    printf(" ",j);
            }
        }
        if(i!=5)
             printf("\n");
    }
    return 0;
}
*/

//Q.58

//11111
//10001
//10001
//10001
//11111

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==1 || i==5)
                printf("1",j);
            else
            {
                if(j==1 || j==5)
                    printf("1",j);
                else
                    printf("0",j);
            }
        }
        if(i!=5)
             printf("\n");
    }
    return 0;
}

/*
# Q-59
#     1
#    123
#   12345
#  1234567
# 123456789
#  1234567
#   12345
#    123
#     1
*/
/*
# 1
# 123
# 12345
# 1234567
# 123456789
*/

/*
int main()
{
    for(int i=1;i<=5;i++)//i=1,2
    {
        for(int j=i;j<5;j++)//2<=5
            printf("-",j);
            //12345
            //2345
        for(int j=1;j<i*2;j++)
            printf("%d",j);
        printf("\n");
    }
    for(int i=4;i>=1;i--)//i=1,2
    {
        for(int j=i;j<5;j++)//2<=5
            printf("-",j);
            //12345
            //2345
        for(int j=1;j<i*2;j++)
            printf("%d",j);
        printf("\n");
    }

    return 0;
}
*/

/*
# Q-61
#        *
#      * * *
#    * * * * *
#  * * * * * * *
#* * * * * * * * *
#  * * * * * * *
#    * * * * *
#      * * *
#        *
*/

/*
int main()
{
    for(int i=1;i<=5;i++)//i=1,2,3
    {
        for(int j=i;j<=5;j++)
            printf(" ",j);

        for(int j=1;j<i*2;j++)//1<6
            printf("*",j);
            //1
            //123
            //12345
        printf("\n");
    }
    for(int i=4;i>=1;i--)
    {
        for(int j=i;j<=5;j++)
            printf(" ",j);
        for(int j=1;j<i*2;j++)
            printf("*",j);
        printf("\n");
    }
    return 0;
}
*/

/*
 Q-62

 *000*000* 1 5 9
 0*00*00*0 2 5 8
 00*0*0*00 3 5 7
 000***000 4 5 6
*/

/*
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(i==1)
            {
                if(j==1 || j==5 || j==9)
                    printf("*");
                else
                    printf("0");
            }
            if(i==2)
            {
                if(j==2 || j==5 || j==8)
                    printf("*");
                else
                    printf("0");
            }
            if(i==3)
            {
                if(j==3 || j==5 || j==7)
                    printf("*");
                else
                    printf("0");
            }
            if(i==4)
            {
                if(j==4 || j==5 || j==6)
                    printf("*");
                else
                    printf("0");
            }
        }
            //printf("%d",j);
        printf("\n");
    }
    return 0;
}
*/

/*
 Q-63

 *000 * 000*
 0*00 * 00*0
 00*0 * 0*00
 000* * *000
*/

/*
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<5;j++)
        {
            if(j==i)
                printf("*");
            else
                printf("0");
        }
        printf("*");

        for(int j=4;j>=1;j--)
        {
            if(j==i)
                printf("*");
            else
                printf("0");
        }

        printf("\n");
    }
    return 0;
}
*/

//Q.64

//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1

/*
int ff(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
        fact*=i;
    return fact;
}

int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
            printf("%d\t",ff(i)/(ff(j)* ff(i-j)));
        printf("\n");
    }
    return 0;
}
*/

/*
# Q-65
# 1
# 2  4
# 3  6   9
# 4  8   12  16
# 5  10  15  20  25
# 6  12  18  24  30  36
# 7  14  21  28  35  42  49
# 8  16  24  32  40  48  56  64
# 9  18  27  36  45  54  63  72  81
#10  20  30  40  50  60  70  80  90 100
*/

/*
int main()
{
    for(int i=1;i<=10;i++)//i=1,2,3
    {
        for(int j=1;j<=i;j++)//1<=3
            printf("%d ",i*j);
            //1
            //2 4
            //3 6 9
        if(i!=10)
            printf("\n");
    }
    return 0;
}
*/


//Q.66
//1 1 2 3 5 8 13 21 34 55 89 144 233 377 610

/*
int main()
{
    int pn=1,nn=1,sum;
    for(int i=1;i<=15;i++)
    {
        printf("%d\t",pn);
        sum=pn+nn;
        pn=nn;
        nn=sum;
    }
    printf("\n");
    return 0;
}
*/

/*
# Q-67
#1
#1   2
#3   5   8
#13  21  34  55
#89 144 233 377 610
*/

/*
int main()
{
    int pn=1,nn=1,sum;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==i)
                printf("%d",pn);
            else
                printf("%d ",pn);
            sum=pn+nn;
            pn=nn;
            nn=sum;
        }
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.68

//11111
//10001
//10001
//10001
//11111

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==1 || i==5)
                printf("1",j);
            else
            {
                if(j==1 || j==5)
                    printf("1",j);
                else
                    printf("0",j);
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//Q.69

//1 2 3 4 5
//2 1 2 3 4
//3 2 1 2 3
//4 3 2 1 2
//5 4 3 2 1

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j>=1;j--)
        {
            if(j==1)
                printf("%d",j);
            else
                printf("%d-",j);
        }
        for(int j=2;j<=6-i;j++)
            printf("-%d",j);
        printf("\n");
    }
    return 0;
}
*/

//Q.70

//1
//3 2
//4 5 6
//10 9 8 7
//11 12 13 14 15

/*
int main()
{
    int k=1;
    for(int i=1;i<=5;i++)
    {
        int l=k+i-1;
        if(i%2==0)//even
        {
            for(int j=1;j<=i;j++)
            {
                if(j==i)
                    printf("%d",l--);
                else
                    printf("%d ",l--);
            }
            k=k+i;
        }
        else
        {
            for(int j=1;j<=i;j++)
            {
                if(j==i)
                    printf("%d",k++);
                else
                    printf("%d ",k++);
            }
        }
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.71

//1
//23    2
//345   43
//4567  654
//56789 8765

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        int k=i;
        for(int j=1;j<=i;j++)
            printf("%d",k++);

        int l=k-2;
        for(int j=1;j<i;j++)
            printf("%d",l--);

        printf("\n");
    }
    return 0;
}
*/

//Q.72

/*
 1     1
  2   2
   3 3
    4
   3 3
  2   2
 1     1
*/

/*
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=7;j++)
        {
            if(i==1)
            {
                if(j==1 || j==7)
                    printf("%d",i);
                else
                    printf(" ",i);
            }
            if(i==2)
            {
                if(j==2 || j==6)
                    printf("%d",i);
                else
                    printf(" ",i);
            }
            if(i==3)
            {
                if(j==3 || j==5)
                    printf("%d",i);
                else
                    printf(" ",i);
            }
            if(i==4)
            {
                if(j==4)
                    printf("%d",i);
                else
                    printf(" ",i);
            }

        }

        printf("\n");
    }

    for(int i=3;i>=1;i--)//i=4,3
        {
            for(int j=1;j<=7;j++)//1<=7
            {
                if(i==3)
                {
                    if(j==3 || j==5)
                        printf("%d",i);
                    else
                        printf(" ",i);
                }
                if(i==2)
                {
                    if(j==2 || j==6)
                        printf("%d",i);
                    else
                        printf(" ",i);
                }
                if(i==1)
                {
                    if(j==1 || j==7)
                        printf("%d",i);
                    else
                        printf(" ",i);
                }

            }
                //printf("%d",i);
                //4444444
                //3333333
            printf("\n");
        }

    return 0;
}
*/

//Q.73

//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

/*
int main()
{//1*8=2
 //2*8=1
 //3*2=6
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=4;j++)
            printf("  ",j);
        for(int j=1;j<=i;j++)
            printf("%d ",j);
        for(int j=i-1;j>=1;j--)
            printf("%d ",j);
        printf("\n");
    }
    return 0;
}
*/

//Q.74

//      1
//    2-- 2
//  3----   3
//4------     4
//  3       3
//    2   2
//      1

/*
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=4;j>i;j--)
            printf("  ",j);
        printf("%d",i);

        for(int j=1;j<(i-1)*4;j++)
            printf(" ",j);
        if(i!=1)
            printf("%d",i);

        printf("\n");
    }
    for(int i=3;i>=1;i--)
    {
        for(int j=4;j>i;j--)
            printf("  ",j);
        printf("%d",i);

        for(int j=1;j<(i-1)*4;j++)
            printf(" ",j);
        if(i!=1)
            printf("%d",i);

        printf("\n");
    }
    return 0;
}
*/

/*
# Q-75
# Right Half Pyramid
# *            | 1           | A
# * *          | 1 2         | A B
# * * *        | 1 2 3       | A B C
# * * * *      | 1 2 3 4     | A B C D
# * * * * *    | 1 2 3 4 5   | A B C D E
*/

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
            printf("* ",j);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
            printf("%d ",j);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        int k='A';
        for(int j=1;j<=i;j++)
            printf("%c ",k++);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

/*
# Q-76
# Right Half Pyramid
#         *    |         1   |         A
#       * *    |       1 2   |       A B
#     * * *    |     1 2 3   |     A B C
#   * * * *    |   1 2 3 4   |   A B C D
# * * * * *    | 1 2 3 4 5   | A B C D E
*/

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>i;j--)
            printf("  ",j);
        for(int j=1;j<=i;j++)
            printf("* ",j);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>i;j--)
            printf("  ",j);
        for(int j=1;j<=i;j++)
            printf("%d ",j);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        int k='A';
        for(int j=5;j>i;j--)
            printf("  ",j);
        for(int j=1;j<=i;j++)
            printf("%c ",k++);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

/*
# Q-77
# Full Pyramid
#        *             |        1             |        A
#      * * *           |      1 2 3           |      A B C
#    * * * * *         |    1 2 3 4 5         |    A B C D E
#  * * * * * * *       |  1 2 3 4 5 6 7       |  A B C D E F G
#* * * * * * * * *     |1 2 3 4 5 6 7 8 9     |A B C D E F G H I
*/

//1   1
//2+1 3
//3+2 5
//4+3 7
//5+4 9

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>i;j--)
            printf("  ",j);
        for(int j=1;j<=i;j++)
            printf("* ",j);
        for(int j=1;j<i;j++)
            printf("* ");
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

/*
|1
|1 2 3
|1 2 3 4 5
|1 2 3 4 5 6 7
|1 2 3 4 5 6 7 8 9
*/

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>i;j--)
            printf("- ",j);
        for(int j=1;j<=(2*i-1);j++)
            printf("%d ",j);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

/*
int main()
{

    for(int i=1;i<=5;i++)
    {
        int k='A';
        for(int j=5;j>i;j--)
            printf("  ",j);
        for(int j=1;j<=(2*i-1);j++)
            printf("%c ",k++);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

/*
# Q-78
# Inverted Right Half Pyramid Pattern
# * * * * *    | 1 2 3 4 5    | A B C D E
# * * * *      | 1 2 3 4      | A B C D
# * * *        | 1 2 3        | A B C
# * *          | 1 2          | A B
# *            | 1            | A
*/

/*
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            printf("* ",j);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            printf("%d ",j);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    for(int i=5;i>=1;i--)
    {
        int k='A';
        for(int j=1;j<=i;j++)
            printf("%c ",k++);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

/*
# Q-79
# Inverted Left Half Pyramid Pattern
# * * * * *    | 1 2 3 4 5    | A B C D E
#   * * * *    |   1 2 3 4    |   A B C D
#     * * *    |     1 2 3    |     A B C
#       * *    |       1 2    |       A B
#         *    |         1    |         A
*/

/*
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>i;j--)
            printf("  ",j);
        for(int j=1;j<=i;j++)
            printf("* ",j);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>i;j--)
            printf("  ",j);
        for(int j=1;j<=i;j++)
            printf("%d ",j);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    for(int i=5;i>=1;i--)
    {
        int k='A';
        for(int j=5;j>i;j--)
            printf("  ",j);
        for(int j=1;j<=i;j++)
            printf("%c ",k++);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

/*
# Q-80
# Inverted Full Pyramid Pattern
# * * * * * * * * *    | 1 2 3 4 5 6 7 8 9    | A B C D E F G H I
#   * * * * * * *      |   1 2 3 4 5 6 7      |   A B C D E F G
#     * * * * *        |     1 2 3 4 5        |     A B C D E
#       * * *          |       1 2 3          |       A B C
#         *            |         1            |         A
*/

//(2*5)-1=9
//(2*4)-1=7
//(2*3)-1=5
//

/*
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>i;j--)//5>=4
            printf("  ",j);
        for(int j=1;j<=((2*i)-1);j++)//1<=9
            printf("* ",j);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>i;j--)//5>=4
            printf("  ",j);
        for(int j=1;j<=((2*i)-1);j++)//1<=9
            printf("%d ",j);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    for(int i=5;i>=1;i--)
    {
        int k='A';
        for(int j=5;j>i;j--)//5>=4
            printf("  ",j);
        for(int j=1;j<=(2*i-1);j++)//1<=9
            printf("%c ",k++);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

/*
# Q-81
# Rhombus
#     * * * * *    |     1 2 3 4 5   |     A B C D E
#    * * * * *     |    1 2 3 4 5    |    A B C D E
#   * * * * *      |   1 2 3 4 5     |   A B C D E
#  * * * * *       |  1 2 3 4 5      |  A B C D E
# * * * * *        | 1 2 3 4 5       | A B C D E
*/

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>i;j--)
            printf(" ",j);
        for(int j=1;j<=5;j++)
            printf("* ",j);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        int k='A';
        for(int j=5;j>i;j--)
            printf(" ",j);
        for(int j=1;j<=5;j++)
            printf("%d ",j);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        int k='A';
        for(int j=5;j>i;j--)
            printf(" ",j);
        for(int j=1;j<=5;j++)
            printf("%c ",k++);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

/*
  Q.82
        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9
  1 2 3 4 5 6 7
    1 2 3 4 5
      1 2 3
        1

        A
      A B C
    A B C D E
  A B C D E F G
A B C D E F G H I
  A B C D E F G
    A B C D E
      A B C
        A


*/

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>i;j--)
            printf("  ",j);
        for(int j=1;j<=(2*i-1);j++)
            printf("%d ",j);
        //if(i!=5)
        printf("\n");
    }
    for(int i=4;i>=1;i--)
    {
        for(int j=5;j>i;j--)
            printf("  ",j);
        for(int j=1;j<=(2*i-1);j++)
            printf("%d ",j);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>i;j--)
            printf("  ",j);
        for(int j=1;j<=(2*i-1);j++)
            printf("* ",j);
        //if(i!=5)
        printf("\n");
    }
    for(int i=4;i>=1;i--)
    {
        for(int j=5;j>i;j--)
            printf("  ",j);
        for(int j=1;j<=(2*i-1);j++)
            printf("* ",j);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        int k='A';
        for(int j=5;j>i;j--)
            printf("  ",j);
        for(int j=1;j<=(2*i-1);j++)
            printf("%c ",k++);
        //if(i!=5)
        printf("\n");
    }
    for(int i=4;i>=1;i--)
    {
        int k='A';
        for(int j=5;j>i;j--)
            printf("  ",j);
        for(int j=1;j<=(2*i-1);j++)
            printf("%c ",k++);
        if(i!=1)
            printf("\n");
    }
    return 0;
}
*/

/*
    Q.83

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

1 2 3 4 5 6 7 8 9
  1 2 3 4 5 6 7
    1 2 3 4 5
      1 2 3
        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9

A B C D E F G H I
  A B C D E F G
    A B C D E
      A B C
        A
      A B C
    A B C D E
  A B C D E F G
A B C D E F G H I

*/

/*
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>i;j--)
            printf("  ",j);
        for(int j=1;j<=(2*i-1);j++)
            printf("* ",j);
        printf("\n");
    }
    for(int i=2;i<=5;i++)
    {
        for(int j=i;j<5;j++)
            printf("  ",j);
        for(int j=1;j<=(2*i-1);j++)
            printf("* ",j);
        printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>i;j--)
            printf("  ",j);
        for(int j=1;j<=(2*i-1);j++)
            printf("%d ",j);
        printf("\n");
    }
    for(int i=2;i<=5;i++)
    {
        for(int j=i;j<5;j++)
            printf("  ",j);
        for(int j=1;j<=(2*i-1);j++)
            printf("%d ",j);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    for(int i=5;i>=1;i--)
    {
        int k='A';
        for(int j=5;j>i;j--)
            printf("  ",j);
        for(int j=1;j<=(2*i-1);j++)
            printf("%c ",k++);
        printf("\n");
    }
    for(int i=2;i<=5;i++)
    {
        int k='A';
        for(int j=i;j<5;j++)
            printf("  ",j);
        for(int j=1;j<=(2*i-1);j++)
            printf("%c ",k++);
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

/*
Q.84

* * * * *
*       *
*       *
*       *
* * * * *

1 2 3 4 5
1       5
1       5
1       5
1 2 3 4 5

A B C D E
A       E
A       E
A       E
A B C D E
*/

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==2 || i==3 || i==4)
            {
                if(j==1 || j==5)
                    printf("* ",j);
                else
                    printf("  ",j);
            }
            else
                printf("* ",j);
        }
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==2 || i==3 || i==4)
            {
                if(j==1 || j==5)
                    printf("%d ",j);
                else
                    printf("  ",j);
            }
            else
                printf("%d ",j);
        }
        if(i!=5)
        printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        int k='A';
        for(int j=1;j<=5;j++)
        {
            if(i==2 || i==3 || i==4)
            {
                if(j==1 || j==5)
                    printf("%c ",k++);
                else
                    printf("  ",k++);
            }
            else
                printf("%c ",k++);
        }
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

/*
    Q.85

        *
      *   *
    *       *
  *           *
* * * * * * * * *

        1
      1   3
    1       5
  1           7
1 2 3 4 5 6 7 8 9

        A
      A   C
    A       E
  A           G
A B C D E F G H I

*/

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>i;j--)
            printf("  ",j);
        for(int j=1;j<=(2*i-1);j++)
        {
            if(j==1 || j==(2*i-1) || i==5)
                printf("* ",j);
            else
                printf("  ",j);
        }
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>i;j--)
            printf("  ",j);
        for(int j=1;j<=(2*i-1);j++)
        {
            if(j==1 || j==(2*i-1) || i==5)
                printf("%d ",j);
            else
                printf("  ",j);
        }
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        int k='A';
        for(int j=5;j>i;j--)
            printf("  ",j);
        for(int j=1;j<=(2*i-1);j++)
        {
            if(j==1 || j==(2*i-1) || i==5)
                printf("%c ",k++);
            else
                printf("  ",k++);
        }
        if(i!=5)
            printf("\n");
    }
    return 0;
}
*/

//Q.86  *

//1  2  3  4  5
//16          6
//15          7
//14          8
//13 12 11 10 9

/*
int main()
{
    int k=1,l=10;
    for(int i=1;i<=5;i++)
    {
        if(i==1)
        {
            for(int j=1;j<=5;j++)
            {
                if(j==5)
                    printf("%d",k++);
                else if(k>=10)
                    printf("%d-",k++);
                else
                    printf("%d--",k++);
            }
        }
        else if(i==5)
        {
            int m=k+l;
            for(int j=1;j<=5;j++)
            {
                if(j==5)
                    printf("%d",m);
                else
                    printf("%d ",m--);
            }
        }
        else
        {
            int m=l+k;
            printf("%d-",m);
            for(int j=1;j<=3;j++)
                printf("---");
            printf("%d",k);
            k++;
            l-=2;
        }
        printf("\n");
    }
}
*/


//Q.86

//AAAAA
//BBBB
//CCC
//DD
//E

/*
int main()
{
    int k='A';
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
            printf("%c",k);
        printf("\n");
        k++;
    }
    return 0;
}
*/

//Q.87

//A
//BB
//CCC
//DDDD
//EEEEE

/*
int main()
{
    int k='A';
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
            printf("%c",k);
        if(i!=5)
            printf("\n");
        k++;
    }
    return 0;
}
*/

//Q.88

//A
//AB
//ABC
//ABCD
//ABCDE

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        int k='A';
        for(int j=1;j<=i;j++)
            printf("%c",k++);
        printf("\n");
    }
    return 0;
}
*/

//Q.89

//EDCBA
//EDCB
//EDC
//ED
//E

/*
int main()
{
    for(int i=1;i<=5;i++)
    {
        int k='E';
        for(int j=5;j>=i;j--)
            printf("%c",k--);
        printf("\n");
    }
}
*/

//Q.90
//n=5
//*****
//*   *
//*****
//  *
//  *

/*
int main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==2)
            {
                if(j==1 || j==5)
                    printf("*",j);
                else
                    printf(" ",j);
            }
            else
                printf("*",j);
        }
        printf("\n");
    }
    for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=2;j++)
            printf(" ",j);
        for(int j=i;j<=i;j++)
            printf("*",j);
        printf("\n");
    }
    return 0;
}
*/

//Q.91

//n=5
//*****
//*   *
//*****
//  *
//  *


/*
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i==1 || i==n/2+1)
        {
            for(int j=1;j<=n;j++)
            {
                printf("*",j);
            }
        }
        else if(i>1 && i<n/2+1)
        {
            for(int j=1;j<=n;j++)
            {
                if(j==1 || j==n)
                    printf("*");
                else
                    printf(" ");
            }
        }
        else
        {
            for(int j=1;j<=n/2+1;j++)
            {
                if(j==n/2+1)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//Q.92

//n=5

//  *
//  *
//*****
//*   *
//*****

/*
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i==n/2+1 || i==n)
        {
            for(int j=1;j<=n;j++)
            {
                printf("*",j);
            }
        }
        else if(i>n/2+1 && i<n)
        {
            for(int j=1;j<=n;j++)
            {
                if(j==1 || j==n)
                    printf("*");
                else
                    printf(" ");
            }
        }
        else
        {
            for(int j=1;j<=n/2+1;j++)
            {
                if(j==n/2+1)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//Q.93

//n=7

//****
//*  *
//*  *
//*  ****
//*  *
//*  *
//****

/*
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i==1 || i==n)
        {
            for(int j=1;j<=n/2+1;j++)
            {
                printf("*",j);
            }
        }
        else if(i>1 || i<n/2+1)
        {
            for(int j=1;j<=n/2+1;j++)
            {
                if(j==1 || j==n/2+1)
                    printf("*",j);
                else
                    printf(" ",j);
            }
            if(i==n/2+1)
            {
                for(int j=1;j<=n/2;j++)
                    printf("*");
            }
        }
        if(i!=n)
            printf("\n");
    }
    return 0;
}
*/

//Q.94 ***

//n=7

//****
//*  *
//*  *
//*  ****
//*  *
//*  *
//****

/*
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i!=n/2+1)
        {
             for(int j=1;j<=n/2;j++)
                printf("-");
        }
        else
        {
             for(int j=1;j<=n/2;j++)
                printf("*");
        }
        if(i==1 || i==n)
        {
            for(int j=1;j<=n/2+1;j++)
            {
                printf("*",j);
            }
        }
        else if(i>1 || i<n/2+1)
        {
            for(int j=1;j<=n/2+1;j++)
            {
                if(j==1 || j==n/2+1)
                    printf("*",j);
                else
                    printf(" ",j);
            }
            if(i==n/2+1)
            {
                for(int j=1;j<=n/2;j++)
                    printf("*");
            }
        }
            printf("\n");
    }
    return 0;
}
*/

//Q.95

// * * * * *
// * * 1 * *
// * 1 2 3 *
// 1 2 3 4 5
// * * * * *

/*

int main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=3;j>=i;j--)
            printf("- ",j);
        for(int j=1;j<=2*i-1;j++)
            printf("%d ",j);
        printf("\n");
    }
}

*/
//Q.96

//n=4

//****
//*  *
//*  *
//****

/*
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 ||i==n)
                printf("*",j);
            else
            {
                if(j==1 || j==n)
                    printf("*",j);
                else
                    printf(" ",j);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
