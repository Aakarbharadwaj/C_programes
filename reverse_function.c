//return and argument reverse
#include<stdio.h>
void main(){
	int num1;
	printf("enter num1 : ");
	scanf("%d",&num1);
	int result=reverse(num1);
	printf("reverse num =%d",result);
}

int reverse(int num1){
	int rem,sum;
	while(num1>0){
		rem=num1%10;
		sum=sum*10+rem;
		num1/=10;
	}
	return sum;
}
