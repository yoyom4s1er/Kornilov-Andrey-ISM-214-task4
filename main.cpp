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

	return 0;
}
