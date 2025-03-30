module guest_rooms;
import <iostream>;
import <string>;
import <vector>;
import <cstdlib>;
import <conio.h>;
import <random>;
import <limits>;
import "globals.h";
import universal;
import rooms;
using namespace std;
void floor_7()
{
	bool back_to_elevator_room{ false };
	while (true)
	{
		time_output();
		cout << "你来到了7层。";
		get_enter();
		check();
		vector<string>options_floor_7
		{
			"1.701-708",
			"2.709-716",
			"3.717-724",
			"4.725-732",
			"5.电梯间"
		};
		asking_questions(options_floor_7);
		switch (choice_input)
		{
		case 1:
			guest_rooms_701_708();
			break;
		case 2:
			guest_rooms_709_716();
			break;
		case 3:
			guest_rooms_717_724();
			break;
			guest_rooms_725_732();
		case 4:
			break;
		case 5:
			back_to_elevator_room = true;
			break;		//仍然是choice == 11，所以不用再写。
		}
		if (back_to_elevator_room == true)
		{
			break;
		}
	}
}
void floor_8()
{
	bool back_to_elevator_room{ false };
	while (true)
	{
		time_output();
		cout << "你来到了8层。";
		get_enter();
		check();
		vector<string>options_floor_8
		{
			"1.801-808",
			"2.809-816",
			"3.817-824",
			"4.825-832",
			"5.电梯间"
		};
		asking_questions(options_floor_8);
		switch (choice_input)
		{
		case 1:
			guest_rooms_801_808();
			break;
		case 2:
			guest_rooms_809_816();
			break;
		case 3:
			guest_rooms_817_824();
			break;
			guest_rooms_825_832();
		case 4:
			break;
		case 5:
			back_to_elevator_room = true;
			break;		//仍然是choice == 11，所以不用再写。
		}
		if (back_to_elevator_room == true)
		{
			break;
		}
	}
}
void floor_9()
{
	bool back_to_elevator_room{ false };
	while (true)
	{
		time_output();
		cout << "你来到了9层。";
		get_enter();
		check();
		vector<string>options_floor_9
		{
			"1.901-908",
			"2.909-916",
			"3.917-924",
			"4.925-932",
			"5.电梯间"
		};
		asking_questions(options_floor_9);
		switch (choice_input)
		{
		case 1:
			guest_rooms_901_908();
			break;
		case 2:
			guest_rooms_909_916();
			break;
		case 3:
			guest_rooms_917_924();
			break;
			guest_rooms_925_932();
		case 4:
			break;
		case 5:
			back_to_elevator_room = true;
			break;		//仍然是choice == 11，所以不用再写。
		}
		if (back_to_elevator_room == true)
		{
			break;
		}
	}
}
void floor_10()
{
	bool back_to_elevator_room{ false };
	while (true)
	{
		time_output();
		cout << "你来到了10层。";
		get_enter();
		check();
		vector<string>options_floor_10
		{
			"1.1001-1008",
			"2.1009-1016",
			"3.1017-1024",
			"4.1025-1032",
			"5.电梯间"
		};
		asking_questions(options_floor_10);
		switch (choice_input)
		{
		case 1:
			guest_rooms_1001_1008();
			break;
		case 2:
			guest_rooms_1009_1016();
			break;
		case 3:
			guest_rooms_1017_1024();
			break;
			guest_rooms_1025_1032();
		case 4:
			break;
		case 5:
			back_to_elevator_room = true;
			break;		//仍然是choice == 11，所以不用再写。
		}
		if (back_to_elevator_room == true)
		{
			break;
		}
	}
}
void floor_11()
{
	bool back_to_elevator_room{ false };
	while (true)
	{
		time_output();
		cout << "你来到了11层。";
		get_enter();
		check();
		vector<string>options_floor_11
		{
			"1.1101-1108",
			"2.1109-1116",
			"3.1117-1124",
			"4.1125-1132",
			"5.电梯间"
		};
		asking_questions(options_floor_11);
		switch (choice_input)
		{
		case 1:
			guest_rooms_1101_1108();
			break;
		case 2:
			guest_rooms_1109_1116();
			break;
		case 3:
			guest_rooms_1117_1124();
			break;
			guest_rooms_1125_1132();
		case 4:
			break;
		case 5:
			back_to_elevator_room = true;
			break;		//仍然是choice == 11，所以不用再写。
		}
		if (back_to_elevator_room == true)
		{
			break;
		}
	}
}
void floor_12()
{
	bool back_to_elevator_room{ false };
	while (true)
	{
		time_output();
		cout << "你来到了12层。";
		get_enter();
		check();
		vector<string>options_floor_12
		{
			"1.1201-1208",
			"2.1209-1216",
			"3.1217-1224",
			"4.1225-1232",
			"5.电梯间"
		};
		asking_questions(options_floor_12);
		switch (choice_input)
		{
		case 1:
			guest_rooms_1201_1208();
			break;
		case 2:
			guest_rooms_1209_1216();
			break;
		case 3:
			guest_rooms_1217_1224();
			break;
			guest_rooms_1225_1232();
		case 4:
			break;
		case 5:
			back_to_elevator_room = true;
			break;		//仍然是choice == 11，所以不用再写。
		}
		if (back_to_elevator_room == true)
		{
			break;
		}
	}
}
void floor_13()
{
	bool back_to_elevator_room{ false };
	while (true)
	{
		time_output();
		cout << "你来到了13层。";
		get_enter();
		check();
		vector<string>options_floor_13
		{
			"1.1301-1308",
			"2.1309-1316",
			"3.1317-1324",
			"4.1325-1332",
			"5.电梯间"
		};
		asking_questions(options_floor_13);
		switch (choice_input)
		{
		case 1:
			guest_rooms_1301_1308();
			break;
		case 2:
			guest_rooms_1309_1316();
			break;
		case 3:
			guest_rooms_1317_1324();
			break;
			guest_rooms_1325_1332();
		case 4:
			break;
		case 5:
			back_to_elevator_room = true;
			break;		//仍然是choice == 11，所以不用再写。
		}
		if (back_to_elevator_room == true)
		{
			break;
		}
	}
}
void floor_14()
{
	bool back_to_elevator_room{ false };
	while (true)
	{
		time_output();
		cout << "你来到了14层。";
		get_enter();
		check();
		vector<string>options_floor_14
		{
			"1.1401-1408",
			"2.1409-1416",
			"3.1417-1424",
			"4.1425-1432",
			"5.电梯间"
		};
		asking_questions(options_floor_14);
		switch (choice_input)
		{
		case 1:
			guest_rooms_1401_1408();
			break;
		case 2:
			guest_rooms_1409_1416();
			break;
		case 3:
			guest_rooms_1417_1424();
			break;
			guest_rooms_1425_1432();
		case 4:
			break;
		case 5:
			back_to_elevator_room = true;
			break;		//仍然是choice == 11，所以不用再写。
		}
		if (back_to_elevator_room == true)
		{
			break;
		}
	}
}
