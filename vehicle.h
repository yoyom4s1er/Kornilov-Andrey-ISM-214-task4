#pragma once
#include <iostream>

/**
* \brief Класс треугольник
*/
class vehicle {
	protected:
		/**
		* \brief Средняя скорость
		*/
		double speed;

		/**
		* \brief Название модели
		*/
		std::string mark;

		/**
		* \brief Число пассажиров
		*/
		int pas;

	public:

		/**
		 * \brief Конструктор по умолчанию
		 */
		vehicle() = default;

		/**
		 * \brief Параметризованный конструктор
		 */
		vehicle(const double speed, const std::string& mark, const int pas);

		/**
		 * \brief Деструктор
		 */
		~vehicle() = default;

		/**
		 * \brief Геттер значения скорости
		 */
		double get_speed() const;

		/**
		 * \brief Геттер названия марки
		 */
		std::string get_mark() const;

		/**
		 * \brief Получение значения переменной
		 */
		int get_pas() const;

		/**
		 * \brief сеттер значения скорости
		 */
		void set_speed(const double speed);

		/**
		 * \brief сеттер названия марки
		 */
		void set_mark(const std::string& mark);

		/**
		 * \brief сеттер кол-ва пассажиров
		 */
		void set_pas(const int pas);

		/**
		 * \brief вычисление времени движения на заданное расстояние
		 */
		double get_time_to_place(const double distance);
};

class bicycle : public vehicle {

	private:
		/**
		 * \brief Коэффициент потребления топлива
		 */
		double ratio;

	public:
		
		/**
		 * \brief Конструктор по умолчанию
		 */
		bicycle() = default;

		/**
		 * \brief Параметризованный конструктор
		 */
		bicycle(const double speed, const std::string& mark, const int pas);

		/**
		 * \brief Деструктор
		 */
		~bicycle() = default;
};

class car : public vehicle {

	private:
		/**
		 * \brief Коэффициент потребления топлива
		 */
		double ratio;

	public:

		/**
		 * \brief Конструктор по умолчанию
		 */
		car() = default;

		/**
		 * \brief Параметризованный конструктор
		 */
		car(const double speed, const std::string& mark, const int pas, const double ratio);

		/**
		 * \brief Деструктор
		 */
		~car() = default;

		/**
		 * \brief Получение значения коэффициента потребления топлива
		 */
		double get_ratio() const;

		/**
		 * \brief Получение значения расхода топлива за расстояние
		 */

		double get_fuel_rate(const double distance);


		/**
		 * \brief Сеттер коэффициента расхода топлива
		 */
		void set_ratio(const double ratio);
};

class lorry : public vehicle {

private:
	/**
	 * \brief Коэффициент потребления топлива
	 */
	double ratio;

	/**
	 * \brief Грузоподъемность
	 */
	double load_capacity;

public:

	/**
	 * \brief Конструктор по умолчанию
	 */
	lorry() = default;

	/**
	 * \brief Параметризованный конструктор
	 */
	lorry(const double speed, const std::string& mark, const int pas, const double ratio, const double load_capacity);

	/**
	 * \brief Деструктор
	 */
	~lorry() = default;

	/**
	 * \brief Геттер коэффициента расхода топлива
	 */
	double get_ratio() const;

	/**
	 * \brief Получение значения расхода топлива за заданное расстояние
	 */

	double get_fuel_rate(const double distance);

	/**
	 * \brief Получение значению грузоподъмности
	 */
	double get_load_capacity() const;

	/**
	 * \brief Сеттер коэффициента расхода топлива
	 */
	void set_ratio(const double ratio);

	/**
	 * \brief сеттер грузоподъемности
	 */
	void set_load_capacity(const double load_capacity);
};
