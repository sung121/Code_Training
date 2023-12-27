#include "UI.h"




void Loop()
{
	MakeEntity();
	while (1)
	{


	}


}


void* MakeEntity()
{
	while (1)
	{
		printf("몬스터와 플레이어중 무엇을 먼저 초기화 하시겠습니까?\n");
		printf("[1]플레이어 [2]몬스터 [0]나가기\n");

		char playerInput = _getch();

		switch (playerInput)
		{
		case '1':

			//Player* newPlayer = new Player();
			//
			//return newPlayer;

			break;
		case '2':

			break;
		case '3':
			system("cls");
			WrongInput();

			break;

		default:
			system("cls");
			WrongInput();

			break;
		}



	}


}



void PressEnterAndClear()
{
	_getch();
	system("cls");
}


void WrongInput()
{
	printf("잘못된 입력입니다.");
	_getch();
	system("cls");
}