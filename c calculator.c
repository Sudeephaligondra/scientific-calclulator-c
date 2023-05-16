#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
int main(){
	int i,j;
    float a,b,result,res=1;
    double x;
    int ch;
    table:
    	printf("\n");
    printf("- - - - - - - -- - - - - - - -- - - - - - - -\n");
    printf("|           SCIENTIFIC CALCULATOR           |\n");
    printf("- - - - - - - -- - - - - - - -- - - - - - - -");
    printf("\n\n");
    printf("enter WHAT YOU WANT TO FIND\n\n");
    printf("Press '1' for addition:     '2' for subtraction:    '3' for multiplication: \n");
    printf("      '4' for division:     '5' for Sin:            '6' for cos:            \n");
    printf("      '7' for tan:          '8' for square:         '9'for power\n");
    printf("      '10' for log          '11'for modulus         '12' factorial \n");
    printf("Press '13' to exit\n");
    scanf("%d",&ch);
    switch(ch){
    	case 1: printf("enter two numbers to add\n");
	    	    scanf("%f %f",&a,&b);
	    	    printf("%f",a+b);break;
	    case 2: printf("enter two numbers to subtract\n");
	    	    scanf("%f %f",&a,&b);
	    	    printf("%f",a-b);
				break;
		case 3: printf("enter two numbers to multiply\n");
	    	    scanf("%f %f",&a,&b);
	    	    printf("%f",a*b);break;
	    case 4: printf("enter two numbers to divide\n");
	    	    scanf("%f %f",&a,&b);
	    	    printf("%f",a/b);break; 
		case 5:
				printf("Enter the Number for Calculating SIN: ");
				scanf("%lf",&x);
			    result=sin(x*3.14159/180);
			    printf("%.2f",result);
				break;
		case 6: printf("Enter the Number for Calculating COS: ");
				scanf("%lf",&x);
			    result=cos(x*3.14159/180);
			    printf("%.2f",result);
				break;
		
		case 7: printf("Enter the Number for Calculating TAN: ");
				scanf("%lf",&x);
				result=tan(x*3.14159/180);
			    printf("%.2f",result);
				break;
				
		case 8: printf("Enter the Number for Calculating Square: ");
				scanf("%f",&a);
				result=a*a;
				printf("%.2f",result);
				break;		
		case 9: printf("Enter the Number to Calculat its Power:");
				scanf("%f",&a);
				printf("Enter the Power for a Number: ");
				scanf("%f",&b);
				while(b!=0){
					res*=a;
					--b;}
			    printf("%f",res);
				break;	
		case 10:printf("Enter the Number for Calculating LOG: ");
				scanf("%f",&a);
				result=log(a);printf("%.2f",result);
				break;
		case 11:printf("Enter the 2 Number for Calculating modulus: ");
				scanf("%d %d",&i,&j);
			    result=i % j;
				printf("%.1f",result);
				break;
		case 12:printf("Enter the Number to Calculat its factorial:");
				scanf("%d",&i);
				while(i!=0){
					res*=i;
					--i;}	
				printf("%.1f",res);break;
		case 13:goto hi;
		default :printf("invalid option");
				 break;
		}
		goto table;
		hi:
	    getch();
		return 0; 
}
