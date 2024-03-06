

#include <iostream>
#include <thread>
#include <chrono>
#include <fstream>


using namespace std;


class Vehicle {                     //         <<-------------__--__--__--  MY BASE CLASS FOR VEHICLES
private:
	string make,
	   	   model,
		   color,
		   fuelType,
		   transmitionType;
		   
	int mileage;
	float currentSpeed;

public: 

	Vehicle(string make, string model, string color, string fuelType, string transmitionType) {
		this->make = make;
		this->model = model;
		this->color = color;
		this->fuelType = fuelType;
		this->transmitionType = transmitionType;

		this->mileage = 0;
		this->currentSpeed = 0.00;
	}

	void carInfor() {
		system("cls");
		cout << endl << endl;
		cout << "   ******** YOUR CAR STATUS ********      " << endl;
		cout << "----------------------------------------  " << endl << endl;
		cout << "Car make:          " << make << endl;
		cout << "Car model:         " << model << endl;
		cout << "Car color:         " << color << endl;
		cout << "Engine type:       " << fuelType << endl;
		cout << "Transmition type:  " << transmitionType << endl << endl;
		cout << "========================================" << endl;
	}

	void bikeInfor() {
		system("cls");
		cout << endl << endl;
		cout << "   ******** YOUR CAR STATUS ********      " << endl;
		cout << "----------------------------------------  " << endl << endl;
		cout << "Bike make:         " << make << endl;
		cout << "Bike model:        " << model << endl;
		cout << "Bike color:        " << color << endl;
		cout << "Engine type:       " << fuelType << endl;
		cout << "Transmition type:  " << transmitionType << endl << endl;
		cout << "========================================" << endl;
	}

	void dashBoardInfor() {
		system("cls");
		cout << endl << endl;
		cout << ":::::::::: DASH BOARD :::::::::::" << endl << endl;
		cout << "Mileage:       " << mileage << " kmhr" << endl;
		cout << "Current speed: " << currentSpeed << " m" << endl;
		cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	}

	void startEngine() {
		system("cls");
		cout << endl << endl;
		cout << "     -->   " << make << endl;
		cout << "     ::::: Starting Engine ::::: " << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "     --------------------------- " << endl;
		cout << "          --- Engine ON --- " << endl;
	}

	void stopEngine() {
		system("cls");
		cout << endl << endl;
		cout << "     -->   " << make << endl;
		cout << "     ::::: Starting Engine ::::: " << endl;
		this_thread::sleep_for(chrono::seconds(1));
		cout << "     --------------------------- " << endl;
		cout << "          --- Engine OFF --- " << endl;
	}

	void accelerateEngine() {
		system("cls");
		cout << endl << endl;
		cout << "     --> " << make << endl;
		cout << "     ::::: Engine ON ::::: " << endl;
		cout << "     --------------------------- " << endl;
		this_thread::sleep_for(chrono::seconds(1));
		cout << "      --Accelerating Engine-- " << endl;
		cout << "      " << make << " on motion " << endl;
	}

	void applyBreak() {
		system("cls");
		cout << endl << endl;
		cout << "     --> " << make << endl;
		cout << "     ::::: Engine ON ::::: " << endl;
		cout << "     --------------------------- " << endl;
		this_thread::sleep_for(chrono::seconds(1));
		cout << "      --Slowing down Engine-- " << endl;
		cout << "      " << make << " on motion " << endl;
	}

	void turnRight() {
		system("cls");
		cout << endl << endl;
		cout << "     --> " << make << endl;
		cout << "     ::::: Engine ON ::::: " << endl;
		cout << "     --------------------------- " << endl;
		this_thread::sleep_for(chrono::seconds(1));
		cout << "         --Turning Right-- " << endl;
		cout << "      " << make << " on motion " << endl;
	}

	void turnLeft() {
		system("cls");
		cout << endl << endl;
		cout << "     --> " << make << endl;
		cout << "     ::::: Engine ON ::::: " << endl;
		cout << "     --------------------------- " << endl;
		this_thread::sleep_for(chrono::seconds(1));
		cout << "         --Turning Left-- " << endl;
		cout << "      " << make << " on motion " << endl;
	}

	string getVehicleName() const {
		return make;
	}

	string getVehiclModel() const {
		return model;
	}
};

class Driver {                             //         <<-------------__--__--__--  MY BASE CLASS FOR DRIVERS

private:
	string driversName,
	  	   vehicleName,
		   vehicleModel;
	 float hight,
	       weight;

public:
	Driver(string& name, const float& hight, const float& weight, const string& vehicleName, const string& vehicleModel) {
		this->driversName = name;
		this->hight = hight;
		this->vehicleModel = vehicleModel;
		this->vehicleName = vehicleName;
		this->weight = weight;
	}

