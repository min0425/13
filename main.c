#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//형식 선언 
struct student { 

	int ID; 
	char name[100]; 
	float score; 
};


int main(int argc, char *argv[]) {
	struct student s1 = {123,"nayoung",4.3};
	
	//다른 값 변경
	s1.ID = 123456;
	s1.name [0]= 'c';
	s1.score = 4.2;
	//출력
	printf("ID : %d\n", s1.ID); 
	printf("name : %s\n", s1.name); 
	printf("score : %f\n", s1.score);
	
	
	return 0;
}
