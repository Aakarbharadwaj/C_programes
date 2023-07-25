//1. inverted pyramid 
//#include<stdio.h>
//int main(){
//	int i=1,j,s;
//	while(i<=3){
//		s=2;
//		while(s>=i){
//			printf(" ");
//			s--;
//		}
//		j=1;
//		while(j<=i){
//			printf("*");
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//	return 0;
//}

//2. inverted and reversed pyramid
//#include<stdio.h>
//int main(){
//	int i=1,j,s;
//	while(i<=3){
//
//		s=1;
//		while(s<i){
//			printf(" ");
//			s++;
//		}
//		j=3;
//		while(j>=i){
//			printf("*");
//			j--;
//		}
//		printf("\n");
//		i++;
//	}
//	return 0;
//}

//1. revrse pyramid 
//#include<stdio.h>
//int main(){
//	int i,j,s;
//	for(i=1;i<=3;i++){
//		for(s=2;s>=i;s--){
//			printf(" ");
//		}
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//2. inverted and reversed pyramid
//#include<stdio.h>
//int main(){
//	int i,j,s;
//	for(i=1;i<=3;i++){
//		for(s=1;s<i;s++){
//			printf(" ");
//		}
//		for(j=3;j>=i;j--){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//3. inverted + reversed mirror pyramid
//#include<stdio.h>
//int main(){
//	int i,j,s;
//	for(i=1;i<=3;i++){
//		for(s=2;s>=i;s--){
//			printf(" ");
//		}
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	for(i=1;i<=3;i++){
//		for(s=1;s<i;s++){
//			printf(" ");
//		}
//		for(j=3;j>=i;j--){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//4. pointed reverse pyramid 
//#include<stdio.h>
//int main(){
//	int i,j,s;
//	for(i=1;i<=3;i++){
//		for(s=3;s>i;s--){
//			printf(" ");
//		}
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	for(i=1;i<=2;i++){
//		for(s=0;s<i;s++){
//			printf(" ");
//		}
//		for(j=2;j>=i;j--){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//5. print (1 2 3 4) in 4 row
//#include<stdio.h>
//int main(){
//	int i,j;
//	for(i=1;i<=4;i++){
//		for(j=1;j<=4;j++){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//6. print 1111, 4444, 9999, 16 16 16 16 in rows
//#include<stdio.h>
//int main(){
//	int i,j,count;
//	for(i=1;i<=4;i++){
//		for(j=1;j<=4;j++){
//			count=i*i;
//			printf("%d ",count);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//7. print 1234 5678 9101112 i rows
//#include<stdio.h>
//int main(){
//	int i,j,count;
//	for(i=1;i<=4;i++){
//		for(j=1;j<=4;j++){
//			count+=1;
//			printf("%d ",count);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//8. print 1 4 9 16 4 times in row
//#include<stdio.h>
//int main(){
//	int i,j;
//	for(i=1;i<=4;i++){
//		for(j=1;j<=4;j++){
//			printf("%d ",j*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//9. 1111 4444 9999 16161616 in rows
//#include<stdio.h>
//int main(){
//	int i,j;
//	for(i=1;i<=4;i++){
//		for(j=1;j<=4;j++){
//			printf("%d ",i*i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//10. 54321 5 times in row
//#include<stdio.h>
//int main(){
//	int i,j;
//	for(i=1;i<=5;i++){
//		for(j=5;j>=1;j--){
//			printf("%d ",j);
//		}
//		printf("\n");
//}
//	return 0;
//}

//11. 55555 44444 33333 22222 11111
//#include<stdio.h>
//int main(){
//	int i,j;
//	for(i=5;i>=1;i--){
//		for(j=1;j<=5;j++){
//			printf("%d ",i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//12. print symatrical pyramid
//#include<stdio.h>
//int main(){
//	int i,j,s;
//	for(i=1;i<=4;i++){
//		for(s=4;s>i;s--){
//			printf(" ");
//		}
//		for(j=1;j<=i;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//13. print 3 rows with #(in place of space) and * pyramid
//#include<stdio.h>
//int main(){
//	int i,j,s;
//	for(i=1;i<=3;i++){
//		for(s=3;s>i;s--){
//			printf("# ");
//		}
//		for(j=1;j<=i;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//14. print 3 rows with # and *(in place of space) pyramid
//#include<stdio.h>
//int main(){
//	int i,j,s;
//	for(i=1;i<=3;i++){
//		for(s=1;s<i;s++){
//			printf("# ");
//		}
//		for(j=3;j>=i;j--){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//15. in 5 by 5 block print 12 to 50 
//#include<stdio.h>
//int main(){
//	int i,j,count;
//	for(i=1;i<=5;i++){
//		for(j=1;j<=5;j++){
//			count+=2;
//			printf("%d ",count);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//16. 1 to 5, 2 to 10 , 3 to 15 and so on for 5 by 5 block
//#include<stdio.h>
//int main(){
//	int i,j,count,add;
//	for(i=1;i<=5;i++){
//		add=i;
//		for(j=1;j<=5;j++){
//			printf("%d ",add);
//			add+=i;
//		}
//		printf("\n");
//	}
//	return 0;
//}


//17.1111 0000 1111 0000 4 by 4 pattern
//#include<stdio.h>
//int main(){
//	int i,j,count;
//	for(i=1;i<=4;i++){
//		if(i%2!=0){
//			count=1;
//		}
//		else{
//			count=0;
//		}
//		for(j=1;j<=4;j++){
//			printf("%d",count);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//18. 0000 1111 0000 1111 4 by 4 pattern
//#include<stdio.h>
//int main(){
//	int i,j,count;
//	for(i=1;i<=4;i++){
//		if(i%2==0){
//			count=1;
//		}
//		else{
//			count=0;
//		}
//		for(j=1;j<=4;j++){
//			printf("%d",count);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//19. reverse symmitrical pyramid
//#include<stdio.h>
//int main(){
//	int i,j,s;
//	for(i=1;i<=4;i++){
//		for(s=1;s<i;s++){
//			printf(" ");
//		}
//		for(j=4;j>=i;j--){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//20.  pyramid top+bottom
//#include<stdio.h>
//int main(){
//	int i,j,s;
//	for(i=1;i<=3;i++){
//		for(s=3;s>i;s--){
//			printf(" ");
//		}
//		for(j=1;j<=i;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	for(i=1;i<=2;i++){
//		for(s=0;s<i;s++){
//			printf(" ");
//		}
//		for(j=2;j>=i;j--){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;	
//}
	
//21 mirror pyramid
//#include<stdio.h>
//int main(){
//	int i,j,s;
//	for(i=1;i<=3;i++){
//		for(s=3;s>i;s--){
//			printf(" ");
//		}
//		for(j=1;j<=i;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	for(i=1;i<=3;i++){
//		for(s=1;s<i;s++){
//			printf(" ");
//		}
//		for(j=3;j>=i;j--){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//



