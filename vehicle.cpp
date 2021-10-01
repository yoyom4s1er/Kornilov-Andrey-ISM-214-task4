#include "vehicle.h"
#include <iostream>

vehicle::vehicle(const double speed, const std::string mark, const int pas)
	: speed(speed), mark(mark), pas(pas) {}

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
	this->speed = speed;
}

void vehicle::set_mark(const std::string mark) {
	this->mark = mark;
}

void vehicle::set_pas(const int pas) {
	this->pas = pas;
}

double vehicle::get_time_to_place(const double distance) {
	return distance / this->speed;
}

bicycle::bicycle(const double speed, const std::string mark, const int pas)
	: vehicle(speed, mark, pas) {}

car::car(const double speed, const std::string mark, const int pas, const double ratio)
	: vehicle(speed, mark, pas), ratio(ratio) {}

double car::get_ratio() const {
	return this->ratio;
}

double car::get_fuel_rate(const double distance) {
	return this->ratio * distance;
}

void car::set_ratio(const double ratio) {
	this->ratio = ratio;
}

lorry::lorry(const double speed, const std::string mark, const int pas, const double ratio, const double load_capacity)
	: vehicle(speed, mark, pas), ratio(ratio), load_capacity(load_capacity) {}

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
	this->ratio = ratio;
}

void lorry::set_load_capacity(const double load_capacity) {
	this->load_capacity = load_capacity;
}
