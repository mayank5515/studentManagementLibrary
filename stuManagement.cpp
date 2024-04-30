#include <iostream>
#include <fstream>
using namespace std;

class temp
{
    string rollNum, name, fName, address, search, phoneNum;
    fstream file;

public:
    void addStu();
    void viewStu();
    void searchStu();
} obj;

int main()
{

    char choice;
    cout << "---------------------------" << endl;
    cout << "1- Add Student Record" << endl;
    cout << "2- View All Student Record" << endl;
    cout << "3- Search Student Record" << endl;
    cout << "4- Exit" << endl;
    cout << "---------------------------" << endl;
    cin >> choice;

    switch (choice)
    {
    case '1':
        cin.ignore();
        obj.addStu();
        break;
    case '2':
        cin.ignore();
        obj.viewStu();
        break;
    case '3':
        cin.ignore();
        obj.searchStu();
        break;
    case '4':
        return 0;
        break;
    default:
        cout << "Invalid Choice...!";
    }
}

void temp ::addStu()
{

    cout << "Enter Student Roll Number :: ";
    getline(cin, rollNum);
    cout << "Enter Student Name ::";
    getline(cin, name);
    cout << "Enter Student Father Name ::";
    getline(cin, fName);
    cout << "Enter Student Address ::";
    getline(cin, address);
    cout << "Enter Student Phone Number ::";
<<<<<<< Updated upstream
    cin >> phoneNum;
    == == == =
                 getline(cin, phoneNum);
>>>>>>> Stashed changes

    file.open("stuData.txt", ios ::out | ios ::app);
    file << rollNum << "*";
    file << name << "*";
    file << fName << "*";
    file << address << "*";
<<<<<<< Updated upstream
    file << phoneNum << endl;
    == == == =
                 file << phoneNum << "\n";

>>>>>>> Stashed changes
    file.close();
}

void temp ::viewStu()
{

    file.open("stuData.txt", ios ::in);
    getline(file, rollNum, '*');
    getline(file, name, '*');
    getline(file, fName, '*');
    getline(file, address, '*');
<<<<<<< Updated upstream
    int phoneNum;
    file >> phoneNum;
    // getline(file, phoneNum, '\n');
    == == == =
                 getline(file, phoneNum, '\n');
>>>>>>> Stashed changes

    while (!file.eof())
    {
        cout << "\n";
        cout << "Student Roll Number :: " << rollNum << endl;
        cout << "Student Name :: " << name << endl;
        cout << "Student Father Name :: " << fName << endl;
        cout << "Student Address :: " << address << endl;
        cout << "Student Phone Number :: " << phoneNum << endl;

        getline(file, rollNum, '*');
        getline(file, name, '*');
        getline(file, fName, '*');
        getline(file, address, '*');
        getline(file, phoneNum, '\n');
    }
    file.close();
}

void temp ::searchStu()
{

    cout << "Enter Student Roll Number :: ";
    getline(cin, search);

    file.open("stuData.txt", ios ::in);
    getline(file, rollNum, '*');
    getline(file, name, '*');
    getline(file, fName, '*');
<<<<<<< Updated upstream
    getline(file, address, '\n');
    int phoneNum;
    file >> phoneNum;
    == == == =
                 getline(file, address, '*');
    getline(file, phoneNum, '\n');

>>>>>>> Stashed changes
    while (!file.eof())
    {
        if (rollNum == search)
        {
            cout << endl;
            cout << "Student Roll Number :: " << rollNum << endl;
            cout << "Student Name :: " << name << endl;
            cout << "Student Father Name :: " << fName << endl;
            cout << "Student Address :: " << address << endl;
            cout << "Student Phone Number ::" << phoneNum << endl;
        }
        getline(file, rollNum, '*');
        getline(file, name, '*');
        getline(file, fName, '*');
        getline(file, address, '*');
        getline(file, phoneNum, '\n');
    }
    file.close();
}