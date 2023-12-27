#include "../framework.h"
#include "Entity.h"

Entity::Entity()
{
	printf("������ �Է����ֽʽÿ�\n");
	

	int hp;
	int atkDmg;
	int defence;
	int criticalChance;
	int criticalDmg;
	int dodgeChance;


	printf("ü��: ");
	scanf("%d", &hp);
	SetHp(hp);

	printf("���ݷ�: ");
	scanf("%d", &atkDmg);
	SetAttackDamage(atkDmg);


	printf("����: ");
	scanf("%d", &defence);
	SetDefence(defence);

	printf("ġ��Ÿ Ȯ��: ");
	scanf("%d", &criticalChance);
	SetcriticalChance(criticalChance);

	printf("ġ��Ÿ ����: ");
	scanf("%d", &criticalDmg);
	SetcriticalDmg(criticalDmg);

	printf("ȸ�� Ȯ��: ");
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
		printf("�ƹ� ���ظ� ���� �ʾҽ��ϴ�.\n");
		return;
	}
	if (i_dodgeChance >= tmp)
	{
		printf("ȸ���߽��ϴ�.\n");
		i_countOfDodged++;
		return;
	}
	else
	{
		i_hp -= (atkDmg - i_defense);
		printf("%d��ŭ�� ���ظ� �Ծ����ϴ�.\n", atkDmg - i_defense);
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
		printf("ġ��Ÿ ���ݹ߻�\n");
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

	printf("ü��: %d\n", i_hp);
	printf("���ݷ�: %d\n", i_atkDmg);
	printf("����: %d\n", i_defense);
	printf("ġ��Ÿ Ȯ��: %d\n", i_criticalChance);
	printf("ġ��Ÿ ����: %d\n", i_criticalDmg);
	printf("ġ��Ÿ ����Ƚ��: %d\n", i_countOfAttackForCritical);
	printf("ȸ����: %d\n", i_dodgeChance);
	printf("ȸ�� Ƚ��: %d\n", i_countOfDodged);


}
