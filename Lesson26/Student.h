#pragma once
#include <string>
#include <iostream>
#include <fstream>

class Student
{
private:
	std::string name;
	int age;
	std::string address;
public:
	Student(std::string nameP, int ageP, std::string addressP) 
		: name{nameP} , age {ageP}, address{addressP} {}
	
	void print() {
		std::cout << name << " " << age << " " << address  << "\n";
	}

	void printToFileCSV(std::ofstream& fout) {
		fout << name << ";" << age << ";" << address << "\n";
		}
	};