#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string firstname, lastname;	
	float salary, upsalary, inc;

	ifstream myfile("Data.txt");
	ofstream newfile("Output_SalinasPablo.dat");
	myfile.is_open();
	while (myfile >> lastname >> firstname >> salary >> inc) {
		upsalary = ((salary * inc) / 100) + salary;
		cout << fixed << setprecision(2) << firstname << " " << lastname << " " << upsalary << endl;
		newfile << firstname << " " << lastname << " " << upsalary << endl;
	}
	myfile.close();
	newfile.close();

	system("pause");

	return 0;
}