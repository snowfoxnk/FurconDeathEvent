module scenes;
import <iostream>;
import <string>;
import <vector>;
import <cstdlib>;
import <conio.h>;
import <random>;
import <limits>;
import "globals.h";
import universal;
import guest_rooms;
using namespace std;
void hotel_lobby()
{
	time_output();
	cout << "�������˾Ƶ���á�";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_hotel_lobby
	{
		"1.ǰ̨",
		"2.���ݼ�",
		"3.�̳�"
	};
	asking_questions(options_hotel_lobby);
	switch (choice_input)
	{
	case 1:
		choice = 2;
		break;
	case 2:
		choice = 11;
		break;
	case 3:
		choice = 15;
		break;
	}
}
void reception_desk()
{
	time_output();
	cout << "��������ǰ̨��";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_reception_desk
	{
		"1.�Ƶ����"
	};
	asking_questions(options_reception_desk);
	switch (choice_input)
	{
	case 1:
		choice = 1;
		break;
	}
}
void main_renue()
{
	time_output();
	cout << "�����������᳡��";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_main_renue
	{
		"1.������̨",
		"2.�и�����",
		"3.Ů������",
		"4.��������",
		"5.Ů������",
		"6.��Ϣ��",
		"7.������Ϣ��",
		"8.���ݼ�"

	};
	asking_questions(options_main_renue);
	switch (choice_input)
	{
	case 1:
		choice = 4;
		break;
	case 2:
		choice = 5;
		break;
	case 3:
		choice = 6;
		break;
	case 4:
		choice = 7;
		break;
	case 5:
		choice = 8;
		break;
	case 6:
		choice = 9;
		break;
	case 7:
		choice = 10;
		break;
	case 8:
		choice = 11;
		break;
	}
}
void outdoor_terrace()
{
	time_output();
	cout << "��������������̨��";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_outdoor_terrace
	{
		"1.���᳡"
	};
	asking_questions(options_outdoor_terrace);
	switch (choice_input)
	{
	case 1:
		choice = 3;
		break;
	}
}
void man_s_changing_room()
{
	time_output();
	cout << "���������и����ҡ�";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_man_s_changing_room
	{
		"1.���᳡"
	};
	asking_questions(options_man_s_changing_room);
	switch (choice_input)
	{
	case 1:
		choice = 3;
		break;
	}
}
void women_s_changing_room()
{
	time_output();
	cout << "��������Ů�����ҡ�";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_women_s_changing_room
	{
		"1.���᳡"
	};
	asking_questions(options_women_s_changing_room);
	switch (choice_input)
	{
	case 1:
		choice = 3;
		break;
	}
}
void man_s_toilet()
{
	time_output();
	cout << "���������������䡣";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_man_s_toilet
	{
		"1.���᳡"
	};
	asking_questions(options_man_s_toilet);
	switch (choice_input)
	{
	case 1:
		choice = 3;
		break;
	}
}
void women_s_toilet()
{
	time_output();
	cout << "��������Ů�����䡣";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_women_s_toilet
	{
		"1.���᳡"
	};
	asking_questions(options_women_s_toilet);
	switch (choice_input)
	{
	case 1:
		choice = 3;
		break;
	}
}
void lounge()
{
	time_output();
	cout << "����������Ϣ�ҡ�";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_lounge
	{
		"1.���᳡"
	};
	asking_questions(options_lounge);
	switch (choice_input)
	{
	case 1:
		choice = 3;
		break;
	}
}
void supporter_lounge()
{
	time_output();
	cout << "��������������Ϣ�ҡ�";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_supporter_lounge
	{
		"1.���᳡"
	};
	asking_questions(options_supporter_lounge);
	switch (choice_input)
	{
	case 1:
		choice = 3;
		break;
	}
}
void elevator_room()
{
	time_output();
	cout << "�������˵��ݼ䡣";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_elevator_room
	{
		"1.�Ƶ����",
		"2.���᳡",
		"3.����",
		"4.����",
		"5.�ͷ�"
	};
	asking_questions(options_elevator_room);
	switch (choice_input)
	{
	case 1:
		choice = 1;
		break;
	case 2:
		choice = 3;
		break;
	case 3:
		choice = 12;
		break;
	case 4:
		choice = 13;
		break;
	case 5:
		choice = 14;
		break;
	}
}
void restaurant()
{
	time_output();
	cout << "�������˲�����";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_restaurant
	{
		"1.���ݼ�"
	};
	asking_questions(options_restaurant);
	switch (choice_input)
	{
	case 1:
		choice = 11;
		break;
	}
}
void gym()
{
	time_output();
	cout << "�������˽�����";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_gym
	{
		"1.���ݼ�"
	};
	asking_questions(options_gym);
	switch (choice_input)
	{
	case 1:
		choice = 11;
		break;
	}
}
void guest_rooms()
{
	time_output();
	check();
	vector<string>options_guest_rooms
	{
		"1.7��",
		"2.8��",
		"3.9��",
		"4.10��",
		"5.11��",
		"6.12��",
		"7.13��",
		"8.14��"
	};
	asking_questions(options_guest_rooms);
	switch (choice_input)
	{
	case 1:
		floor_7();
		break;
	case 2:
		floor_8();
		break;
	case 3:
		floor_9();
		break;
	case 4:
		floor_10();
		break;;
	case 5:
		floor_11();
		break;
	case 6:
		floor_12();
		break;
	case 7:
		floor_13();
		break;
	case 8:
		floor_14();
		break;
	}
}
void mall()
{
	time_output();
	cout << "���������̳���";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_mall
	{
		"1.�Ƶ����"
	};
	asking_questions(options_mall);
	switch (choice_input)
	{
	case 1:
		choice = 1;
		break;
	}
}