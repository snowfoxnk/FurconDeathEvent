export module universal;
import std;
import <Windows.h>;
import "globals.h";
using namespace std;
export
{
	void disable_echo();
	void enable_echo();
	void get_enter();
	void time_output();
	void check();
	void asking_questions(vector<string>options);
}