// DLL_2024_Engines_Review.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Singleton.h"

int main()
{
    Singleton GameManager;

    std::cout << "First singleton is " << &GameManager.GetInstance() << std::endl;

    Singleton SecondGameManager;
}
