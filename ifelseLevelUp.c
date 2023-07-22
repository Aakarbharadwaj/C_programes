//1 voter id

/*#include<stdio.h>
int main()
{
	int age;
	printf("enter the age and w :");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("valid age");
	}
	else
	{
		printf("not valid");
	}
	return 0;
}*/


//2 one num max a>10
/*#include<stdio.h>
int main()
{
	int a;
	printf("enter a :");
	scanf("%d",&a);
	
	if(a>10)
	{
		printf("a is greater than 10");
	}
	else
	{
		printf("not greater");
	}
	return 0;
	
}*/

//3 no. max a,b
/*#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
		printf("a is greater");
	}
	if(b>a)
	{
		printf("b is greater");
	}
	else
	{
		printf("both are equal");
	}
	return 0;
}
*/

//4 max abc
/*#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter value");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b&&a>c)
	{
		printf("a is greater");
	}
	else if(b>a&&b>c)
	{
		printf("b is greater");
	}
	else if(c>a&&c>b)
	{
		printf("c is greater");
	}
	else
	{
		printf("all are equal");
	}
	return 0;
}*/

//5 five num max abcde
/*#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("enter value");
	scanf("%d%d%d%d%",&a,&b,&c,&d,&e);
	
	if(a>b&&a>c&&a>d&&c>e)
	{
		printf("a is greater");
	}
	else if(b>a&&b>c&&b>d&&b>e)
	{
		printf("b is greater");
	}
	else if(c>a&&c>b&&c>d&&c>e)
	{
		printf("c is greater");
	}
	else if(d>a&&d>b&&d>c&&d>e)
	{
		printf("d is greater");
	}
		else if(e>a&&e>b&&e>d&&e>c)
	{
		printf("e is greater");
	}
	else
	{
		printf("all are equal");
	}
	return 0;
}*/


//6
/*#include<stdio.h>
int main()
{
	int a;
	printf("enter num");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("+ interger");
	}
	else if(a==0)
	{
		printf("zero");
	}
	else
	{
		printf("- integer");
	}
	return 0;
}*/

//7
//vowe or consonent
/*#include<stdio.h>
int main()
{
	char a;
	printf("enter alphabet : ");
	scanf("%c",&a);
	
	char upper_case=(a=='A' || a=='E' || a=='I' || a=='O' || a=='U');
	char lower_case=(a=='a'|| a=='e' || a=='i' || a=='o' || a=='u');
	if(upper_case||lower_case)
	{
		printf("vovel");
	}
	else
	{
		printf("consonent");
	}
	return 0;
}*/

//8
//divisible by 5 or 11
/*#include<stdio.h>
int main()
{
	int a;
	printf("enter number : ");
	scanf("%d",&a);
	
	if(a%5==0 ||a%11==0)
	{
		printf("divisible");
	}
	else{
		printf("not divisible");
	}
	return 0;
}*/

//9
//upper_case lower_case
/*#include<stdio.h>
int main()
{
	char a;
	printf("enter alphabet :");
	scanf("%c",&a);
	
	if(a>='A' && a<='Z')
	{
		printf("upper_case");
	}
	else{
		printf("lower_case");
	}
	return 0;
}*/
//10
// 7 ya 3 se divisible hai kya

/*#include<stdio.h>
int main()
{
	int a;
	printf("enter num:");
	scanf("%d",&a);
	
	if(a%7==0 && a%3==0)
	{
		printf("divisible");
	}
	else{
		printf("not divisible");
	}
	return 0;
}*/

//swap1 using var
/*#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value :");
	scanf("%d\n%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swaped a : %d \n",a);
	printf("swaped b : %d",b);
	return 0;
}*/
//swap2
/*#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter value :");
	scanf("%d\n%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("swaped a : %d \n",a);
	printf("swaped b : %d",b);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value :");
	scanf("%d\n%d",&a,&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("swaped a : %d \n",a);
	printf("swaped b : %d",b);
	return 0;
}*/
	

//12 temprature conversion
#include<stdio.h>
/*int main()
{
	int temprature,choose;
	float celcious,fahrenheit;
	printf("1. Fahrenheit to Celcious\n");
	printf("2. Celcious to Fahrenheit\n");
	printf("To get Celcious press 1 and for Fahrenheit press 2 : ");
	scanf("%d",&choose);
	if(choose==1)
	{
	    printf("enter temprature in Fahrenheit : ");
	    scanf(" %d",&temprature);
		celcious=(temprature-32)*5/9;
		printf("C = %f",celcious);
	}
	else if(choose==2)
	{
        printf("enter temprature in celcious : ");
	    scanf(" %d",&temprature);
		fahrenheit=(temprature*9/5)+32;
		printf("F= %f",fahrenheit);
	}
    	    	

	return 0;
}*/



//13
//area volume or triangle /square/ rectangle
/*#include<stdio.h>
int main()
{
	char s,r;
	int l,b,h,ar,v;
	printf("t or sq. or rec :");
	scanf("%c",&s);
		printf("area and vol:");
	scanf("%c ",&r);
	if(s=='t')
	{
		if(r=='a')
		{
			printf("enter l & b");
			scanf("%d %d",&l,&b);
			ar=1/2*(l*b);
			printf(" triangle area = %d",ar);
		}
		else if(r=='v')
			{
			printf("enter l & b");
			scanf("%d%d",&l,&b);
			v=1/2*(l*b*h);
			printf(" triangle area = %d",v);
		}
		else{
			printf("error");
		}
	}
	return 0;
}*/

//
/*#include<stdio.h>
int main()
{
	char result,shape;
	float l,b,h,area,volume;
	printf(" select result a or v and shape T,S,R : ");
	scanf("%c %c",&result,&shape);
	if(result=='a')
	{
		if(shape=='t')
		{
			printf("enter l & b of triangle : ");
			scanf("%f %f",&l,&b);
			area=0.5*(l*b);
			printf("area of triangle = %f",area);
		}
		else if(shape=='s')
		{
			printf("enter l of square : ");
			scanf("%f",&l);
			area=(l*l);
			printf("area of square = %f",area);
		}
		else if(shape=='r')
		{
			printf("enter l & b of rectangle : ");
			scanf("%f %f",&l,&l);
			area=(l*b);
			printf("area of rectangle = %f",area);
		}
		else{
			printf("enter correct shape");
		}
	
	}
	else if(result=='v')
	{
		if(shape=='t')
		{
			printf("enter l & b of triangle : ");
			scanf("%f %f %f",&l,&b,&h);
			volume=0.5*(l*b*h);
			printf("volume of triangle = %f",volume);
		}
		else if(shape=='s')
		{
			printf("enter l of square : ");
			scanf("%f",&l);
			volume=(l*l*l);
			printf("volume of square = %f",volume);
		}
		else if(shape=='r')
		{
			printf("enter l & b of rectangle : ");
			scanf("%f%f%f",&l,&b,&h);
			volume=(l*b*h);
			printf("volume of rectangle = %f",volume);
		}
		else{
			printf("enter correct shape");
		}
	}
	
}*/

//14
//grade & percentage

//#include<stdio.h>
//int main()
//{
//	int h,e,m,s,c;
//	float percent;
//	printf("enter marks : ");
//	scanf("%d\n%d\n%d\n%d\n%d",&h,&e,&m,&s,&c);
//	percent=(((h+e+m+s+c)*100)/500);
//	
//	if(percent<25){
//		printf("percent and grade = %f"" - F ",percent);
//	}
//	else if(percent>=25 && percent<=45){
//		printf("percent and grade = %f""- E",percent);
//	}
//	else if(percent>=45 && percent<50){
//		printf("percent and grade = %f""- D",percent);
//	}
//	else if(percent>=50 && percent<60){
//		printf("percent and grade = %f""- C",percent);
//	}
//	else if(percent>=60 && percent<80){
//		printf("percent and grade = %f""- B",percent);
//	}
//	else{
//		printf("percent and grade = %f""- A",percent);
//	}
//	return 0;
//}

//15
/*#include<stdio.h>
int main(){
	int holi,fix_salary;
	float salary,total;
	printf("enter holidays and fix_salary : ");
	scanf("%d%d",&holi,&fix_salary);
	if(holi<2){
		printf("salary = %d",fix_salary);
	}
	else if(holi>=2&&holi<=5){
		salary=fix_salary*0.05;
		total=fix_salary-salary;
		printf("salary =%f",total);
	}
	else if(holi>5&&holi<=14){
		salary=fix_salary*0.1;
		total=fix_salary-salary;
		printf("salary =%f",total);
	}
	else if(holi=15){
		salary=fix_salary*0.5;
		total=fix_salary-salary;
		printf("salary =%f",total);
	}
	else{
		print("no salary");
	}
	return 0;
}
*/

//16
//electricity bill
/*#include<stdio.h>
int main(){
	int unit;
	float bill;
	printf("enter unit : ");
	scanf("%d",&unit);
	
	if(unit>=1 && unit<=10){
		bill=(unit*10)*0.1;
		printf("bill = %f",bill);
	}
	else if(unit>10 && unit<=20){
		bill=(unit*10)*0.15;
		printf("bill = %f",bill);
	}
	else if(unit>20 && unit<=41){
		bill=(unit*10)*0.3;
		printf("bill = %f",bill);
	}
	else{
		bill=(unit*10)*0.5;
		printf("bill = %f",bill);
	}
	return 0;
}*/

//17
//retailer discount
//#include<stdio.h>
//int main(){
//	char retailer,customer;
//	int peices,choose,contact;
//	float discount,price,amount,payment;
//	printf("for retailer press 1 :\n");
//	printf("for customer press 2 : \n");
//	scanf("%d",&choose);
//	if(choose==1){
//		printf("enter retailer name : \n");
//		scanf(" %c",&retailer);
//		printf("enter quantity of purchase : ");
//		scanf("%d",&peices);
//		if(peices>=1 && peices<=15){
//			printf("enter price per peice :");
//			scanf("%f",&price);
//			amount=price*peices;
//			discount=amount*0.15;
//			printf("retailer name : %c\n",retailer);
//			printf("peices : %d\n",peices);
//			printf("discount : %f",discount);
//		}
//			else if(peices>15 && peices<=30){
//			printf("enter price per peice :");
//			scanf("%f",&price);
//			amount=price*peices;
//			discount=amount*0.3;
//			printf("retailer name : %c\n",retailer);
//			printf("peices : %d\n",peices);
//			printf("discount : %f",discount);
//		}
//			else if(peices>30 && peices<=50){
//			printf("enter price per peice :");
//			scanf("%f",&price);
//			amount=price*peices;
//			discount=amount*0.5;
//			printf("retailer name : %c\n",retailer);
//			printf("peices : %d\n",peices);
//			printf("discount : %f",discount);
//		}}
//	else if(choose==2){
//		printf("enter customer name : \n");
//		scanf(" %c",&customer);
//		printf("enter amount of purchase : ");
//		scanf(" %f",&amount);
//		printf("enter customer contact :\n");
//		scanf(" %d",&contact);
//
//		if(amount>=1000 && amount<=2000){
//
//			discount=amount*(0.1);
//			payment=amount-discount;
//			
//			printf("payment :%f\n",amount);
//			printf("discount = %f",discount);
//			printf("Total payment :%f\n",payment);
//			
//		}
//		else if(amount>=100 && amount<1000){
//
//			discount=amount*(0.05);
//			payment=amount-discount;
//			
//			printf("payment :%f\n",amount);
//			printf("discount = %f",discount);
//			printf("Total payment :%f\n",payment);
//			
//		}
//		else if(amount>2000 && amount<=3000){
//
//			discount=amount*(0.15);
//			payment=amount-discount;
//			
//			printf("payment :%f\n",amount);
//			printf("discount = %f",discount);
//			printf("Total payment :%f\n",payment);
//			
//		}
//			else if(amount>3000){
//				
//			discount=amount*(0.1);
//			payment=amount-discount;
//			
//			printf("payment :%f\n",amount);
//			printf("discount = %f\n",discount);
//			printf("Total payment :%f\n",payment);
//			
//		}
//	}
//	return 0;
//
//}

//18
//height centimeter to meter
//#include<stdio.h>
//int main(){
//	float heightM,heightC;
//	printf("enter heigth in centimeters : ");
//	scanf("%f",&heightC);
//	heightM=heightC/100;
//	if(heightM>0 && heightM<=1.38){
//		printf("height is low");
//	}
//	else if(heightM>1.38 && heightM<=1.67){
//		printf("height is medium");
//	}
//	else{
//		printf("height is high");
//	}
//	return 0;
//	
//}

//19
//#include<stdio.h>
//int main(){
//	int roll_no,physics,chemistry,maths,total,percent;
//	
//	printf("enter roll no. : ");
//	scanf("%d",&roll_no);
//	printf("enter physics marks : ");
//	scanf("%d",&physics);
//	printf("enter chemistry marks : ");
//	scanf("%d",&chemistry);
//	printf("enter Maths marks : ");
//	scanf("%d",&maths);
//	total=physics+chemistry+maths;
//	
//	if(roll_no>=1 && roll_no<=10){
//		
//		percent=(total*100)/300;
//		printf("total = %d\n",total);
//		printf("percent = %d\n""%",percent);
//			
//			if(percent>=33 && percent<43){
//				printf("Division : 3rd");
//			}
//			else if(percent>43 && percent<=53){
//				printf("Division : 2nd");
//			}
//			else if(percent>53 && percent<=60){
//				printf("Division : 1st");
//			}
//			else if(percent<33){
//				printf("fail");
//			}
//	}
//
//	return 0;
//}