	void driversInfor() {
		system("cls");
		cout << endl << endl;
		cout << "^^^^^^^^^^::::::: DRIVERS INFORMATION :::::::^^^^^^^^^^" << endl << endl;
		cout << "Driver's name:   " << driversName << endl;
		cout << "Driver's hight:  " << hight << endl;
		cout << "Driver's weight: " << weight << endl;
		cout << "Vehicle name:    " << vehicleName << endl;
		cout << "Vehicle model:   " << vehicleModel << endl << endl;
		cout << "_______________________________________________________" << endl;
	}

	
};

class Car : public Vehicle {               //         <<-------------__--__--__--  MY BASE SUB CLASS 

public:
	Car(string make, string model, string color, string fuelType, string transmitionType) :Vehicle(make, model, color, fuelType, transmitionType) {

	}
};

class motorCycle : public Vehicle {          //         <<-------------__--__--__--  MY BASE SUB CLASS 

public:
	motorCycle(string make, string model, string color, string fuelType, string transmitionType) :Vehicle(make, model, color, fuelType, transmitionType) {

	}
};


void displayMain();
int retrieveInteger();
void vehicle_builder();
void build_requirements();
void requestDetails(const Vehicle& name, const Vehicle& model);
void class_Function_for_car(const string& make, const string& model, const string& color, const string& fuelType, const string& transmitionType);
void class_Function_for_motorcycle(const string& make, const string& model, const string& color, const string& fuelType, const string& transmitionType);
void drivers_function(string& name, float& hight, float& weight, string& vehicleName, string& vehicleModel);

int main()
{
	displayMain();
  

	

   
	system("pause>0");
}

//                                                        @@@@@@@@   MY FUNCTIONS   @@@@@@@@

void requestDetails(const Vehicle& name, const Vehicle& model) {
	system("cls");
	string driversName,
		   vehicleName,
		   vehicleModel;
	float hight,
		  weight;
	int counter = 0,
		number;
	bool done = false;

	cout << endl << endl;
	cout << ">>>>>>> Pls choose any of the vehicle option <<<<<<<<<" << endl << endl;
	cout << "        1  <-- Car    <>    Motorcycle --> 2" << endl;
    number = retrieveInteger();
	if (number == 1) {
		system("cls");
		cout << endl << endl;
		cout << ">>> Hi! You are registering for car." << endl;
		this_thread::sleep_for(chrono::seconds(1));


		cout << endl << endl;
		cout << "=========! DRIVER'S PORTAL !==========" << endl;
		cout << "Pls enter your name: ";
		cin >> driversName;
		cout << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "        Hi! " << driversName << endl << endl;
		cout << "Pls continue with your registration" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "Enter your hight: ";
		cin >> hight;
		cout << "Enter your weight: ";
		cin >> weight;
		cout << "Enter your car name: ";
		cin >> vehicleName;
		cout << "Enter car model: ";
		cin >> vehicleName;
		while (!done) {
			if (vehicleName != name.getVehicleName() && vehicleModel != model.getVehiclModel()) {   // <<<-------------- TO CHECK IF THE CAR NAME AND MODE CORRESPOND WITH THE VEHICLE CLASS VARIABLE NAME AND MODEL
				system("cls");
				cout << endl << endl;
				cout << "Your car name or your model name is not correct." << endl;
				cout << "Pls write the correct name of your car and the model." << endl << endl;
				this_thread::sleep_for(chrono::seconds(2));
				cout << "Your car name: " << name.getVehicleName() << "\nYour car model: " << model.getVehiclModel() << endl;

				this_thread::sleep_for(chrono::seconds(5));
				requestDetails(name, model);
				counter++;
				if (counter == 5) {
					cout << endl;
					cout << ">>> Returning back to the main menu......!" << endl;
					this_thread::sleep_for(chrono::seconds(3));
					return;
				}

			}
			else {
				drivers_function(driversName, hight, weight, vehicleName, vehicleModel);
				ofstream driversFile("Driver.txt", ios::app);          //  <<<----------------------- WRITING DRIVER'S DETAILS INTO FILE.
				if (driversFile.is_open()) {
					driversFile << "Driver's name:   " << driversName << endl;
					driversFile << "Driver's hight:  " << hight << endl;
					driversFile << "Driver's weight: " << weight << endl;
					driversFile << "Car name:    " << vehicleName << endl;
					driversFile << "Car model:   " << vehicleName << endl;
					driversFile << "                                " << endl;
				}
				driversFile.close();
			}
		}

	}
	else if (number == 2) {

		cout << endl << endl;
		system("cls");
		cout << ">>> Hi! You are registering for motorcycle." << endl;
		this_thread::sleep_for(chrono::seconds(1));


		cout << endl << endl;
		cout << "=========! DRIVER'S PORTAL !==========" << endl;
		cout << "Pls enter your name: ";
		cin >> driversName;
		cout << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "        Hi! " << driversName << endl << endl;
		cout << "Pls continue with your registration" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "Enter your hight: ";
		cin >> hight;
		cout << "Enter your weight: ";
		cin >> weight;
		cout << "Enter your bike name: ";
		cin >> vehicleName;
		cout << "Enter bike model: ";
		cin >> vehicleName;
		while (!done) {
			if (vehicleName != name.getVehicleName() && vehicleModel != model.getVehiclModel()) {   // <<<-------------- TO CHECK IF THE CAR NAME AND MODE CORRESPOND WITH THE VEHICLE CLASS VARIABLE NAME AND MODEL
				system("cls");
				cout << endl << endl;
				cout << "Your car name or your model name is not correct." << endl;
				cout << "Pls write the correct name of your car and the model." << endl << endl;
				this_thread::sleep_for(chrono::seconds(2));
				cout << "Your bike name: " << name.getVehicleName() << "\nYour bike model: " << model.getVehiclModel() << endl;

				this_thread::sleep_for(chrono::seconds(5));
				requestDetails(name, model);
				counter++;
				if (counter == 5) {
					cout << endl;
					cout << ">>> Returning back to the main menu......!" << endl;
					this_thread::sleep_for(chrono::seconds(3));
					return;
				}

			}
			else {
				drivers_function(driversName, hight, weight, vehicleName, vehicleModel);
				ofstream driversFile("Driver.txt", ios::app);          //  <<<----------------------- WRITING DRIVER'S DETAILS INTO FILE.
				if (driversFile.is_open()) {
					driversFile << "Driver's name:   " << driversName << endl;
					driversFile << "Driver's hight:  " << hight << endl;
					driversFile << "Driver's weight: " << weight << endl;
					driversFile << "Bike name:    " << vehicleName << endl;
					driversFile << "Bike model:   " << vehicleName << endl;
					driversFile << "                                " << endl;
				}
				driversFile.close();
			}
		}

	}



}

