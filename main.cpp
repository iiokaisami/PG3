#include <stdio.h>
#include <thread>

void Thread1()
{
	printf("Thread1\n");
}

void Thread2()
{
	printf("Thread2\n");
}

void Thread3()
{
	printf("Thread3\n");
}

int main(){

	std::thread t1(Thread1);
	t1.join();

	std::thread t2(Thread2);
	t2.join();

	std::thread t3(Thread3);
	t3.join();

	return 0;
}