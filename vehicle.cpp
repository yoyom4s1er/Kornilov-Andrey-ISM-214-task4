#include "vehicle.h"
#include <iostream>

vehicle::vehicle(const double speed, const std::string& mark, const int pas) {
	if (speed < 0 || mark.empty() || pas < 0) {
		throw std::invalid_argument("Invalid arguments");
	}

	set_speed(speed);
	set_mark(mark);
	set_pas(pas);
}

double vehicle::get_speed() const {
	return this->speed;
}

std::string vehicle::get_mark() const {
	return this->mark;
}

int vehicle::get_pas() const {
	return this->pas;
}

void vehicle::set_speed(const double speed) {
	if (speed < 0)
	{
		throw std::invalid_argument("The speed cannot be negative");
	}
	this->speed = speed;
}

void vehicle::set_mark(const std::string& mark) {
	if (mark.empty())
	{
		throw std::invalid_argument("the name cannot be empty");
	}
	this->mark = mark;
}

void vehicle::set_pas(const int pas) {
	if (pas < 0)
	{
		throw std::invalid_argument("The pas cannot be negative");
	}
	this->pas = pas;
}

double vehicle::get_time_to_place(const double distance) {
	return distance / this->speed;
}

bicycle::bicycle(const double speed, const std::string& mark, const int pas) {
	if (speed < 0 || mark.empty() || pas < 0) {
		throw std::invalid_argument("Invalid arguments");
	}

	set_speed(speed);
	set_mark(mark);
	set_pas(pas);
}

car::car(const double speed, const std::string& mark, const int pas, const double ratio) {
	if (speed < 0 || mark.empty() || pas < 0 || ratio < 0) {
		throw std::invalid_argument("Invalid arguments");
	}

	set_speed(speed);
	set_mark(mark);
	set_pas(pas);
	set_ratio(ratio);
}

double car::get_ratio() const {
	return this->ratio;
}

double car::get_fuel_rate(const double distance) {
	return this->ratio * distance;
}

void car::set_ratio(const double ratio) {
	if (ratio < 0)
	{
		throw std::invalid_argument("The ratio cannot be negative");
	}
	this->ratio = ratio;
}

lorry::lorry(const double speed, const std::string& mark, const int pas, const double ratio, const double load_capacity)
{
	if (speed < 0 || mark.empty() || pas < 0 || ratio < 0 || load_capacity < 0) {
		throw std::invalid_argument("Invalid arguments");
	}

	set_speed(speed);
	set_mark(mark);
	set_pas(pas);
	set_ratio(ratio);
	set_load_capacity(load_capacity);
}

double lorry::get_ratio() const {
	return this->ratio;
}

double lorry::get_load_capacity() const {
	return this->load_capacity;
}

double lorry::get_fuel_rate(const double distance) {
	return this->ratio * distance;
}


void lorry::set_ratio(const double ratio) {

	if (ratio < 0)
	{
		throw std::invalid_argument("The ratio cannot be negative");
	}
	this->ratio = ratio;
}

void lorry::set_load_capacity(const double load_capacity) {

	if (ratio < 0)
	{
		throw std::invalid_argument("The load capacity cannot be negative");
	}
	this->load_capacity = load_capacity;
}
