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
		printf("���Ϳ� �÷��̾��� ������ ���� �ʱ�ȭ �Ͻðڽ��ϱ�?\n");
		printf("[1]�÷��̾� [2]���� [0]������\n");

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
	printf("�߸��� �Է��Դϴ�.");
	_getch();
	system("cls");
}