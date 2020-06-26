#pragma once
#include<iostream>
#include<string>
using namespace std;

__interface IDrivable {
	bool drive();
	bool stop();
	int upSpeed(size_t upSpeed);
	int downSpeed(size_t downSpeed);
	void print();

};



class Car : public IDrivable {
	string brandCar;
	const int maxSpeed = 240;
	int currentSpeed = 0;
public:
	Car(const string & brangCar = "CAAAR", const int & maxSpeed = 240, const int&currentSpeed = 3)
		:brandCar(brangCar), maxSpeed(maxSpeed), currentSpeed(currentSpeed) {};

	bool drive() {

		if (currentSpeed > 0) {
			cout << "Car driver" << endl;
		}
		else {
			cout << "Car not driver" << endl;
		}
		return true;
	}
	bool stop() {
		if (currentSpeed > 0) {
			currentSpeed = 0;
			cout << "stopeed car" << endl;
		}
		return false;
	}
	int upSpeed(size_t upSpeed) {
		if (upSpeed > maxSpeed) {
			cout << "Incorret speed" << endl;
			return 0;
		}
		else {
			return currentSpeed += upSpeed;
		}
	}
	int downSpeed(size_t downSpeed) {
		return currentSpeed -=downSpeed;
	}
	void print() {
		cout << "Brand Car >> "<<brandCar << endl;
		cout <<"Max speed >>"<< maxSpeed << endl;
		cout <<"Current speed >>"<< currentSpeed << endl;
	}



};


class Horse : public IDrivable {
	string name;
	int currentSpeed = 0;
public:
	Horse(const string & name = "HORRSEE", const int&currentSpeed = 0)
		:name (name) ,currentSpeed(currentSpeed) {};

	bool drive() {

		if (currentSpeed > 0) {
			cout << "horse driver" << endl;
		}
		else {
			cout << "horse not driver" << endl;
		}
		return true;
	}
	bool stop() {
		if (currentSpeed > 0) {
			currentSpeed = 0;
			cout << "stopeed horse" << endl;
		}
		return false;
	}
	int upSpeed(size_t upSpeed) {
		
		
			return currentSpeed += upSpeed;
		
	}
	int downSpeed(size_t downSpeed) {
		return currentSpeed -= downSpeed;
	}
	void print() {
		
		cout << "Name horse >> " << name << endl;
		cout << "Current speed >>" << currentSpeed << endl;
	}



};


class Driver :public Car
{
	string nameDriver;
	IDrivable *drivable;
	
public:

	Driver( string nameDriver,IDrivable*drivable):nameDriver(nameDriver),drivable(drivable) {};

	void setVechile(IDrivable*drivable) {
		this->drivable = drivable;
	}

	void testDrive() {
		cout << "name driver" << nameDriver << endl;
		drivable->drive();
		drivable->print();
		drivable->upSpeed(40);
		drivable->drive();
		drivable->print();
		drivable->downSpeed(10);
		drivable->print();
		drivable->stop();
		drivable->print();
	}

	


};




/*Створити інтерфес IDrivable, що пропонує поведінку для керованих транспортних засобів(авто, мотоцикл, кінь чи ін.)

з методами



drive()
stop()
upSpeed(int)
downSpeed(int)


Створити класи, що реалізують інтерфейс IDrivable

Car(бренд, максимальна швидкість - константа класу, поточна швидкість)

Horse(назва, поточна швидкість, порода)



Створити клас Водія(Driver), що може керувати як авто так і конем.

Поля

name - імя водія
IDrivable * drivable - чим(ким) буде керувати водій


Методи



setVehicle(IDrivable * drivable) - метод зміни об’єкту керування
testDrive() - метод тестування керування(може бути реалізований як меню), тут повикликати методи drive(), stop(), upSpeed(int), downSpeed(int)*/





