#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv[])
{
    int m1,m2,m3,m4,m5,total;
    float avg;
    char name[30];

    if(argc !=7)
    {
        printf("./PROJECT3.C name m1 m2 m3 m4 m5\n");
        return 0;
    }
    strcpy(name,argv[1]);
    m1= atoi(argv[2]);
    m2= atoi(argv[3]);
    m3= atoi(argv[4]);
    m4= atoi(argv[5]);
    m5= atoi(argv[6]);

    total= m1+m2+m3+m4+m5;
    avg= total/5.00;

    printf("\nSTUDENT DETAILS\n");
    printf("Mark1= %d\n",m1);
    printf("Mark2= %d\n",m2);
    printf("Mark3= %d\n",m3);
    printf("Mark4= %d\n",m4);
    printf("Mark5= %d\n",m5);
    printf("Total Marks= %d\n",total);
    printf("Average=%f",avg);

    if(m1<35||m2<35||m3<35||m4<35||m5<35)
    {
        printf("FAIL");
    }
    else
    {
        printf("PASS");

        if(avg>=90)
        {
            printf("Grade=A+");
        }
        else if(avg>=80)
        {
            printf("Grade=A");
        }
        else if(avg>=70)
        {
            printf("Grade=B");
        }
        else if(avg>=60)
        {
            printf("Grade=C");
        }
        else
            printf("Grade=D");
    }

    return 0;
}
