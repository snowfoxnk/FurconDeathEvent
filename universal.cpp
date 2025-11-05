module universal;
import std;
import "conio.h";
import globals;
using namespace std;
const string save_file_path{ R"(C:\Users\Public\Documents\FurconDeathEvent_Saves.txt)" };
void save_state()
{
	ofstream save_file(save_file_path);
	save_file << choice << endl;
	save_file << choice_input << endl;
	save_file << can_commit_crimes << endl;
	save_file << exposure_value << endl;
	save_file << hatred_value << endl;
	save_file << exploration_value << endl;
	save_file << furcon_time << endl;
	save_file << time_passed << endl;
	save_file << is_new_game << endl;
	save_file << new_entry << endl;
	save_file << start_last_function << endl;
	save_file << static_cast<int>(location.floor) << endl;
	save_file << static_cast<int>(location.hallway) << endl;
	save_file << static_cast<int>(location.room) << endl;
	save_file << location.in_floors << endl;
	save_file << location.in_hallways << endl;
	save_file << location.in_rooms << endl;
	save_file.close();
}
void load_state()
{
	ifstream save_file(save_file_path);
	save_file >> choice;
	save_file >> choice_input;
	save_file >> can_commit_crimes;
	save_file >> exposure_value;
	save_file >> hatred_value;
	save_file >> exploration_value;
	save_file >> furcon_time;
	save_file >> time_passed;
	save_file >> is_new_game;
	save_file >> new_entry;
	save_file >> start_last_function;
	int temporary_int{ 0 };
	save_file >> temporary_int;
	location.floor = static_cast<Floor>(temporary_int);
	save_file >> temporary_int;
	location.hallway = static_cast<Hallway>(temporary_int);
	save_file >> temporary_int;
	location.room = static_cast<Room>(temporary_int);
	save_file >> location.in_floors;
	save_file >> location.in_hallways;
	save_file >> location.in_rooms;
	save_file.close();
}
void get_enter()
{
	while (true)
	{
		int keyboard_input{ getchar() };
		if (keyboard_input == '\n')
		{
			return;
		}
	}
}
void time_output()
{
	if(time_passed)
	{
		int day{ furcon_time / 48 };
		int hour{ (furcon_time % 48) / 2 };
		int minute{ 0 };
		int random_value{ 0 };
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<int> dist(-10, 10);
		random_value = dist(gen);
		if (((furcon_time % 48) % 2) == 1)
		{
			minute = 30;
		}
		if (((furcon_time % 48) % 2) == 0)
		{
			if (random_value < 0)
			{
				hour--;
				minute = 60 + random_value;
			}
			else
			{
				minute = 0 + random_value;
			}
		}
		cout << "现在的时间是8月"
			<< day + 4
			<< "日"
			<< hour
			<< "时"
			<< minute
			<< "分。";
		time_passed = false;
		get_enter();
	}
}
void check()
{
	if ((exposure_value >= 3 && ((hatred_value >= 8 || exploration_value >= 8)) || (hatred_value >= 5 && exploration_value >= 5)) && can_commit_crimes)
	{
		cout << "突然，还没反应过来发生了什么，你失去了意识……";
		get_enter();
		cout << "你死了……";
		get_enter();
		exit(1);
	}
}
void asking_questions(vector<string>options)
{
	cout << "你可以去以下这些地方：";
	get_enter();
	for (int i{ 0 }; i < options.size(); i++)
	{
		cout << options[i]
			<< endl;
	}
	cout << "你的选择是：";
	while (true)
	{
		while (_kbhit())
		{
			_getch();
		}
		int keyboard_input{ _getch() };
		if (keyboard_input == '\n' || keyboard_input == '\r')
		{
			choice_input = -1;
			cout << options[options.size() - 1]
				<< endl;
			return;
		}
		if (keyboard_input - '0' >= 0 && keyboard_input - '0' <= options.size() - 1)
		{
			choice_input = keyboard_input - '0';
			if (choice_input == 0)
			{
				return;
			}
			else
			{
				cout << options[choice_input - 1]
					<< endl;
				return;
			}
		}
		else
		{
			cout << "\n该选项不存在，请重新输入选项：";
		}
	}
}