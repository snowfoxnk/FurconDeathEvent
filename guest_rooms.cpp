module guest_rooms;
import std;
import globals;
import universal;
import rooms;
using namespace std;

void floor_7()
{
	while (true)
	{
		location.in_floors = true;
		location.floor = Floor::floor_7;
		if (location.in_hallways)
		{
			int hallway{ static_cast<int>(location.hallway) };
			switch (hallway)
			{
			case 1:
				hallway_701_708();
				continue;
			case 2:
				hallway_709_716();
				continue;
			case 3:
				hallway_717_724();
				continue;
			case 4:
				hallway_725_732();
				continue;
			}
		}
		if (new_entry)
		{
			time_output();
			cout << "你来到了7层。";
			get_enter();
			check();
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_floor_7;
		}
	passed_label_floor_7:
		vector<string>options_floor_7
		{
			"1.701-708",
			"2.709-716",
			"3.717-724",
			"4.725-732",
			"5.电梯间",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_floor_7);
		switch (choice_input)
		{
		case 1:
			location.in_floors = false;
			hallway_701_708();
			continue;
		case 2:
			location.in_floors = false;
			hallway_709_716();
			continue;
		case 3:
			location.in_floors = false;
			hallway_717_724();
			continue;
		case 4:
			location.in_floors = false;
			hallway_725_732();
			continue;
		case 5:
			choice = 11;
			new_entry = true;
			location.in_floors = false;
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

void floor_8()
{
	while (true)
	{
		location.in_floors = true;
		location.floor = Floor::floor_8;
		if (location.in_hallways)
		{
			int hallway{ static_cast<int>(location.hallway) };
			switch (hallway)
			{
			case 5:
				hallway_801_808();
				continue;
			case 6:
				hallway_809_816();
				continue;
			case 7:
				hallway_817_824();
				continue;
			case 8:
				hallway_825_832();
				continue;
			}
		}
		if (new_entry)
		{
			time_output();
			cout << "你来到了8层。";
			get_enter();
			check();
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_floor_8;
		}
	passed_label_floor_8:
		vector<string>options_floor_8
		{
			"1.801-808",
			"2.809-816",
			"3.817-824",
			"4.825-832",
			"5.电梯间",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_floor_8);
		switch (choice_input)
		{
		case 1:
			location.in_floors = false;
			hallway_801_808();
			continue;
		case 2:
			location.in_floors = false;
			hallway_809_816();
			continue;
		case 3:
			location.in_floors = false;
			hallway_817_824();
			continue;
		case 4:
			location.in_floors = false;
			hallway_825_832();
			continue;
		case 5:
			choice = 11;
			new_entry = true;
			location.in_floors = false;
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

void floor_9()
{
	while (true)
	{
		location.in_floors = true;
		location.floor = Floor::floor_9;
		if (location.in_hallways)
		{
			int hallway{ static_cast<int>(location.hallway) };
			switch (hallway)
			{
			case 9:
				hallway_901_908();
				continue;
			case 10:
				hallway_909_916();
				continue;
			case 11:
				hallway_917_924();
				continue;
			case 12:
				hallway_925_932();
				continue;
			}
		}
		if (new_entry)
		{
			time_output();
			cout << "你来到了9层。";
			get_enter();
			check();
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_floor_9;
		}
	passed_label_floor_9:
		vector<string>options_floor_9
		{
			"1.901-908",
			"2.909-916",
			"3.917-924",
			"4.925-932",
			"5.电梯间",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_floor_9);
		switch (choice_input)
		{
		case 1:
			location.in_floors = false;
			hallway_901_908();
			continue;
		case 2:
			location.in_floors = false;
			hallway_909_916();
			continue;
		case 3:
			location.in_floors = false;
			hallway_917_924();
			continue;
		case 4:
			location.in_floors = false;
			hallway_925_932();
			continue;
		case 5:
			choice = 11;
			new_entry = true;
			location.in_floors = false;
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

void floor_10()
{
	while (true)
	{
		location.in_floors = true;
		location.floor = Floor::floor_10;
		if (location.in_hallways)
		{
			int hallway{ static_cast<int>(location.hallway) };
			switch (hallway)
			{
			case 13:
				hallway_1001_1008();
				continue;
			case 14:
				hallway_1009_1016();
				continue;
			case 15:
				hallway_1017_1024();
				continue;
			case 16:
				hallway_1025_1032();
				continue;
			}
		}
		if (new_entry)
		{
			time_output();
			cout << "你来到了10层。";
			get_enter();
			check();
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_floor_10;
		}
	passed_label_floor_10:
		vector<string>options_floor_10
		{
			"1.1001-1008",
			"2.1009-1016",
			"3.1017-1024",
			"4.1025-1032",
			"5.电梯间",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_floor_10);
		switch (choice_input)
		{
		case 1:
			location.in_floors = false;
			hallway_1001_1008();
			continue;
		case 2:
			location.in_floors = false;
			hallway_1009_1016();
			continue;
		case 3:
			location.in_floors = false;
			hallway_1017_1024();
			continue;
		case 4:
			location.in_floors = false;
			hallway_1025_1032();
			continue;
		case 5:
			choice = 11;
			new_entry = true;
			location.in_floors = false;
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

void floor_11()
{
	while (true)
	{
		location.in_floors = true;
		location.floor = Floor::floor_11;
		if (location.in_hallways)
		{
			int hallway{ static_cast<int>(location.hallway) };
			switch (hallway)
			{
			case 17:
				hallway_1101_1108();
				continue;
			case 18:
				hallway_1109_1116();
				continue;
			case 19:
				hallway_1117_1124();
				continue;
			case 20:
				hallway_1125_1132();
				continue;
			}
		}
		if (new_entry)
		{
			time_output();
			cout << "你来到了11层。";
			get_enter();
			check();
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_floor_11;
		}
	passed_label_floor_11:
		vector<string>options_floor_11
		{
			"1.1101-1108",
			"2.1109-1116",
			"3.1117-1124",
			"4.1125-1132",
			"5.电梯间",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_floor_11);
		switch (choice_input)
		{
		case 1:
			location.in_floors = false;
			hallway_1101_1108();
			continue;
		case 2:
			location.in_floors = false;
			hallway_1109_1116();
			continue;
		case 3:
			location.in_floors = false;
			hallway_1117_1124();
			continue;
		case 4:
			location.in_floors = false;
			hallway_1125_1132();
			continue;
		case 5:
			choice = 11;
			new_entry = true;
			location.in_floors = false;
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

void floor_12()
{
	while (true)
	{
		location.in_floors = true;
		location.floor = Floor::floor_12;
		if (location.in_hallways)
		{
			int hallway{ static_cast<int>(location.hallway) };
			switch (hallway)
			{
			case 21:
				hallway_1201_1208();
				continue;
			case 22:
				hallway_1209_1216();
				continue;
			case 23:
				hallway_1217_1224();
				continue;
			case 24:
				hallway_1225_1232();
				continue;
			}
		}
		if (new_entry)
		{
			time_output();
			cout << "你来到了12层。";
			get_enter();
			check();
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_floor_12;
		}
	passed_label_floor_12:
		vector<string>options_floor_12
		{
			"1.1201-1208",
			"2.1209-1216",
			"3.1217-1224",
			"4.1225-1232",
			"5.电梯间",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_floor_12);
		switch (choice_input)
		{
		case 1:
			location.in_floors = false;
			hallway_1201_1208();
			continue;
		case 2:
			location.in_floors = false;
			hallway_1209_1216();
			continue;
		case 3:
			location.in_floors = false;
			hallway_1217_1224();
			continue;
		case 4:
			location.in_floors = false;
			hallway_1225_1232();
			continue;
		case 5:
			choice = 11;
			new_entry = true;
			location.in_floors = false;
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

void floor_13()
{
	while (true)
	{
		location.in_floors = true;
		location.floor = Floor::floor_13;
		if (location.in_hallways)
		{
			int hallway{ static_cast<int>(location.hallway) };
			switch (hallway)
			{
			case 25:
				hallway_1301_1308();
				continue;
			case 26:
				hallway_1309_1316();
				continue;
			case 27:
				hallway_1317_1324();
				continue;
			case 28:
				hallway_1325_1332();
				continue;
			}
		}
		if (new_entry)
		{
			time_output();
			cout << "你来到了13层。";
			get_enter();
			check();
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_floor_13;
		}
	passed_label_floor_13:
		vector<string>options_floor_13
		{
			"1.1301-1308",
			"2.1309-1316",
			"3.1317-1324",
			"4.1325-1332",
			"5.电梯间",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_floor_13);
		switch (choice_input)
		{
		case 1:
			location.in_floors = false;
			hallway_1301_1308();
			continue;
		case 2:
			location.in_floors = false;
			hallway_1309_1316();
			continue;
		case 3:
			location.in_floors = false;
			hallway_1317_1324();
			continue;
		case 4:
			location.in_floors = false;
			hallway_1325_1332();
			continue;
		case 5:
			choice = 11;
			new_entry = true;
			location.in_floors = false;
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

void floor_14()
{
	while (true)
	{
		location.in_floors = true;
		location.floor = Floor::floor_14;
		if (location.in_hallways)
		{
			int hallway{ static_cast<int>(location.hallway) };
			switch (hallway)
			{
			case 29:
				hallway_1401_1408();
				continue;
			case 30:
				hallway_1409_1416();
				continue;
			case 31:
				hallway_1417_1424();
				continue;
			case 32:
				hallway_1425_1432();
				continue;
			}
		}
		if (new_entry)
		{
			time_output();
			cout << "你来到了14层。";
			get_enter();
			check();
		}
		if (start_last_function)
		{
			start_last_function = false;
			goto passed_label_floor_14;
		}
	passed_label_floor_14:
		vector<string>options_floor_14
		{
			"1.1401-1408",
			"2.1409-1416",
			"3.1417-1424",
			"4.1425-1432",
			"5.电梯间",
			"0.保存并退出",
			"Enter.留在此地"
		};
		asking_questions(options_floor_14);
		switch (choice_input)
		{
		case 1:
			location.in_floors = false;
			hallway_1401_1408();
			continue;
		case 2:
			location.in_floors = false;
			hallway_1409_1416();
			continue;
		case 3:
			location.in_floors = false;
			hallway_1417_1424();
			continue;
		case 4:
			location.in_floors = false;
			hallway_1425_1432();
			continue;
		case 5:
			choice = 11;
			new_entry = true;
			location.in_floors = false;
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