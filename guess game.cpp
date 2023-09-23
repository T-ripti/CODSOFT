#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int guess, tries = 0;
	srand(time(0));
	int random = rand() % 1000 + 1;
	cout << "GUESS MY NUMBER GAME\n\n";

	do
	{
		cout << "Enter a guess between 1 and 1000 : ";
		cin >> guess;
		tries++;

		if (guess > random)
			cout << "Too high!\n\n";
		else if (guess < random)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	} while (guess != random);

	return 0;
}
