#include "../Text_RPG1/framework.h"

int main()
{

	printf("�÷��̾ �����մϴ�.\n");
	
	Entity* player = new Entity();
	printf("���͸� �����մϴ�.\n");
	Entity* monster = new Entity();
	printf("\n");
	printf("\n");

	//player->SetStatusDefault();
	//monster->SetStatusDefault();


	while (1)
	{
		printf("�÷��̾ �����մϴ�.\n");
		_getch();
		player->Attack(monster);
		printf("���� ���� ü�� : %d\n\n", monster->GetHp());
		_getch();


		if (monster->GetHp() <= 0)
		{
			printf("���Ͱ� �й��߽��ϴ�.\n");
			_getch();
			break;

		}
		printf("���Ͱ� �����մϴ�.\n");
		_getch();

		monster->Attack(player);
		printf("�÷��̾� ���� ü�� : %d\n\n", player->GetHp());
		_getch();

		if (player->GetHp() <= 0)
		{
			printf("�÷��̾ �й��߽��ϴ�.\n");
			_getch();
			break;

		}



	}
	system("cls");
	if (player->GetHp() > 0)
	{
		printf("�¸�: �÷��̾�--------------------\n");
		printf("\n");
		printf("�÷��̾� ����\n");
		player->ShowStatus();
		printf("\n");
		printf("���� ����\n");
		monster->ShowStatus();
	}
		
	else
	{
		printf("�¸�: ����--------------------\n");
		printf("\n");
		printf("�÷��̾� ����\n");
		player->ShowStatus();
		printf("\n");
		printf("���� ����\n");
		monster->ShowStatus();
	}

	_getch();



	return 0;

}