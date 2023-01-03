#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int AW = 0;
	int BW = 0;
	int CW = 0;
	int AM = 1000;
	int AB = 0;
	int AD;
    int BM = 1000;
	int BB = 0;
	int BD;
	int CM = 1000;
	int CB = 0;
	int CD;
	
	printf("게임시작합니다. \n");
	
	for(int i=0; i<10; i++)
	{
		int dice = 1+rand()%6;
		
		
		printf("A-주사위 눈을 선택하시오: ");
		scanf("%d", &AD);
		printf("B-주사위 눈을 선택하시오: ");
		scanf("%d", &BD);
		printf("C-주사위 눈을 선택하시오: ");
		scanf("%d", &CD);
		printf("A-배팅금액을 입력하시오: ");
		scanf("%d", &AB);
		printf("B-배팅금액을 입력하시오: ");
		scanf("%d", &BB);
		printf("C-배팅금액을 입력하시오: ");
		scanf("%d", &CB);
	
		if(AD == dice)
		{
			AM+=AB*2;
			AW++;
			printf("A - 이김. %d \n", AM);
		}
		else
		{
			AM-=AB;
			printf("A - 짐. %d \n", AM);
		}
		
		if(BD == dice)
		{
			BM+=BB*2;
			BW++;
			printf("B - 이김. %d \n", BM);
		}
		else
		{
			BM-=BB;
			printf("B - 짐. %d \n", BM);
		}
		
		if(CD == dice)
		{
			CM+=CB*2;
			CW++;
			printf("C - 이김. %d \n", CM);
		}
		else
		{
			CM-=CB;
			printf("C - 짐. %d \n", CM);
		}
		printf("주사위의 눈: %d \n", dice);
	}
	printf("최종결과 \n");
	printf("A: %d, %d \n", AM, AW);
	printf("B: %d, %d \n", BM, BW);
	printf("C: %d, %d \n", CM, CW);
	
	return 0;
}

