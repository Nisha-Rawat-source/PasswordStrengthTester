//in the given code i am passing the password at run time 

#include <iostream>
#include <vector>
using namespace std;

/*given is the function checking the strength of the password
these are my constrains for the strong password or to pass the test
-> password should contain aleast one specail character
-> it should have 8 characters 
-> should contain some numbers*/

bool validate_password(string password) {

    // this condition is checking whether password have 8 characters
    if (password.length() < 8) {
        return false;
    }

    //these variable will help in checking whether number and special character exist or not
    bool hasNumber = false;
    bool hasSpecial = false;

    string specialCharacters = "!@#$%^&*";

    // checking the character in password one by one
    for (int i = 0; i < password.length(); i++) {

        char ch = password[i];

        // Checking if character is a number
        if (ch >= '0' && ch <= '9') {
            hasNumber = true;
        }

        // Checking if character is special character
        for (int j = 0; j < specialCharacters.length(); j++) {
            if (ch == specialCharacters[j]) {
                hasSpecial = true;
            }
        }
    }

    //if bhot the conditon are true the it will return true otherwise false
    return hasNumber && hasSpecial;
}


int main() {

    vector<string> passwords;

    //no. of times user want to give password
    int n;

    cout << "Enter number of passwords: ";
    //taking input from user for no. of passwords
    cin >> n;

    //taking the input(password) one by one
    for (int i = 0; i < n; i++) {
        string pwd;
        cout << "Enter password " << i + 1 << ": ";
        cin >> pwd;
        passwords.push_back(pwd);
    }

    cout << "Password test results" << endl;

    //calling validate_password function of each string and printing result
    for (string pwd : passwords) {
        if (validate_password(pwd)) {
            cout << pwd << ": PASS" << endl;
        } else {
            cout << pwd << ": FAIL" << endl;
        }
    }

    return 0;
}
