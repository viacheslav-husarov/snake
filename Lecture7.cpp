// Lecture7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "GameController.h"


int main()
{
	system ("color 0a");
	GameController* s = GameController::getInstance();
	s->start();
    return 0;
}

