// https://www.softwaretestinghelp.com/cpp-sleep/
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif


#include <stdio.h>
#include <thread>
// https://stackoverflow.com/questions/266168/simple-example-of-threading-in-c
// https://www.youtube.com/watch?v=6tIWFEzzx9I
volatile bool done = false;

void parallelFunction() {
	// sleep(1);

	done = true;

	// return NULL;
}

int main() {
	printf("Waiting... \n");

	std::thread parallelFunction();

	while (!done) {
		// sleep(1);
	}

	printf("Ok. Moving on");

	// parallelFunction.join();

	return 0;
}