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
	cout << "��ܰ��ʾ������ϷĬ�ϰ�Enter������~";
	get_enter();
	cout << "��ӭ���桰�޾������¼���������Ϸ�ɱ���������������"; 
	get_enter();
	cout << "�����Ϸ�������Դ��Bվͬ��������Ƶ����ԭ����@�ɿ�ͨ��";
	get_enter();
	cout << "���ڡ�����Ϸ��ʼ����";
	get_enter();
	cout << "��������";
	get_enter();
	cout << "����һ��������Ȧ�����£���һ���Լ����趨��û�У�������Ȱ����Ȧ�ӡ�";
	get_enter();
	cout << "����һ��ʱ�䣬�����ڿ���ȥ�޾��ˡ�";
	get_enter();
	cout << "��ǳ��˷ܣ��컹û����˯�����ˡ�������������Ʒ�嵥��һ������Լ���û������������";
	get_enter();
	cout << "ȥ�����������졭���ȴ�����";
	get_enter();
	cout << "�ھ��������ķ��к������ڵ������޾����ڵĳ��У�����������˾Ƶꡣ";
	get_enter();
	cout << "��ǰ̨������ס����ص����Լ��ķ��䡪��1017��";
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