import <iostream>;
import <string>;
import <vector>;
import <cstdlib>;
import <conio.h>;
import <random>;
import <limits>;
import "globals.h";
import universal;
import scenes;
using namespace std;
int main()
{
	cout << "温馨提示：本游戏默认按Enter键继续~";
	get_enter();
	cout << "欢迎游玩“兽聚死亡事件”，本游戏由北极狐柠轲制作。"; 
	get_enter();
	cout << "这个游戏的灵感来源于B站同名互动视频。（原作者@可坷通）";
	get_enter();
	cout << "现在……游戏开始……";
	get_enter();
	cout << "…………";
	get_enter();
	cout << "你是一个初入兽圈的萌新，连一个自己的设定都没有，但你很热爱这个圈子。";
	get_enter();
	cout << "过了一段时间，你终于可以去兽聚了。";
	get_enter();
	cout << "你非常兴奋，天还没亮就睡不着了。爬起来对着物品清单，一遍遍检查自己有没有忘带东西。";
	get_enter();
	cout << "去机场……安检……等待……";
	get_enter();
	cout << "在经过漫长的飞行后，你终于到达了兽聚所在的城市，随后你来到了酒店。";
	get_enter();
	cout << "在前台办理入住后，你回到了自己的房间——1017。";
	get_enter();
	while (true)
	{
		switch (choice)
		{
			case 1:
				hotel_lobby();
				break;
			case 2:
				reception_desk();
				break;
			case 3:
				main_renue();
				break;
			case 4:
				outdoor_terrace();
				break;
			case 5:
				man_s_changing_room();
				break;
			case 6:
				women_s_changing_room();
				break;
			case 7:
				man_s_toilet();
				break;
			case 8:
				women_s_toilet();
				break;
			case 9:
				lounge();
				break;
			case 10:
				supporter_lounge();
				break;
			case 11:
				elevator_room();
				break;
			case 12:
				restaurant();
				break;
			case 13:
				gym();
				break;
			case 14:
				guest_rooms();
				break;
			case 15:
				mall();
				break;
		}
	}
}