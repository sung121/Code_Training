#include "../Text_RPG1/framework.h"

int main()
{

	printf("플레이어를 생성합니다.\n");
	
	Entity* player = new Entity();
	printf("몬스터를 생성합니다.\n");
	Entity* monster = new Entity();
	printf("\n");
	printf("\n");

	//player->SetStatusDefault();
	//monster->SetStatusDefault();


	while (1)
	{
		printf("플레이어가 공격합니다.\n");
		_getch();
		player->Attack(monster);
		printf("몬스터 남은 체력 : %d\n\n", monster->GetHp());
		_getch();


		if (monster->GetHp() <= 0)
		{
			printf("몬스터가 패배했습니다.\n");
			_getch();
			break;

		}
		printf("몬스터가 공격합니다.\n");
		_getch();

		monster->Attack(player);
		printf("플레이어 남은 체력 : %d\n\n", player->GetHp());
		_getch();

		if (player->GetHp() <= 0)
		{
			printf("플레이어가 패배했습니다.\n");
			_getch();
			break;

		}



	}
	system("cls");
	if (player->GetHp() > 0)
	{
		printf("승리: 플레이어--------------------\n");
		printf("\n");
		printf("플레이어 스탯\n");
		player->ShowStatus();
		printf("\n");
		printf("몬스터 스탯\n");
		monster->ShowStatus();
	}
		
	else
	{
		printf("승리: 몬스터--------------------\n");
		printf("\n");
		printf("플레이어 스탯\n");
		player->ShowStatus();
		printf("\n");
		printf("몬스터 스탯\n");
		monster->ShowStatus();
	}

	_getch();



	return 0;

}