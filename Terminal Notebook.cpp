#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
    string fileName;
    ofstream notesStorage(fileName);
    int choices;
    int notes;
    string note;

    //cout << "Welcome to Terminal Notebook!" << endl;//
    //cout << "1. Create a new note" << endl;//
    //cout << "2. View existing notes" << endl;//
    //cout << "3. Exit" << endl;//
    cout << "You're current notes: " << notes << endl;
    cout << "Enter your choice: ";
    cin >> choices;
    cin.ignore();
    if (choices == 1 && notes == 0)
    {
    //cout << "Put the title of your file: ";
    //getline(cin, fileName);
    //fileName += ".txt";
    //notes++;
    //notesStorage.open(fileName);
    //if (notesStorage.is_open()) 
    //{
        //cout << "File created successfully!" << endl;
    //} 
    //else
    //{
        //cout << "Error creating file!" << endl;
        //return 1;
    //}
    }

}