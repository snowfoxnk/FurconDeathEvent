module scenes;
import std;
import globals;
import universal;
import guest_rooms;
using namespace std;
void hotel_lobby()
{
	while (true)
	{
		if (new_entry)
		{
			time_output();
			cout << "你来到了酒店大堂。";
			get_enter();
			check();
			new_entry = false;
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_hotel_lobby;
		}
		switch (furcon_time)
		{

		}
		passed_label_hotel_lobby:
		vector<string>options_hotel_lobby
		{
			"1.前台",
			"2.电梯间",
			"3.商场",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_hotel_lobby);
		switch (choice_input)
		{
		case 1:
			choice = 2;
			new_entry = true;
			return;
		case 2:
			choice = 11;
			new_entry = true;
			return;
		case 3:
			choice = 15;
			new_entry = true;
			return;
		case 0:
			new_entry = true;
			save_state();
			exit(0);
		case -1:
			continue;
		}
	}
}	//返回根循环
void reception_desk()
{
	while (true)
	{
		if (new_entry)
		{
			time_output();
			cout << "你来到了前台。";
			get_enter();
			check();
			new_entry = false;
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_reception_desk;
		}
		switch (furcon_time)
		{

		}
		passed_label_reception_desk:
		vector<string>options_reception_desk
		{
			"1.酒店大堂",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_reception_desk);
		switch (choice_input)
		{
		case 1:
			choice = 1;
			new_entry = true;
			return;
		case 0:
			new_entry = true;
			save_state();
			exit(0);
		case -1:
			continue;
		}
	}
}	//返回根循环

void main_venue()
{
	while (true)
	{
		if (new_entry)
		{
			time_output();
			cout << "你来到了主会场。";
			get_enter();
			check();
			new_entry = false;
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_main_venue;
		}
		switch (furcon_time)
		{

		}
		passed_label_main_venue:
		vector<string>options_main_venue
		{
			"1.室外天台",
			"2.男更衣室",
			"3.女更衣室",
			"4.男卫生间",
			"5.女卫生间",
			"6.休息室",
			"7.赞助休息室",
			"8.电梯间",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_main_venue);
		switch (choice_input)
		{
		case 1:
			choice = 4;
			new_entry = true;
			return;
		case 2:
			choice = 5;
			new_entry = true;
			return;
		case 3:
			choice = 6;
			new_entry = true;
			return;
		case 4:
			choice = 7;
			new_entry = true;
			return;
		case 5:
			choice = 8;
			new_entry = true;
			return;
		case 6:
			choice = 9;
			new_entry = true;
			return;
		case 7:
			choice = 10;
			new_entry = true;
			return;
		case 8:
			choice = 11;
			new_entry = true;
			return;
		case 0:
			new_entry = true;
			save_state();
			exit(0);
		case -1:
			continue;
		}
	}
}	//返回根循环

void outdoor_terrace()
{
	while (true)
	{
		if (new_entry)
		{
			time_output();
			cout << "你来到了室外天台。";
			get_enter();
			check();
			new_entry = false;
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_outdoor_terrace;
		}
		switch (furcon_time)
		{

		}
		passed_label_outdoor_terrace:
		vector<string>options_outdoor_terrace
		{
			"1.主会场",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_outdoor_terrace);
		switch (choice_input)
		{
		case 1:
			choice = 3;
			new_entry = true;
			return;
		case 0:
			new_entry = true;
			save_state();
			exit(0);
		case -1:
			continue;
		}
	}
}	//返回根循环

void man_s_changing_room()
{
	while (true)
	{
		if (new_entry)
		{
			time_output();
			cout << "你来到了男更衣室。";
			get_enter();
			check();
			new_entry = false;
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_man_s_changing_room;
		}
		switch (furcon_time)
		{

		}
		passed_label_man_s_changing_room:
		vector<string>options_man_s_changing_room
		{
			"1.主会场",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_man_s_changing_room);
		switch (choice_input)
		{
		case 1:
			choice = 3;
			new_entry = true;
			return;
		case 0:
			new_entry = true;
			save_state();
			exit(0);
		case -1:
			continue;
		}
	}
}	//返回根循环

void women_s_changing_room()
{
	while (true)
	{
		if (new_entry)
		{
			time_output();
			cout << "你来到了女更衣室。";
			get_enter();
			check();
			new_entry = false;
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_women_s_changing_room;
		}
		switch (furcon_time)
		{

		}
		passed_label_women_s_changing_room:
		vector<string>options_women_s_changing_room
		{
			"1.主会场",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_women_s_changing_room);
		switch (choice_input)
		{
		case 1:
			choice = 3;
			new_entry = true;
			return;
		case 0:
			new_entry = true;
			save_state();
			exit(0);
		case -1:
			continue;
		}
	}
}	//返回根循环

void man_s_toilet()
{
	while (true)
	{
		if (new_entry)
		{
			time_output();
			cout << "你来到了男卫生间。";
			get_enter();
			check();
			new_entry = false;
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_man_s_toilet;
		}
		switch (furcon_time)
		{

		}
		passed_label_man_s_toilet:
		vector<string>options_man_s_toilet
		{
			"1.主会场",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_man_s_toilet);
		switch (choice_input)
		{
		case 1:
			choice = 3;
			new_entry = true;
			return;
		case 0:
			new_entry = true;
			save_state();
			exit(0);
		case -1:
			continue;
		}
	}
}	//返回根循环

void women_s_toilet()
{
	while (true)
	{
		if (new_entry)
		{
			time_output();
			cout << "你来到了女卫生间。";
			get_enter();
			check();
			new_entry = false;
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_women_s_toilet;
		}
		switch (furcon_time)
		{

		}
		passed_label_women_s_toilet:
		vector<string>options_women_s_toilet
		{
			"1.主会场",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_women_s_toilet);
		switch (choice_input)
		{
		case 1:
			choice = 3;
			new_entry = true;
			return;
		case 0:
			new_entry = true;
			save_state();
			exit(0);
		case -1:
			continue;
		}
	}
}	//返回根循环

