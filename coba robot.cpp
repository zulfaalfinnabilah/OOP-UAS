#include <iostream>
#include <string>

using namespace std;

struct Robotku_Struct {
	int id;
	int no_wheels;
	string robotku_name;
};

class Robotku_Class {
public:
	int id;
	int no_wheels;
	string robotku_name;
	void move_robotku();
	void stop_robotku();
};

void Robotku_Class::move_robotku() {
	cout << "Moving Robotku" << endl;
};

void Robotku_Class::stop_robotku() {
	cout << "Stopping Robotku" << endl;
};

int main() {
	Robotku_Struct robotku_1;
	Robotku_Class robotku_2;

	robotku_1.id = 9;
	robotku_1.robotku_name = "Green Robot";

	robotku_2.id = 17;
	robotku_2.robotku_name = "Grey Robot";

	cout << "ID=" << robotku_1.id << "\t" << "Robotku Name:" << robotku_1.robotku_name
			<< endl;

	cout << "ID=" << robotku_2.id << "\t" << "Robotku Name:" << robotku_2.robotku_name
			<< endl;

	robotku_2.move_robotku();
	robotku_2.stop_robotku();
	return 0;
}
;
