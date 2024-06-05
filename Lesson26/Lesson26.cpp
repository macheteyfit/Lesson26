#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <string>
#include <sstream>
#include "Student.h"

using namespace std;

int main()
{
    string line, name, address;
    int age;
    vector<Student*> students;
    string data;

    ifstream fin;
    fin.open("C:\\example\\Students.txt", std::ios::app);

    if (fin.is_open()) {
        while (!fin.eof()) {
            if (getline(fin, line)) {
                stringstream ss(line);
                getline(ss, name, ';');
                ss >> age;
                ss.ignore();
                getline(ss, address);

                students.push_back(new Student(name, age, address));
            }
        }
        fin.close();
        for (int i = 0; i < students.size(); i++) {
            students[i]->print();
        }


        return 0;


        /*

           /* vector <Student* > students;
            students.push_back(new Student("Ivan Ivanov", 35, "Vladimir, Russia"));
            students.push_back(new Student("Mark Markov", 24, "Vladimir, Russia"));
            students.push_back(new Student("Test Testov", 19, "Moscow, Russia"));
            Student student();

            ofstream fout;
            fout.open("C:\\example\\Students.txt", std::ios::app);
            if (fout.is_open()) {
                for (int i = 0; i < students.size(); i++) {
                    students[i]->printToFileCSV(fout);
                }
            }
            else {
                cout << "Can't open file!";
            }*/




            /*
                int x;
                ifstream fin;
                fin.open("C:\\example.txt", std::ios::binary);

                if (fin.is_open()) {
                    fin.read(reinterpret_cast<char*>(&x), sizeof(x));
                    cout << x;
                    fin.close();
                }
                else {
                    cout << "Error opening file!\n";
                }

            */


            /*
             int x = 10;
                int* ptr_int = &x;
                char* ptr_char = reinterpret_cast<char*>(ptr_int);
                ptr_int = reinterpret_cast<int*>(ptr_char);
                cout << "original x: " << x << endl;
                cout << "x after reinterepret_cast: " << *ptr_char << endl;
            */

            //std::string data = "Ivan Ivanov;35;Vladimir, Russia\n";
            //std::stringstream ss(data);
            //string name;
            //int age;
            //std::string address;
            //
            //getline(ss, name, ";");
            //ss >> age;
            //ss.ignore();
            //
            //getline(ss, address);
            //cout << "name: " << name << endl;
            //cout << "age: " << age << endl;
            //cout << "address: " << address << endl;

               /* int x;
                cin >> x;
                ofstream fout;
                fout.open("C:\\exampleNew.txt");
                if (fout.is_open()) {
                    fout << x;
                    fout.close();
                }
                else {
                    cout << "Error opening file for writing." << endl;
                }

                ifstream fin;
                fin.open("C:\\exampleNew.txt");
                if (fin.is_open()) {
                    if (fin >> x) {
                        cout << x << endl;
                    }
                    fin.close();
                }
                else {
                    cout << "Error opening file for reading." << endl;
                }*/

                // std::string name;
                // char delim = '.';
                // cout << "Enter your name: ";
                // getline(cin, name, delim);
                // cout << "Hello, " << name << "!" << endl;

                ///* std::string name;
                // std::ofstream fout;
                // fout.open("C:\\exampleNew.txt");
                // if (fout.is_open()) {
                //     while (true) {
                //         getline(cin, name);
                //         if (name == "0") break;
                //         fout << name << endl;
                //     }
                //     fout.close();
                // }
                // else {
                //     cout << "Couldn't open file\n";
                // }*/

                 //std::string name;
                 //std::ifstream fin;
                 //fin.open("C:\\exampleNew.txt");
                 //if (fin.is_open()) {
                 //    while (!fin.eof()) {
                 //        if (getline(fin, name)) {
                 //            cout << name << "\n";
                 //        }
                 //    }
                 //    fin.close();
                 //}
                 //else {
                 //    cout << "Can't open file!\n";
                 //}






             //
             //int x;
             //std::ifstream fin;
             //fin.open("C:\\example.txt");
             //if (fin.is_open()) {
             //    if (fin >> x)
             //        std::cout << x;
             //    fin.close();
             //}


             //int x;
             //
             //
             //ofstream fout;  
             //fout.open("C:\\example.txt");
             //if (fout.is_open()) {
             //    cout << "Enter a number: ";
             //    cin >> x;
             //    fout << x;
             //    fout.close();
             //}
             //else {
             //    cout << "Error opening file for writing." << endl;
             //}
             //
             //// Read from file
             //ifstream fin;  // Use ifstream for reading
             //fin.open("C:\\example.txt");
             //if (fin.is_open()) {
             //    if (fin >> x) {
             //        cout << "Number read from file: " << x << endl;
             //    }
             //    fin.close();
             //}
             //else {
             //    cout << "Error opening file for reading." << endl;
             //}
             //
             //// Get user input
             //string name;
             //cout << "Enter your name: ";
             //getline(cin, name);
             //cout << "Hello, " << name << "!" << endl;
             //
             //return 0;
    }
}