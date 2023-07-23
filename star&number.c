//1 star pattern 1 to 5

//#include<stdio.h>
//int main(){
//	int i,j,temp;
//	printf("enter i : ");
//	scanf("%d",&i);
//	temp=i;
//	for(i;i<=5;i++){
//		for(j=temp;j<=i;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//}

//2 star pattern 5 to 1
//#include<stdio.h>
//int main(){
//	int i,j;
//	
//	for(i=1;i<=5;i++){
//	    
//		for(j=5-i+1;j>=1;j--){
//		
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//3 star mirror
//#include<stdio.h>
//int main(){
//	int i,j;
//	for(i=1;i<=3;i++){
//		for(j=1;j<=i;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	for(i=1;i<=3;i++){
//		for(j=1;j<=4-i;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//} 

//4 star tilted piramid
//#include<stdio.h>
//int main(){
//	int i,j;
//	for(i=1;i<=3;i++){
//		for(j=1;j<=i;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	for(i=1;i<=2;i++){
//		for(j=1;j<=3-i;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//5 star block patter 4 by 4
//#include<stdio.h>
//int main(){
//	int i,j;
//	for(i=1;i<=4;i++){
//		for(j=1;j<=4;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}


//6 print pyramid 1 22 333
//#include<stdio.h>
//int main()
//{
//	int i,j;
//	for(i=1;i<=3;i++){
//		for(j=1;j<=i;j++){
//			printf("%d ",i);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//7 print pyramid 1 12 123
//#include<stdio.h>
//int main(){
//	int i,j;
//	for(i=1;i<=3;i++){
//		for(j=1;j<=i;j++){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//8 print 1 23 456
//#include<stdio.h>
//int main(){
//	int i,j,count;
//	for(i=1;i<=3;i++){
//		for(j=1;j<=i;j++){
//			count+=1;
//			printf("%d",count);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//9 print 1 44 999
//#include<stdio.h>
//int main(){
//	int i,j,count;
//	for(i=1;i<=3;i++){
//		count=i*i;
//		for(j=1;j<=i;j++){
//			printf("%d",count);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//10 print 1 14 149
#include<stdio.h>
int main(){
	int i,j,count;
	for(i=1;i<=3;i++){
		for(j=1;j<=i;j++){
			count=j*j;
			printf("%d",count);
		}
		printf("\n");	
	}
	return 0;
}

