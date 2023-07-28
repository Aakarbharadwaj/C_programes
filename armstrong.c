//return & argument armstrong
#include<stdio.h>
void main(){
	int num,result;
	printf("enter num : ");
	scanf("%d",&num);
	result=armstrong(num);
	if(result==num){
		printf("no is armstrong : %d",result);
	}
	else{
		printf("%d not palindrom ",result);
	}
	
}

void armstrong(int num){
	int temp,sum,rem;
	temp=num;
	
	while(num>0){
		rem=num%10;
		sum+=(rem*rem*rem);
		num/=10;
	}
	
	if(temp==sum){
		return sum;
	}
	else{
		return 0;
	}
}
