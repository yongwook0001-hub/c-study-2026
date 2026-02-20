#include <stdio.h>

int main() 
{
    int a = 10;
    int *p = &a;

    printf("a: %d\n", a);
    printf("address of a: %p\n", p);
    printf("value by pointer: %d\n", *p);

    return 0;
}

#include<stdio.h>
#include<time.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main_function_project()
{
	//문이 5개가 있고, 각 문마다 어려운 수식 퀴즈가 출제
	// 맞히면 통과, 틀리면 실패

	srand(time(NULL));//랜덤함수 선언
	int count = 0; //맞힌 문제개수
	for (int i = 1; i <=  5; i++)//5번 반복
	{
		// x * y = ?
		int num1 = getRandomNumber(i); //첫번째 랜덤 수
		int num2 = getRandomNumber(i); //두번째 랜덤 수
		showQuestion(i, num1, num2);  // 문제를 보여주는 함수

		int answer = -1;
		scanf_s("%d", &answer);
		
		if (answer == -1)
		{
			printf("프로그램을 종료합니다.\n"); //break사용하면 for문을 나감, exit는 그 자리에서 프로그램을 종료
			exit(0);
		}

		else if (answer == num1 * num2)
		{
			success();
			count++;
		}
		else
			//실패
			fail();

	}

	printf("\n\n 당신은 5개의 비밀번호 중 %d 개를 맞췄습니다.", count);

	return 0;
}

int getRandomNumber(int level) // 난이도가 점점 올라가도록 랜덤 함수 사용
{
	return rand() % (level * 7) + 1;//0이 안나오게 하기 위해 1을 더함
}

void showQuestion(int level, int num1, int num2)
{
	printf("######## %d번째 비밀번호 ########\n", level);
	printf("\t%d x %d 의 값은 ? \n", num1, num2);
	printf("####################\n");
	printf("\n비밀번호를 입력하세요 (종료 : -1)");

}

void success()
{
	printf("Good ! 정답입니다.\n\n\n");
}
void fail()
{
	printf("실패입니다.\n\n\n");
}
