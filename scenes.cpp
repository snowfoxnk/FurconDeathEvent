module scenes;
import <iostream>;
import <string>;
import <vector>;
import <cstdlib>;
import <conio.h>;
import <random>;
import "globals.h";
using namespace std;
void time_output()
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
	cout << "现在的时间是8月"
		<< day + 4
		<< "日"
		<< hour
		<< "时"
		<< minute
		<< "分。"
		<< endl;

}
void check()
{
	if ((exposure_value >= 3 && (hatred_value >= 8 || exploration_value >= 8)) && (can_commit_crime == true) == true)
	{
		cout << ""
			<< endl;
		cout << "";
		system("pause");
		exit(1);
	}
}
void asking_question(vector<string>)
{
	cout << "你的选择是：";
	while (true)
	{
		int keyboard_input{ _getch() };
		if (keyboard_input >= '0' && keyboard_input <= '9')
		{
			choice = keyboard_input - '0';
			break;
		}
		else
		{
			cout << "\n该选项不存在，请重新输入选项：";
		}
	}
}