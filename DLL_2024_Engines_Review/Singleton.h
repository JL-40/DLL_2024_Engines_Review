#pragma once
#ifndef _SINGLETON_
#define _SINGLETON_

#include "PluginSettings.h"

class PLUGIN_API Singleton
{
public :
	Singleton();
	Singleton(Singleton& copy) = delete; // Delete copy constructor
	void operator=(const Singleton& other) = delete; // Delete copy operator
	~Singleton();
	Singleton& GetInstance() const;
private:
	static Singleton& Instance;
};
#endif

