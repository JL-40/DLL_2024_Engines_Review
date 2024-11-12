#include "Singleton.h"
#include <iostream>

Singleton::Singleton() { }

Singleton::~Singleton() { }

Singleton& Singleton::GetInstance() const
{
	

	return Instance;
}

