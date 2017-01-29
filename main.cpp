#include <stdio.h>
#include <string>
#include <iostream>
#include <thread>
#include <pthread.h>

#include <time.h>

void sleep(unsigned int mseconds)
{
	clock_t goal = mseconds + clock();
	while (goal > clock());
}

int main()
{
	while (1)
	{
		std::cout << "Hello Emi!" << std::endl;
		sleep(1000000);
	}
}
