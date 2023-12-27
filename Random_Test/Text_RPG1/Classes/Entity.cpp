#include "../framework.h"
#include "Entity.h"

Entity::Entity()
{
	printf("스탯을 입력해주십시오\n");
	

	int hp;
	int atkDmg;
	int defence;
	int criticalChance;
	int criticalDmg;
	int dodgeChance;


	printf("체력: ");
	scanf("%d", &hp);
	SetHp(hp);

	printf("공격력: ");
	scanf("%d", &atkDmg);
	SetAttackDamage(atkDmg);


	printf("방어력: ");
	scanf("%d", &defence);
	SetDefence(defence);

	printf("치명타 확률: ");
	scanf("%d", &criticalChance);
	SetcriticalChance(criticalChance);

	printf("치명타 배율: ");
	scanf("%d", &criticalDmg);
	SetcriticalDmg(criticalDmg);

	printf("회피 확률: ");
	scanf("%d", &dodgeChance);
	SetdodgeChance(dodgeChance);




}

Entity::~Entity()
{
	
}

void Entity::Hit(int atkDmg)
{
	std::random_device randDevice;
	std::uniform_int_distribution<int> intRand(1, 100);
	int tmp = intRand(randDevice);

	if (atkDmg - i_defense <= 0)
	{
		printf("아무 피해를 입지 않았습니다.\n");
		return;
	}
	if (i_dodgeChance >= tmp)
	{
		printf("회피했습니다.\n");
		i_countOfDodged++;
		return;
	}
	else
	{
		i_hp -= (atkDmg - i_defense);
		printf("%d만큼의 피해를 입었습니다.\n", atkDmg - i_defense);
		return;
	}


}

void Entity::Attack(Entity* Enemy)
{

	std :: random_device randDevice;
	std :: uniform_int_distribution<int> intRand(1, 100);
	int tmp = intRand(randDevice);


	int atkDmg = 0;

	if (i_criticalChance >= tmp)
	{
		printf("치명타 공격발생\n");
		atkDmg = i_atkDmg * i_criticalDmg;
		i_countOfAttackForCritical++;
	}
	else
		atkDmg = i_atkDmg;
	


	Enemy->Hit(atkDmg);

}

void Entity::Dodge()
{

}

void Entity::SetHp(int hp)
{
	i_hp = hp;
}

void Entity::SetAttackDamage(int dmg)
{
	i_atkDmg = dmg;
}

void Entity::SetDefence(int defence)
{
	i_defense = defence;
}


void Entity::SetCountOfDodged(int countOfDodge)
{
	i_countOfDodged = countOfDodge;
}

void Entity::SetcriticalChance(int criticalChance)
{
	i_criticalChance = criticalChance;
}

void Entity::SetcriticalDmg(int criticalDmg)
{
	i_criticalDmg = criticalDmg;
}

void Entity::SetdodgeChance(int dodgeChance)
{
	i_dodgeChance = dodgeChance;
}

void Entity::SetStatusDefault()
{
	SetHp(100);
	SetAttackDamage(20);
	SetDefence(5);
	SetcriticalChance(10);
	SetcriticalDmg(2);
	SetdodgeChance(10);


}

int Entity::GetHp()
{
	return i_hp;
}

int Entity::GetAttackDamage()
{
	return i_atkDmg;
}

int Entity::GetDefence()
{
	return i_defense;
}

int Entity::GetCountOfDodged()
{
	return i_countOfDodged;
}

int Entity::GetcriticalChance()
{
	return i_criticalChance;
}

int Entity::GetcriticalDmg()
{
	return i_criticalDmg;
}

int Entity::GetdodgeChance()
{
	return i_dodgeChance;
}

void Entity::ShowStatus()
{

	printf("체력: %d\n", i_hp);
	printf("공격력: %d\n", i_atkDmg);
	printf("방어력: %d\n", i_defense);
	printf("치명타 확률: %d\n", i_criticalChance);
	printf("치명타 배율: %d\n", i_criticalDmg);
	printf("치명타 적중횟수: %d\n", i_countOfAttackForCritical);
	printf("회피율: %d\n", i_dodgeChance);
	printf("회피 횟수: %d\n", i_countOfDodged);


}
