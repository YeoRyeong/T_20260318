#pragma once

#include <iostream>

//어딘가에 있다.
class UState;
class UTransition;

class UFSM
{
public:
	UFSM();
	~UFSM();

	UState* States;
	UTransition* Transitions;

	void Process(int CurrenState, std::string CurrentCondition);
	std::string GetStateName(int InId);
};