void class_Function_for_car(const string& make, const string& model, const string& color, const string& fuelType, const string& transmitionType) {
	Car car(make, model, color, fuelType, transmitionType);        // <--__--__-- FUNCTION FOR RETRIEVING DATA FROM CAR CLASS;
	Vehicle* driver = &car;
	this_thread::sleep_for(chrono::seconds(3));
	driver->carInfor();
}

void class_Function_for_motorcycle(const string& make, const string& model, const string& color, const string& fuelType, const string& transmitionType) {
	motorCycle MotorCycle(make, model, color, fuelType, transmitionType);          // <--__--__-- FUNCTION FOR RETRIEVING DATA FROM MOTOCYCLE CLASS;
	Vehicle* biker = &MotorCycle;
	this_thread::sleep_for(chrono::seconds(3));
	biker->bikeInfor();
}

void drivers_function( string& name, float& hight, float& weight, string& vehicleName, string& vehicleModel) {
	Driver driver(name, hight, weight, vehicleName, vehicleModel);       // <--__--__-- FUNCTION FOR RETRIEVING DATA FROM DRIVER CLASS;
	driver.driversInfor();
}

int retrieveInteger() {         //   <--__--__--__-- FUNCTION FOR RETRIEVING INTEGER VALUES
	int number;


	while(true){
		cout << endl << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "=================================================" << endl;
		cout << "Pls enter number from the option: ";
		if (cin >> number) {
			break;
		}
		else {
			cout << endl << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "******** Invalid Input! **********" << endl;
			cout << "    Pls enter a number. " << endl;
		}
	}

	return number;
}

