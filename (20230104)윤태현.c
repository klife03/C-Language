#include <stdio.h>

static long balance = 30000;
int amount;

void start()
{
	int ID = 8446;
	int PW = 980713;
	int IDx;// 입력받는 ID
	int PWx;
	
	for(int i = 0; i < 3; i++)
	{
		printf("ID: ");
		scanf("%d", &IDx);
		printf("PW: ");
		scanf("%d", &PWx);
		
		if(ID==IDx&&PW==PWx)
		{
			printf("로그인 되었습니다.");
				break;
		}
		else
			continue;
	}
}

void add()
{	
	printf("금액을 입력하시오. :");
	scanf("%d", &amount);
	printf("%d \t\t", amount);
	
	balance = balance + amount;
	printf("%ld \n", balance);
}

void out()
{	
	if( amount <= balance )
	{
		printf("금액을 입력하시오. :");
		scanf("%d", &amount);
		
		balance = balance - amount;
		printf("출금금액: %d \t 현재 잔액: %ld", amount, balance);
	}
	else
		printf("잔고가 부족합니다.");
	
	balance += amount;
	printf("%ld \n", balance);
}

void last()
{
	printf("현재잔액 : %ld", balance);
}

int main(void)
{
	int choose;
	printf("어서오십쇼. H은행입니다. \n");
	start();
	printf("원하시는 금융 서비스를 선택하시오.\n1. 입금\n2. 출금\n3.잔액조회");
	scanf("%d", &choose);
	
	switch(choose)
	{
		case 1:
			add();
			break;
		case 2:
			out();
			break;
		case 3:
			last();
			break;
	}
	
	return 0;
}