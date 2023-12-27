#include "GlobalDefine.h"


int main()
{

	// 컴퓨터가 난수를 뽑아내는 기능
	// 해당 난수는 프로그래머가 확인할 수 없다.




	/*
		uniform은 랜덤 디바이스의 난수를 기반으로
		랜덤한 값을 뽑아내기 위한 범위를 설정해주는 틀이다.

		uniform_int_distribution은 정수형 데이터의 랜덤 범위를 지정 가능하고,
		<>를 통해 자료형을 지정할 수 있다.

		uniform_real_distribution은 실수형 데이터의 랜덤 범위를 지정할 수 있고
		<>를 통해 자료형을 정할 수 있는데,
		실수형의 경유 범위가 특정 수가 아닌 자릿수의 기반하기 때문에 랜덤의 범위가
		일반적인 프로그래머가 제어할 수 있는 영역보다 훨씬 크기 때문에 가능하면 
		쓰지 않는 것이 좋다.

		0.5%를 만들고 싶다면, 1 ~ 1000 까지를 만들어서 그 중에 1~5까지를 계산하자

		유니폼을 사용하면 해당 범위의 숫자가 포함된 랜덤값의 범위를 지정하는 것이 가능하다.
		Ex) intRand(15, 20)이라면 15부터 20까지의 숫자가 나온다는 것이다.

		// uniform이랑 randDevice는 사용자정의 클래스의 멤버변수로 선언 불가..는 아니지만 비추천



	*/

	random_device randDevice;
	uniform_int_distribution<int> intRand(15, 20);
	uniform_real_distribution<float> floatRand(0.5f, 0.8f);

	int aValue = 0;
	float bValue = 0.0f;

	aValue = intRand(randDevice);
	bValue = floatRand(randDevice);

	printf("%d, %f \n", aValue, bValue);

	for (int i = 0; i < 10; i++)
	{
		// 랜덤값은 유니폼과 디바이스를 새로 넣어줄 때마다 다른 랜덤값이 나온다.
		aValue = intRand(randDevice);
		bValue = floatRand(randDevice);
		
		printf("%d, %f \n", aValue, bValue);

	}

	/*
	과제!

	전투 시스템 만들기!
	
	%클래스를 알고 있는 사람은 클래스 이용해서 만들기%

	조건1. 플레이어와 몬스터가 존재한다.
	조건1.1 플레이어와 몬스터 모두 공격력, 체력, 방어력, 치명타확률, 치명타 배율, 회피율을 가지고 있다.
	조건1.2 플레이어와 몬스터의 스탯은 프로그래머가 콘솔창에서 입력받아 사용한다.

	조건2. 플레이어와 몬스터의 스탯 입력이 끝나면 플레이어와 몬스터는 
	둘중 하나가 죽을 때까지 자동으로 전투를 실행한다.

	조건2.1 이때 전투중 치명타, 회피, 공격, 피격, 사망 등의 상태 변화를 출력한다.

	조건3. 둘중 하나가 죽었을 때 승자와 전투중 발생한 치명타, 회피 개수를 계산해 출력한다.




	*/


}