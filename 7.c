#include<stdio.h>
#include<conio.h>
int before_optimize()
{	
int x=7;
int y=14-x/2;
return y*(28/x+2);
}
int after_optimize()
{
int y=14-7/2;
return y*(28/7+2);
}
void main()
{
int a,b;
clrscr();
a=before_optimize();
printf("Result before optimization %d",a);
b=after_optimize();
printf("Result after optimization %d",b);
getch();
}
 

OUTPUT:





CODE:
Common Sub-Expression Elimination
 
#include<stdio.h>
#include<conio.h>
void before_optimise()
{
    float r,pi=3.14;
    printf("\nEnter the value of radius:");
    scanf("%f",&r);
    printf("\nThe Circumference of circle is:%f",(2*pi*r));
    printf("\nThe Area of circle is:%f",(pi*r*r));
}
void after_optimise()
{
    float r,pi=3.14,t;
    printf("\nEnter the value of radius:");
    scanf("%f",&r);
    t=pi*r;//Common subexpression
    printf("\nThe Circumference of circle is:%f",(2*t));
    printf("\nThe Area of circle is:%f",(t*r));
}
void main()
{
    before_optimise();
    after_optimise();
}
 

OUTPUT:









CODE:
Code Movement
 
#include<stdio.h>
#include<conio.h>
void before_movement(int b,int c)
{
    int i,a,z;
    printf("\nBefore Code movement Optimization\n");
    i=0;
    while(i<10000)
    {
	a=b*c;
	z=a+34;
	i++;
    }
    printf("z= \n%d",z);
}
void after_movement(int b,int c)
{
    int t1,i,z;
    printf("\nAfter code movement optimization\n");
    t1=b*c;
    while(i<10000)
    {
	z=t1+34;
	i++;
    }
    printf("z= \n%d",z);
}
void main()
{
    int b,c;
    printf("\n Enter the values of b and c:");
    scanf("%d%d",&b,&c);
    before_movement(b,c);
    after_movement(b,c);

}
 

OUTPUT:





CODE:
Strength reduction
 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void main()
{
    char ope,op1[5],op2[5],op[2],res[10];
    int i,opr2;
    //clrscr();
    // printf("\nInput in the form example: a 7 * 7 otherwise gives an error \nEnter the algebric expression:\n");
    scanf("%s",&res);
    scanf("%s",&op1);
    scanf("%s",&op);
    scanf("%s",&op2);
    ope=op[0];
    opr2=atoi(op2);         //atoi- String to int
    switch(ope)
    {
	case '*':
	printf("%s ->",res);
	for(i=0;i<opr2-1;i++)
	    printf("%s + ",op1);
	printf("%s",op1);
	break;

	case '^':
	printf("%s ->",res);
	for(i=0;i<opr2-1;i++)
	    printf("%s * ",op1);
	printf("%s",op1);
	break;

    }
getch();
} 

OUTPUT:


CODE:
Dead Code Elimination
 
#include<stdio.h>
#include<conio.h>
int global;
int before_optimize()
{
 int i;
 i=1;
 global=1;
 global=2;
 return global;
 global=3;
}
int after_optimize()
{
global=2;
return global;
}
void main()
{
int a,b;
clrscr();
a=before_optimize();
printf("Value of global variable before optimization %d",a);
b=after_optimize();
printf("\nValue of global variable after optimization %d",b);
getch();
}
 

OUTPUT:


