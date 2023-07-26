//no return and argument
//#include<stdio.h>
//void add(int a,int b);
//
//int main()
//{
//	add(1,2);
//}
//
//void add(int a,int b)
//{
//	int c=a+b;
//	printf("%d",c);
//}


//#include<stdio.h>
//
//void sub(int a,int b);
//void div(int a,int b);
//
//int main()
//{
//	sub(6,3);
//	div(9,4);
//}
//
//void sub(int x,int y)
//{
//	int sub=x-y;
//	printf("%d\n",sub);
//}
//void div(int x,int y)
//{
//	int div=x/y;
//	printf("%d",div);
//}


//no return no argument
//1. add a+b with user input

//#include<stdio.h>
//
//void add(int a,int b);
//
//void main()
//{
//	add(4,7);
//}
//
//void add(int a,int b)
//{
//	int add=a+b;
//	printf("%d",add);
//}


//2. no return and argument(int a ,float b) 
//#include<stdio.h>
//void add(int a,float b);
//
//void main()
//{
//	add(1,8.5);
//}
//
//void add(int x,float y)
//{
//	float sum=x+y;
//	printf("%f",sum);
//}


//3. no return and no arg add() int /float

//#include<stdio.h>
//
//void add();
//
//int main(){
//	add();
//}
//
//void add()
//{
//	int a=4;
//	float b=5.1;
//	float r=a+b;
//	printf("%f",r);
//}


//4.1 no return and argument multiply int ,float ,
//div int float 

//#include<stdio.h>
//
//void multi(int,float);
//
//int main(){
//	multi(3,6.4);
//}
//
//void multi(int a,float b)
//{
//	float r=a*b;
//	printf("%f",r);	
//}


//4.2 no return and argument divide int, float 

//#include<stdio.h>
//
//void div(int a,float b);
//
//void main(){
//	div(16,5.5);
//}
//
//void div(int a,float b){
//	float x=a/b;
//	printf("Questient =%f",x);
//}


//5.1 no argument and no return multiply int, float

//#include<stdio.h>
//void multi();
//
//void main()
//{
//	multi();
//}
//
//void multi()
//{
//	int a=6;
//	float b=7.1,r=a*b;
//	printf("%f",r);
//	
//}


//5.2 argument and no return divide int, float

#include<stdio.h>

void div(int,float);

void main(){
	div(3,6);
}

void div(int a,float b)
{
	float r=a/b;
	printf("%f",r);
}
