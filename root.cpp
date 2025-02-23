import <iostream>;
import <string>;
import <vector>;
import <cstdlib>;
import <conio.h>;
import <random>;
import "globals.h";
import scenes;
using namespace std;
int main()
{
	vector<string>scenes
	{
		"1.",
		"2.",
		"3."
	};
	while (true)
	{
		time_output();
		asking_question(scenes);
		cout << choice
			<< endl;
	}
}