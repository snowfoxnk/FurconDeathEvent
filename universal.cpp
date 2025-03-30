module universal;
import <iostream>;
import <string>;
import <vector>;
import <cstdlib>;
import <conio.h>;
import <random>;
import <limits>;
import <Windows.h>;
import "globals.h";
using namespace std;
void disable_echo()
{
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
	DWORD mode;
	GetConsoleMode(hStdin, &mode);
	SetConsoleMode(hStdin, mode & ~ENABLE_ECHO_INPUT);  // ���û���
}

void enable_echo()
{
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
	DWORD mode;
	GetConsoleMode(hStdin, &mode);
	SetConsoleMode(hStdin, mode | ENABLE_ECHO_INPUT);   // ���û���
}

void get_enter()
{
	while (true)
	{
		disable_echo();
		int keyboard_input{ getchar() };
		if (keyboard_input == '\n')
		{
			enable_echo();
			break;
		}
	}
}
void time_output()
{
	if (show_time == true)
	{
		int day{ 0 };
		int hour{ 0 };
		int minute{ 0 };
		day = furcon_time / 48;
		hour = (furcon_time % 48) / 2;
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
				hour = (furcon_time % 48) / 2 - 1;
				minute = 60 + random_value;
			}
			else
			{
				minute = 0 + random_value;
			}
		}
		cout << "���ڵ�ʱ����8��"
			<< day + 4
			<< "��"
			<< hour
			<< "ʱ"
			<< minute
			<< "�֡�";
		get_enter();
		show_time = false;
	}

}
void check()
{
	if ((exposure_value >= 3 && ((hatred_value >= 8 || exploration_value >= 8)) || (hatred_value >= 5 && exploration_value >= 5)) && (can_commit_crime == true) == true)
	{
		cout << "ͻȻ����û��Ӧ����������ʲô����ʧȥ����ʶ����";
		get_enter();
		cout << "�����ˡ���";
		get_enter();
		exit(1);
	}
}
void asking_questions(vector<string>options)
{
	cout << "�����ȥ������Щ�ط���";
	get_enter();
	for (int i{ 0 }; i < options.size(); i++)
	{
		cout << options[i]
			<< endl;
	}
	cout << "���ѡ���ǣ�";
	while (true)
	{
		int keyboard_input{ _getch() };
		if (keyboard_input >= '1' && keyboard_input <= '0' + options.size())
		{
			choice_input = keyboard_input - '0';
			cout << options[choice_input - 1]
				<< endl;
			break;
		}
		else
		{
			cout << "\n��ѡ����ڣ�����������ѡ�";
		}
	}
}