void lounge()
{
	while (true)
	{
		if (new_entry)
		{
			time_output();
			cout << "你来到了休息室。";
			get_enter();
			check();
			new_entry = false;
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_lounge;
		}
		switch (furcon_time)
		{

		}
		passed_label_lounge:
		vector<string>options_lounge
		{
			"1.主会场",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_lounge);
		switch (choice_input)
		{
		case 1:
			choice = 3;
			new_entry = true;
			return;
		case 0:
			new_entry = true;
			save_state();
			exit(0);
		case -1:
			continue;
		}
	}
}	//返回根循环

void supporter_lounge()
{
	while (true)
	{
		if (new_entry)
		{
			time_output();
			cout << "你来到了赞助休息室。";
			get_enter();
			check();
			new_entry = false;
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_supporter_lounge;
		}
		switch (furcon_time)
		{

		}
		passed_label_supporter_lounge:
		vector<string>options_supporter_lounge
		{
			"1.主会场",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_supporter_lounge);
		switch (choice_input)
		{
		case 1:
			choice = 3;
			new_entry = true;
			return;
		case 0:
			new_entry = true;
			save_state();
			exit(0);
		case -1:
			continue;
		}
	}
}	//返回根循环

void elevator_room()
{
	while (true)
	{
		if (new_entry)
		{
			time_output();
			cout << "你来到了电梯间。";
			get_enter();
			check();
			new_entry = false;
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_elevator_room;
		}
		switch (furcon_time)
		{

		}
		passed_label_elevator_room:
		vector<string>options_elevator_room
		{
			"1.酒店大堂",
			"2.主会场",
			"3.餐厅",
			"4.健身房",
			"5.客房",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_elevator_room);
		switch (choice_input)
		{
		case 1:
			choice = 1;
			new_entry = true;
			return;
		case 2:
			choice = 3;
			new_entry = true;
			return;
		case 3:
			choice = 12;
			new_entry = true;
			return;
		case 4:
			choice = 13;
			new_entry = true;
			return;
		case 5:
			choice = 14;
			new_entry = true;
			return;
		case 0:
			new_entry = true;
			save_state();
			exit(0);
		case -1:
			continue;
		}
	}
}	//返回根循环

void restaurant()
{
	while (true)
	{
		if (new_entry)
		{
			time_output();
			cout << "你来到了餐厅。";
			get_enter();
			check();
			new_entry = false;
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_restaurant;
		}
		switch (furcon_time)
		{

		}
		passed_label_restaurant:
		vector<string>options_restaurant
		{
			"1.电梯间",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_restaurant);
		switch (choice_input)
		{
		case 1:
			choice = 11;
			new_entry = true;
			return;
		case 0:
			new_entry = true;
			save_state();
			exit(0);
		case -1:
			continue;
		}
	}
}	//返回根循环

void gym()
{
	while (true)
	{
		if (new_entry)
		{
			time_output();
			cout << "你来到了健身房。";
			get_enter();
			check();
			new_entry = false;
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_gym;
		}
		switch (furcon_time)
		{

		}
		passed_label_gym:
		vector<string>options_gym
		{
			"1.电梯间",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_gym);
		switch (choice_input)
		{
		case 1:
			choice = 11;
			new_entry = true;
			return;
		case 0:
			new_entry = true;
			save_state();
			exit(0);
		case -1:
			continue;
		}
	}
}	//返回根循环

void guest_rooms()
{
	while (true)
	{
		if (new_entry)
		{
			if (location.in_floors)
			{
				int floor{ static_cast<int>(location.floor) };
				switch (floor)
				{
				case 1:
					floor_7();
					return;
				case 2:
					floor_8();
					return;
				case 3:
					floor_9();
					return;
				case 4:
					floor_10();
					return;
				case 5:
					floor_11();
					return;
				case 6:
					floor_12();
					return;
				case 7:
					floor_13();
					return;
				case 8:
					floor_14();
					return;
				}
			}
			time_output();
			cout << "你来到了客房选择界面。";
			get_enter();
			check();
			new_entry = false;
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_guest_rooms;
		}
		switch (furcon_time)
		{

		}
		passed_label_guest_rooms:
		vector<string>options_guest_rooms
		{
			"1.7层",
			"2.8层",
			"3.9层",
			"4.10层",
			"5.11层",
			"6.12层",
			"7.13层",
			"8.14层",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_guest_rooms);
		switch (choice_input)
		{
		case 1:
			floor_7();
			return;
		case 2:
			floor_8();
			return;
		case 3:
			floor_9();
			return;
		case 4:
			floor_10();
			return;;
		case 5:
			floor_11();
			return;
		case 6:
			floor_12();
			return;
		case 7:
			floor_13();
			return;
		case 8:
			floor_14();
			return;
		case 0:
			new_entry = true;
			save_state();
			exit(0);
		case -1:
			continue;
		}
	}
}

void mall()
{
	while (true)
	{
		if (new_entry)
		{
			time_output();
			cout << "你来到了商场。";
			get_enter();
			check();
			new_entry = false;
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_mall;
		}
		switch (furcon_time)
		{

		}
		passed_label_mall:
		vector<string>options_mall
		{
			"1.酒店大堂",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_mall);
		switch (choice_input)
		{
		case 1:
			choice = 1;
			new_entry = true;
			return;
		case 0:
			new_entry = true;
			save_state();
			exit(0);
		case -1:
			continue;
		}
	}
}	//返回根循环