void vehicle_builder() {                              // <--__--__--__-- FUNCTION FOR BUILDING YOUR OWN CAR.
	int number;
	ofstream car_record("car.txt", ios::app);
	ofstream bike_record("bike.txt", ios::app);
	string make, model, color, fuelType, transmitionType;
	build_requirements();
	cout << endl << ">>>>>>> Pls choose any of the vehicle option <<<<<<<<<" << endl << endl;
	cout << "        1  <-- Car    <>    Motorcycle --> 2" << endl;
    number = retrieveInteger();
	switch (number)
	{
	case 1: cout << "Pls enter your car name: ";
		    cin >> make;
			cout << "Enter the Car model: ";
			cin >> model;
			cout << "Pls enter car color: ";
			cin >> color;
			cout << "Enter fuel type: ";
			cin >> fuelType;
			cout << "Transmition type (automatic or Manual): ";
			cin >> transmitionType;

			
			if (car_record.is_open()) {                               // <--__--___-- RECOEDING INTO FILE
				car_record << "                         " << endl;
				car_record << "Car name:         " << make << endl;
				car_record << "Car model:        " << model << endl;
				car_record << "Car color:        " << color << endl;
				car_record << "Fuel type:        " << fuelType << endl;
				car_record << "transmition Type: " << transmitionType << endl;
				car_record << "                                      " << endl;
			}
			else {
				cout << endl << endl;
				cout << "::::::::::::: Error in opening file ::::::::::::::: " << endl;
				this_thread::sleep_for(chrono::seconds(4));
				return;
			}
			car_record.close();
		    
		class_Function_for_car(make, model, color, fuelType, transmitionType);
		this_thread::sleep_for(chrono::seconds(5));
		return;
		break;

	case 2: cout << "Pls enter your bike name: ";
		cin >> make;
		cout << "Enter the bike model: ";
		cin >> model;
		cout << "Pls enter bike color: ";
		cin >> color;
		cout << "Enter fuel type: ";
		cin >> fuelType;
		cout << "Enter trsmition type: ";
		cin >> transmitionType;

		if (bike_record.is_open()) {                               // <--__--___-- RECOEDING INTO FILE
			bike_record << "                         " << endl;
			bike_record << "Bike name:        " << make << endl;
			bike_record << "Bike model:       " << model << endl;
			bike_record << "Bike color:       " << color << endl;
			bike_record << "Fuel type:        " << fuelType << endl;
			bike_record << "transmition Type: " << transmitionType << endl;
			bike_record << "                                       " << endl;
		}
		else {
			cout << endl << endl;
			cout << "::::::::::::: Error in opening file ::::::::::::::: " << endl;
			this_thread::sleep_for(chrono::seconds(4));
			return;
		}
		bike_record.close();

		class_Function_for_car(make, model, color, fuelType, transmitionType);
		this_thread::sleep_for(chrono::seconds(5));
		return;
		break;


	default: cout << endl << "*************** Invalid Operation! ***************" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		return;
		break;
	}



}

void build_requirements() {
	system("cls");
	cout << endl << endl;
	cout << " ::::::::::::::::: BUILD YOUR OWN VEHICLE :::::::::::::::::" << endl << endl;
	cout << " >> Requirements:  Car Name  " << endl;
	cout << "                   Car Model " << endl;
	cout << "                   Car Color " << endl;
	cout << "                   Petrol Type ('Desle', 'Fuel', 'Electric') " << endl;
	cout << "                   Transmition Type ('Manual', 'Automatic') " << endl;
}

void displayMain() {
	int number;
	float hight, weight;
	string name, vehicleName, vehicleModel;

	system("cls");
	cout << endl << endl;
	cout << "::::::::::::::::: GENERATE YOUR OWN VECHICLE :::::::::::::::::" << endl;
	cout << "______________________________________________________________" << endl << endl;
	cout << "     CAR FEATURES: " << "Start and stop engine" << endl;
	this_thread::sleep_for(chrono::seconds(1));
	cout << "                   Dash board." << endl;
	this_thread::sleep_for(chrono::seconds(1));
	cout << "                   Front and backward movement." << endl;
	this_thread::sleep_for(chrono::seconds(1));
	cout << "                   Left and right movement." << endl;
	this_thread::sleep_for(chrono::seconds(1));
	cout << "                   Accelerating and braking pedals." << endl << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "~~~~~~~~~~~~~~~~ Generate  your own vechile and your driver." << endl;
	vehicle_builder();
	this_thread::sleep_for(chrono::seconds(5));
	cout << "~~~~~~~~~~~~~~~~ Car building section      <--" << endl;
	cout << "Enter driver's name: ";
	cin >> name;
	cout << "Driver's hight: ";
	cin >> hight;
	cout << "Driver's weight: ";
	cin >> weight;
	cout << "Enter your car name: ";
	cin >> vehicleName;
	cout << "Enter your car model: ";
	cin >> vehicleModel;

	drivers_function(name, hight, weight, vehicleName, vehicleModel);
}



