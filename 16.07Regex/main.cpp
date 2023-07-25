#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool validateUsername(const string& username) {
    regex regex("^[a-zA-Z0-9]+$");
    return regex_match(username, regex);
}

bool validatePassword(const string& password) {
    regex regex("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d).{8,}$");
    return regex_match(password, regex);
}

bool userRegistration(){
    string username , password;

    cout<<"Enter username"<<endl;
    cin>>username;


    try {
        if (!validateUsername(username)) {
            throw invalid_argument("Invalid username!");
        }

        cout << "Password: ";
        cin >> password;

        if (!validatePassword(password)) {
            throw invalid_argument("Invalid password!");
        }



        cout << "Successful registration!\n";
        return true;
    } catch (const exception& e) {
        cout << "Registartion error: " << e.what() << "\n";
        return false;
    }
}

bool userLogin(){
    string username,  password;

    cout << "User Login"<<endl;
    cout<<"Enter username"<<endl;
    cin>>username;
    try {
        cout << "Password: ";
        cin >> password;



        cout << "Login successful!\n";
        return true;
    } catch (const exception& e) {
        cout << "Login unsuccessful: " << e.what() << "\n";
        return false;
    }
}
int main(){
    int choice;

    cout << "1. Registration\n";
    cout << "2. Login\n";
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
        userRegistration();
    } else if (choice == 2) {
        userLogin();
    } else {
        cout << "Inadmissible selection!\n";
    }

    return 0;

}


