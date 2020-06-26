#include"Driver.h"
#include<iostream>

using namespace std;

int main() {

	Car car("BMW", 220, 0);
	Horse h("NIN", 10);
	Driver dr("vadim", &car);
	dr.testDrive();
	dr.setVechile(&h);
	dr.testDrive();
	
	
	system("pause");
	return 0;
}