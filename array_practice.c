#include<stdio.h>

int main_array()
{
	배열 연속된 공간에 정수형 변수를 만들기
	int subway_1 = 30;
	int subway_2 = 40;
	int subway_3 = 50;
	printf("지하철 1호차에 %d명이 타고 있습니다.", subway_1);
	printf("지하철 2호차에 %d명이 타고 있습니다.", subway_2);
	printf("지하철 3호차에 %d명이 타고 있습니다.", subway_3);

	/*int subway_array[3] = { 30,40,50 };

	for (int i = 0; i < 3; i++)
	{
		printf("지하철 %d호차에 %d명이 타고 있습니다.\n\n", i+1, subway_array[i]);
	}*/

	값 설정 방법
	배열 크기는 항상 상수로 선언

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr[] = { 1,2,3,4,5 }; //arr[5]랑 일치

	char c = 'A';
	printf("%c\n", c);

	//문자열 맨 뒤에는 여유공간이 하나 필요함
	char str[7] = "coding";//
	printf("%s\n", str);

	char str[] = "coding";
	printf("%s\n", str);
	printf("%d\n", sizeof(str));

	//영어는 1글자에 1byte, 한글은 1글자에 2byte
	char kor[] = "나도코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	
	char c_array[10] = { 'c','o','d','i','n','g' };

	for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%c\n", c_array[i]);
	}

	

	return 0;

}
