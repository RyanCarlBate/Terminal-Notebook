#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

// Creates function that clears terminal screen
void clearTerminal()
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() 
{
    const string metaPath = R"(C:\Users\Admin\Documents\DONT_DELETE_THIS_IS_RELATED_TO_TERMINAL-NOTEBOOK.txt)";
    string fileName;
    int choices;
    int notes = 0;
    string note;

    //Following code is disabled for now:
    //cout << "Welcome to Terminal Notebook!" << endl;//
    //cout << "1. Create a new note" << endl;//
    //cout << "2. View existing notes" << endl;//
    //cout << "3. Exit" << endl;//

    // Read current number of notes stored in a file
    ifstream readFile(metaPath);
    if (readFile.is_open())
    {
        readFile >> notes;
        readFile.close();
    }
    else
    {
        cout << "Error opening file to read number of notes created. Generating file..." << endl;
        // Creates the file if it doesn't exist
        ofstream createFile(metaPath);
        if (createFile.is_open())
        {
            createFile << 0 << endl; // Initialize with 0 notes
            createFile.close();
        }
        else
        {
            cout << "Error creating file! Something went wrong." << endl;
        }
    }
    cout << "You're current notes: " << notes << endl;
    cout << "Enter your choice: ";
    cin >> choices;
    cin.ignore();
    if (choices == 1)
    {
        clearTerminal();
        ofstream writeFile(metaPath);
        if (writeFile.is_open()) 
        {
            notes++;
            writeFile << notes << endl; // Write updated note count
            writeFile.close(); // Close the file after updating note count
            ofstream writeNotes(R"(C:\Users\Admin\Documents\yournote.txt)"); //Soon to be changed to have ability to create custom file names//
            cout << "Enter your note: ";
            getline(cin, note);
            writeNotes << note << endl; // Write the actual note
            writeNotes.close(); // Close the file after writing
            cout << "Note saved successfully!" << endl;
        }
        else
        {
            cout << "Something went wrong." << endl;
        }
    }
    //Will implement other choices here later:

    return 0;
}