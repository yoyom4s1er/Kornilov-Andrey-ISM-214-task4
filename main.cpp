#include "vehicle.h"
#include <iostream>

int main()
{
	lorry test = lorry(100, "Volvo", 4, 15, 500);
	std::cout << "Mark is " << test.get_mark() << "\n";
	std::cout << "Speed is " << test.get_speed() << "\n";
	std::cout << "Pas is " << test.get_pas() << "\n";
	std::cout << "Fuel rate per 100 km is " << test.get_fuel_rate(100) << "\n";
	std::cout << "Load capacity is " << test.get_load_capacity() << "\n";

	test.set_speed(-10);
	test.set_mark("");
	test.set_pas(-10);



	/**
	std::cout << "Set type of vehicle: " << "\n";
	std::cout << "1. bicycle " << "\n";
	std::cout << "2. car " << "\n";
	std::cout << "2. lorry " << "\n";
	char c;
	std::cin >> c;

	std::cout << "Set the distance " << "\n";
	double distance;
	std::cin >> distance;

	if (c == "1") {
		bicycle test = bicycle(10, "stels", 1);
		std::cout << "Mark is " << test.get_mark() << "\n";
		std::cout << "Speed is " << test.get_speed() << "\n";
		std::cout << "Pas is " << test.get_pas() << "\n";
	}
	else if (c == "2") {
		car test = car(100, "BMW", 4, 5);
		std::cout << "Mark is " << test.get_mark() << "\n";
		std::cout << "Speed is " << test.get_speed() << "\n";
		std::cout << "Pas is " << test.get_pas() << "\n";
		std::cout << "Fuel rate is " << test.get_fuel_rate(distance) << "\n";
	}
	else if (c == "3") {
		lorry test = lorry(100, "BMW", 4, 15, 5000);
		std::cout << "Mark is " << test.get_mark() << "\n";
		std::cout << "Speed is " << test.get_speed() << "\n";
		std::cout << "Pas is " << test.get_pas() << "\n";
		std::cout << "Fuel rate is " << test.get_fuel_rate(distance) << "\n";
		std::cout << "Load capacity is " << test.get_load_capacity() << "\n";
	}*/

	return 0;
}
