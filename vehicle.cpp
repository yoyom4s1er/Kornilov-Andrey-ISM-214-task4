#include "vehicle.h"
#include <iostream>

vehicle::vehicle(const double speed, const std::string mark, const int pas)
{
	this->speed = speed;
	this->mark = mark;
	this->pas = pas;
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

void vehicle::set_speed(const double& speed) {
	try
	{
		if (speed < 0)
		{
			throw "The speed cannot be negative";
		}
		this->speed = speed;
	}
	catch (const char* exception)
	{
		std::cerr << "Error: " << exception << '\n';
	}
}

void vehicle::set_mark(const std::string& mark) {
	try
	{
		if (mark == "")
		{
			throw "the name cannot be empty";
		}
		this->mark = mark;
	}
	catch (const char* exception)
	{
		std::cerr << "Error: " << exception << '\n';
	}
}

void vehicle::set_pas(const int& pas) {
	try
	{
		if (pas < 0)
		{
			throw "The pas cannot be negative";
		}
		this->pas = pas;
	}
	catch (const char* exception)
	{
		std::cerr << "Error: " << exception << '\n';
	}
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

void car::set_ratio(const double& ratio) {
	try
	{
		if (ratio < 0)
		{
			throw "The ratio cannot be negative";
		}
		this->ratio = ratio;
	}
	catch (const char* exception)
	{
		std::cerr << "Error: " << exception << '\n';
	}
}

lorry::lorry(const double speed, const std::string mark, const int pas, const double ratio, const double load_capacity)
{
	this->speed = speed;
	this->mark = mark;
	this->pas = pas;
	this->ratio = ratio;
	this->load_capacity = load_capacity;
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


void lorry::set_ratio(const double& ratio) {
	try
	{
		if (ratio < 0)
		{
			throw "The ratio cannot be negative";
		}
		this->ratio = ratio;
	}
	catch (const char* exception)
	{
		std::cerr << "Error: " << exception << '\n';
	}
}

void lorry::set_load_capacity(const double& load_capacity) {
	try
	{
		if (ratio < 0)
		{
			throw "The load capacity cannot be negative";
		}
		this->load_capacity = load_capacity;
	}
	catch (const char* exception)
	{
		std::cerr << "Error: " << exception << '\n';
	}
}
