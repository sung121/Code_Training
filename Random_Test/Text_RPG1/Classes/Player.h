#pragma once

class Player : public  Entity
{
public:
	Player();
	~Player();

public:

	void SetExp();

private:

	double d_exp;
	std::string s_name;


};