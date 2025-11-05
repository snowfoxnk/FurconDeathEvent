export module universal;
import std;
import globals;
using namespace std;
export
{
	void save_state();
	void load_state();
	void get_enter();
	void time_output();
	void check();
	void asking_questions(vector<string>options);
}