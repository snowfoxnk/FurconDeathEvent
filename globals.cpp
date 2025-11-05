module globals;
import std;
using namespace std;
int choice{ 1 };
int choice_input{ 0 };
bool can_commit_crimes{ false };
int exposure_value{ 0 };
int hatred_value{ 0 };
int exploration_value{ 0 };
int furcon_time{ 32 };
bool time_passed{ true };
bool is_new_game{ true };
bool new_entry{ true };
bool start_last_function{ false };
Location location
{
    false,
	false,
    false,
    Floor::floor_10,
    Hallway::hallway_1017_1024,
    Room::own_room
};