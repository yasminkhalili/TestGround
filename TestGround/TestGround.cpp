// TestGround.cpp : Defines the entry point for the console application.
//

#include "Func.h"

using namespace std;

#define PLATFORM ANDROID
//Test

int main()
{
#if PLATFORM == ANDROID
	cout << "Hello From Android!\n";
#elif PLATFORM == iOS
	cout << "Hello From iOS!\n";
#else
	cout << "Hello From Other!\n";
#endif
	system("pause");
	return 0;
}

