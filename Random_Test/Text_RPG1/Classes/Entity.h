#pragma once



class Entity
{
public:

	Entity();
	~Entity();

public:
	void Hit(int);
	void Attack(Entity*);
	void Dodge();

	void SetHp(int);
	void SetAttackDamage(int);
	void SetDefence(int);
	void SetCountOfDodged(int);
	void SetcriticalChance(int);
	void SetcriticalDmg(int);
	void SetdodgeChance(int);
	void SetStatusDefault();

	int GetHp();
	int GetAttackDamage();
	int GetDefence();
	int GetCountOfDodged();
	int GetcriticalChance();
	int GetcriticalDmg();
	int GetdodgeChance();

	void ShowStatus();
	



private:

	int i_hp;
	int i_atkDmg;
	int i_defense;
	int i_countOfDodged = 0;
	int i_countOfAttackForCritical = 0;
	int i_criticalChance;
	int i_criticalDmg;
	int i_dodgeChance;





};

