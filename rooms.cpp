module rooms;
import <iostream>;
import <string>;
import <vector>;
import <cstdlib>;
import <conio.h>;
import <random>;
import <limits>;
import "globals.h";
import universal;
using namespace std;
void own_room()
{
	time_output();
	cout << "你回到了自己的房间。";
	get_enter();
	check();
	switch (furcon_time)
	{

	}
	vector<string>options_own_room
	{
		"1.走廊"
	};
	asking_questions(options_own_room);		//这个不知道要不要留着，其实只有一个选项，但switch(furcon_time)可能会导致出现其他选项，所以先留着看看之后要不要删。
	switch (choice_input)
	{
	case 1:
		break;
	}
}
void guest_rooms_701_708()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：701-708。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.701",
			"2.702",
			"3.703",
			"4.704",
			"5.705",
			"6.706",
			"7.707",
			"8.708",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_709_716()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：709-716。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.709",
			"2.710",
			"3.711",
			"4.712",
			"5.713",
			"6.714",
			"7.715", 
			"8.716",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_717_724()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_725_732()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_801_808()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_809_816()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_817_824()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_825_832()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_901_908()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_909_916()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_917_924()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_925_932()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_1001_1008()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_1009_1016()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_1017_1024()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_1025_1032()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_1101_1108()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_1109_1116()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_1117_1124()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_1125_1132()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_1201_1208()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_1209_1216()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_1217_1224()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_1225_1232()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_1301_1308()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_1309_1316()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_1317_1324()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_1325_1332()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_1401_1408()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_1409_1416()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_1417_1424()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}
void guest_rooms_1425_1432()
{
	while (true)
	{
		time_output();
		cout << "你来到了走廊：。";
		get_enter();
		check();
		vector<string>options_
		{
			"1.",
			"2.",
			"3.",
			"4.",
			"5.",
			"6.",
			"7.",
			"8.",
			"9.其他走廊"
		};
		asking_questions(options_);
		switch (choice_input)
		{
		case 9:
			choice = 11;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
	}
}