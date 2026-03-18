#include <iostream>

using namespace std;

class FSM
{
	FSM();
	~FSM();

	UWorld* World;
	UActor* Actor;
	UMove* Move;

	void GameOver();
};

class UWorld
{
	UWorld();
	~UWorld();

	unsigned int Wall;
	int Plane;
	int SavePoint;

	bool isIt;
};

class UActor
{
	UActor();
	~UActor();

	int Player;
	int Monster;
};

class UMove
{
	UMove();
	~UMove();

	int Fword;
	int Right;

	bool isMove;
};

int main()
{

	return 0;
}

void FSM::GameOver()
{
	
	if (SavePont == Player)
	{
		cout << "GameOver";
	}
}
