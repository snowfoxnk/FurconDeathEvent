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
	cout << "你来到了酒店大堂。";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_hotel_lobby
	{
		"1.前台",
		"2.电梯间",
		"3.商场"
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
	cout << "你来到了前台。";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_reception_desk
	{
		"1.酒店大堂"
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
	cout << "你来到了主会场。";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_main_renue
	{
		"1.室外天台",
		"2.男更衣室",
		"3.女更衣室",
		"4.男卫生间",
		"5.女卫生间",
		"6.休息室",
		"7.赞助休息室",
		"8.电梯间"

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
	cout << "你来到了室外天台。";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_outdoor_terrace
	{
		"1.主会场"
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
	cout << "你来到了男更衣室。";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_man_s_changing_room
	{
		"1.主会场"
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
	cout << "你来到了女更衣室。";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_women_s_changing_room
	{
		"1.主会场"
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
	cout << "你来到了男卫生间。";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_man_s_toilet
	{
		"1.主会场"
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
	cout << "你来到了女卫生间。";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_women_s_toilet
	{
		"1.主会场"
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
	cout << "你来到了休息室。";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_lounge
	{
		"1.主会场"
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
	cout << "你来到了赞助休息室。";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_supporter_lounge
	{
		"1.主会场"
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
	cout << "你来到了电梯间。";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_elevator_room
	{
		"1.酒店大堂",
		"2.主会场",
		"3.餐厅",
		"4.健身房",
		"5.客房"
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
	cout << "你来到了餐厅。";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_restaurant
	{
		"1.电梯间"
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
	cout << "你来到了健身房。";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_gym
	{
		"1.电梯间"
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
		"1.7层",
		"2.8层",
		"3.9层",
		"4.10层",
		"5.11层",
		"6.12层",
		"7.13层",
		"8.14层"
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
	cout << "你来到了商场。";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_mall
	{
		"1.酒店大堂"
	};
	asking_questions(options_mall);
	switch (choice_input)
	{
	case 1:
		choice = 1;
		break;
	}
}