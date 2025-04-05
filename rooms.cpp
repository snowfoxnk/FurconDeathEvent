module rooms;
import std;
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
	asking_questions(options_own_room);
	switch (choice_input)		//这个不知道要不要留着，其实只有一个选项，但switch(furcon_time)可能会导致出现其他选项，所以先留着看看之后要不要删。
	{
	case 1:
		break;
	}
}
void guest_rooms_701_708()
{
	bool back_to_floor_7{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：701-708。";
		get_enter();
		check();
		vector<string>options_guest_rooms_701_708
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
		asking_questions(options_guest_rooms_701_708);
		switch (choice_input)
		{
		case 9:
			back_to_floor_7 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			get_enter();
			break;
		}
		if (back_to_floor_7 == true)
		{
			break;
		}
	}
}
void guest_rooms_709_716()
{
	bool back_to_floor_7{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：709-716。";
		get_enter();
		check();
		vector<string>options_guest_rooms_709_716
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
		asking_questions(options_guest_rooms_709_716);
		switch (choice_input)
		{
		case 9:
			back_to_floor_7 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_7 == true)
		{
			break;
		}
	}
}
void guest_rooms_717_724()
{
	bool back_to_floor_7{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：717-724。";
		get_enter();
		check();
		vector<string>options_guest_rooms_717_724
		{
			"1.717",
			"2.718",
			"3.719",
			"4.720",
			"5.721",
			"6.722",
			"7.723",
			"8.724",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_717_724);
		switch (choice_input)
		{
		case 9:
			back_to_floor_7 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_7 == true)
		{
			break;
		}
	}
}
void guest_rooms_725_732()
{
	bool back_to_floor_7{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：725-732。";
		get_enter();
		check();
		vector<string>options_guest_rooms_725_732
		{
			"1.725",
			"2.726",
			"3.727",
			"4.728",
			"5.729",
			"6.730",
			"7.731",
			"8.732",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_725_732);
		switch (choice_input)
		{
		case 9:
			back_to_floor_7 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_7 == true)
		{
			break;
		}
	}
}
void guest_rooms_801_808()
{
	bool back_to_floor_8{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：801-808。";
		get_enter();
		check();
		vector<string>options_guest_rooms_801_808
		{
			"1.801",
			"2.802",
			"3.803",
			"4.804",
			"5.805",
			"6.806",
			"7.807",
			"8.808",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_801_808);
		switch (choice_input)
		{
		case 9:
			back_to_floor_8 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_8 == true)
		{
			break;
		}
	}
}
void guest_rooms_809_816()
{
	bool back_to_floor_8{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：809-816。";
		get_enter();
		check();
		vector<string>options_guest_rooms_809_816
		{
			"1.809",
			"2.810",
			"3.811",
			"4.812",
			"5.813",
			"6.814",
			"7.815",
			"8.816",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_809_816);
		switch (choice_input)
		{
		case 9:
			back_to_floor_8 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_8 == true)
		{
			break;
		}
	}
}
void guest_rooms_817_824()
{
	bool back_to_floor_8{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：817-824。";
		get_enter();
		check();
		vector<string>options_guest_rooms_817_824
		{
			"1.817",
			"2.818",
			"3.819",
			"4.820",
			"5.821",
			"6.822",
			"7.823",
			"8.824",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_817_824);
		switch (choice_input)
		{
		case 9:
			back_to_floor_8 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_8 == true)
		{
			break;
		}
	}
}
void guest_rooms_825_832()
{
	bool back_to_floor_8{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：825-832。";
		get_enter();
		check();
		vector<string>options_guest_rooms_825_832
		{
			"1.825",
			"2.826",
			"3.827",
			"4.828",
			"5.829",
			"6.830",
			"7.831",
			"8.832",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_825_832);
		switch (choice_input)
		{
		case 9:
			back_to_floor_8 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_8 == true)
		{
			break;
		}
	}
}
void guest_rooms_901_908()
{
	bool back_to_floor_9{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：901-908。";
		get_enter();
		check();
		vector<string>options_guest_rooms_901_908
		{
			"1.901",
			"2.902",
			"3.903",
			"4.904",
			"5.905",
			"6.906",
			"7.907",
			"8.908",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_901_908);
		switch (choice_input)
		{
		case 9:
			back_to_floor_9 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_9 == true)
		{
			break;
		}
	}
}
void guest_rooms_909_916()
{
	bool back_to_floor_9{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：909-916。";
		get_enter();
		check();
		vector<string>options_guest_rooms_909_916
		{
			"1.909",
			"2.910",
			"3.911",
			"4.912",
			"5.913",
			"6.914",
			"7.915",
			"8.916",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_909_916);
		switch (choice_input)
		{
		case 9:
			back_to_floor_9 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_9 == true)
		{
			break;
		}
	}
}
void guest_rooms_917_924()
{
	bool back_to_floor_9{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：917-924。";
		get_enter();
		check();
		vector<string>options_guest_rooms_917_924
		{
			"1.917",
			"2.918",
			"3.919",
			"4.920",
			"5.921",
			"6.922",
			"7.923",
			"8.924",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_917_924);
		switch (choice_input)
		{
		case 9:
			back_to_floor_9 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_9 == true)
		{
			break;
		}
	}
}
void guest_rooms_925_932()
{
	bool back_to_floor_9{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：925-932。";
		get_enter();
		check();
		vector<string>options_guest_rooms_925_932
		{
			"1.925",
			"2.926",
			"3.927",
			"4.928",
			"5.929",
			"6.930",
			"7.931",
			"8.932",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_925_932);
		switch (choice_input)
		{
		case 9:
			back_to_floor_9 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_9 == true)
		{
			break;
		}
	}
}
void guest_rooms_1001_1008()
{
	bool back_to_floor_10{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：1001-1008。";
		get_enter();
		check();
		vector<string>options_guest_rooms_1001_1008
		{
			"1.1001",
			"2.1002",
			"3.1003",
			"4.1004",
			"5.1005",
			"6.1006",
			"7.1007",
			"8.1008",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_1001_1008);
		switch (choice_input)
		{
		case 9:
			back_to_floor_10 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_10 == true)
		{
			break;
		}
	}
}
void guest_rooms_1009_1016()
{
	bool back_to_floor_10{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：1009-1016。";
		get_enter();
		check();
		vector<string>options_guest_rooms_1009_1016
		{
			"1.1009",
			"2.1010",
			"3.1011",
			"4.1012",
			"5.1013",
			"6.1014",
			"7.1015",
			"8.1016",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_1009_1016);
		switch (choice_input)
		{
		case 9:
			back_to_floor_10 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_10 == true)
		{
			break;
		}
	}
}
void guest_rooms_1017_1024()
{
	bool back_to_floor_10{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：1017-1024。";
		get_enter();
		check();
		vector<string>options_guest_rooms_1017_1024
		{
			"1.1017",
			"2.1018",
			"3.1019",
			"4.1020",
			"5.1021",
			"6.1022",
			"7.1023",
			"8.1024",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_1017_1024);
		switch (choice_input)
		{
		case 1:
			own_room();
			break;
		case 9:
			back_to_floor_10 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_10 == true)
		{
			break;
		}
	}
}
void guest_rooms_1025_1032()
{
	bool back_to_floor_10{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：1025-1032。";
		get_enter();
		check();
		vector<string>options_guest_rooms_1025_1032
		{
			"1.1025",
			"2.1026",
			"3.1027",
			"4.1028",
			"5.1029",
			"6.1030",
			"7.1031",
			"8.1032",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_1025_1032);
		switch (choice_input)
		{
		case 9:
			back_to_floor_10 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_10 == true)
		{
			break;
		}
	}
}
void guest_rooms_1101_1108()
{
	bool back_to_floor_11{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：1101-1108。";
		get_enter();
		check();
		vector<string>options_guest_rooms_1101_1108
		{
			"1.1101",
			"2.1102",
			"3.1103",
			"4.1104",
			"5.1105",
			"6.1106",
			"7.1107",
			"8.1108",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_1101_1108);
		switch (choice_input)
		{
		case 9:
			back_to_floor_11 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_11 == true)
		{
			break;
		}
	}
}
void guest_rooms_1109_1116()
{
	bool back_to_floor_11{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：1109-1116。";
		get_enter();
		check();
		vector<string>options_guest_rooms_1109_1116
		{
			"1.1109",
			"2.1110",
			"3.1111",
			"4.1112",
			"5.1113",
			"6.1114",
			"7.115",
			"8.1116",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_1109_1116);
		switch (choice_input)
		{
		case 9:
			back_to_floor_11 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_11 == true)
		{
			break;
		}
	}
}
void guest_rooms_1117_1124()
{
	bool back_to_floor_11{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：1117-1124。";
		get_enter();
		check();
		vector<string>options_guest_rooms_1117_1124
		{
			"1.1117",
			"2.1118",
			"3.1119",
			"4.1120",
			"5.1121",
			"6.1122",
			"7.1123",
			"8.1124",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_1117_1124);
		switch (choice_input)
		{
		case 9:
			back_to_floor_11 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_11 == true)
		{
			break;
		}
	}
}
void guest_rooms_1125_1132()
{
	bool back_to_floor_11{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：1125-1132。";
		get_enter();
		check();
		vector<string>options_guest_rooms_1125_1132
		{
			"1.1125",
			"2.1126",
			"3.1127",
			"4.1128",
			"5.1129",
			"6.1130",
			"7.1131",
			"8.1132",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_1125_1132);
		switch (choice_input)
		{
		case 9:
			back_to_floor_11 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_11 == true)
		{
			break;
		}
	}
}
void guest_rooms_1201_1208()
{
	bool back_to_floor_12{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：1201-1208。";
		get_enter();
		check();
		vector<string>options_guest_rooms_1201_1208
		{
			"1.1201",
			"2.1202",
			"3.1203",
			"4.1204",
			"5.1205",
			"6.1206",
			"7.1207",
			"8.1208",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_1201_1208);
		switch (choice_input)
		{
		case 9:
			back_to_floor_12 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_12 == true)
		{
			break;
		}
	}
}
void guest_rooms_1209_1216()
{
	bool back_to_floor_12{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：1209-1216。";
		get_enter();
		check();
		vector<string>options_guest_rooms_1209_1216
		{
			"1.1209",
			"2.1210",
			"3.1211",
			"4.1212",
			"5.1213",
			"6.1214",
			"7.1215",
			"8.1216",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_1209_1216);
		switch (choice_input)
		{
		case 9:
			back_to_floor_12 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_12 == true)
		{
			break;
		}
	}
}
void guest_rooms_1217_1224()
{
	bool back_to_floor_12{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：1217-1224。";
		get_enter();
		check();
		vector<string>options_guest_rooms_1217_1224
		{
			"1.1217",
			"2.1218",
			"3.1219",
			"4.1220",
			"5.1221",
			"6.1222",
			"7.1223",
			"8.1224",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_1217_1224);
		switch (choice_input)
		{
		case 9:
			back_to_floor_12 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_12 == true)
		{
			break;
		}
	}
}
void guest_rooms_1225_1232()
{
	bool back_to_floor_12{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：1225-1232。";
		get_enter();
		check();
		vector<string>options_guest_rooms_1225_1232
		{
			"1.1225",
			"2.1226",
			"3.1227",
			"4.1228",
			"5.1229",
			"6.1230",
			"7.1231",
			"8.1232",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_1225_1232);
		switch (choice_input)
		{
		case 9:
			back_to_floor_12 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_12 == true)
		{
			break;
		}
	}
}
void guest_rooms_1301_1308()
{
	bool back_to_floor_13{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：1301-1308。";
		get_enter();
		check();
		vector<string>options_guest_rooms_1301_1308
		{
			"1.1301",
			"2.1302",
			"3.1303",
			"4.1304",
			"5.1305",
			"6.1306",
			"7.1307",
			"8.1308",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_1301_1308);
		switch (choice_input)
		{
		case 9:
			back_to_floor_13 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_13 == true)
		{
			break;
		}
	}
}
void guest_rooms_1309_1316()
{
	bool back_to_floor_13{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：1309-1316。";
		get_enter();
		check();
		vector<string>options_guest_rooms_1309_1316
		{
			"1.1309",
			"2.1310",
			"3.1311",
			"4.1312",
			"5.1313",
			"6.1314",
			"7.1315",
			"8.1316",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_1309_1316);
		switch (choice_input)
		{
		case 9:
			back_to_floor_13 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_13 == true)
		{
			break;
		}
	}
}
void guest_rooms_1317_1324()
{
	bool back_to_floor_13{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：1317-1324。";
		get_enter();
		check();
		vector<string>options_guest_rooms_1317_1324
		{
			"1.1317",
			"2.1318",
			"3.1319",
			"4.1320",
			"5.1321",
			"6.1322",
			"7.1323",
			"8.1324",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_1317_1324);
		switch (choice_input)
		{
		case 9:
			back_to_floor_13 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_13 == true)
		{
			break;
		}
	}
}
void guest_rooms_1325_1332()
{
	bool back_to_floor_13{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：1325-1332。";
		get_enter();
		check();
		vector<string>options_guest_rooms_1325_1332
		{
			"1.1325",
			"2.1326",
			"3.1327",
			"4.1328",
			"5.1329",
			"6.1330",
			"7.1331",
			"8.1332",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_1325_1332);
		switch (choice_input)
		{
		case 9:
			back_to_floor_13 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_13 == true)
		{
			break;
		}
	}
}
void guest_rooms_1401_1408()
{
	bool back_to_floor_14{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：1401-1408。";
		get_enter();
		check();
		vector<string>options_guest_rooms_1401_1408
		{
			"1.1401",
			"2.1402",
			"3.1403",
			"4.1404",
			"5.1405",
			"6.1406",
			"7.1407",
			"8.1408",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_1401_1408);
		switch (choice_input)
		{
		case 9:
			back_to_floor_14 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_14 == true)
		{
			break;
		}
	}
}
void guest_rooms_1409_1416()
{
	bool back_to_floor_14{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：1409-1416。";
		get_enter();
		check();
		vector<string>options_guest_rooms_1409_1416
		{
			"1.1409",
			"2.1410",
			"3.1411",
			"4.1412",
			"5.1413",
			"6.1414",
			"7.1415",
			"8.1416",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_1409_1416);
		switch (choice_input)
		{
		case 9:
			back_to_floor_14 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_14 == true)
		{
			break;
		}
	}
}
void guest_rooms_1417_1424()
{
	bool back_to_floor_14{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：1417-1424。";
		get_enter();
		check();
		vector<string>options_guest_rooms_1417_1424
		{
			"1.1417",
			"2.1418",
			"3.1419",
			"4.1420",
			"5.1421",
			"6.1422",
			"7.1423",
			"8.1424",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_1417_1424);
		switch (choice_input)
		{
		case 9:
			back_to_floor_14 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_14 == true)
		{
			break;
		}
	}
}
void guest_rooms_1425_1432()
{
	bool back_to_floor_14{ false };
	while (true)
	{
		time_output();
		cout << "你来到了走廊：1425-1432。";
		get_enter();
		check();
		vector<string>options_guest_rooms_1425_1432
		{
			"1.1425",
			"2.1426",
			"3.1427",
			"4.1428",
			"5.1429",
			"6.1430",
			"7.1431",
			"8.1432",
			"9.其他走廊"
		};
		asking_questions(options_guest_rooms_1425_1432);
		switch (choice_input)
		{
		case 9:
			back_to_floor_14 = true;
			break;
		default:
			cout << "这是别人的房间，不能随便进哦。";
			break;
		}
		if (back_to_floor_14 == true)
		{
			break;
		}
	}
}