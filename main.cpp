////in the given code i am not passing the password at run time 

#include <iostream>
#include <vector>
using namespace std;

/*
    This function checks if a password is strong.
    my constrains:
    1 Minimum length of 8 characters
    2 Must contain at least one number
    3 Must contain at least one special character
*/
bool validate_password(string password) {

    //  Checking length 
    if (password.length() < 8) {
        return false;
    }

    bool hasNumber = false;
    bool hasSpecial = false;

    // Checking each character manually
    for (int i = 0; i < password.length(); i++) {

        char ch = password[i];

        // Checking if character is a number (0 to 9)
        if (ch >= '0' && ch <= '9') {
            hasNumber = true;
        }
        // Check if character is a letter (A-Z or a-z)
        else if ((ch >= 'A' && ch <= 'Z') ||
                 (ch >= 'a' && ch <= 'z')) {
            // It is a letter, do nothing
            continue;
        }
        // it is a special character 
        else {
            hasSpecial = true;
        }
    }

  //returning result if no. ans special characters exist
    if (hasNumber && hasSpecial) {
        return true;
    }

    return false;
}

int main() {

    // vector(list) of passwords to test
    vector<string> passwords = {"abc", "123456", "Pass@123", "Admin"};

    cout << "Password test Report" << endl;
    

    for (int i = 0; i < passwords.size(); i++) {

        //function call for each password
        if (validate_password(passwords[i])) {
            cout << passwords[i] << " : PASS" << endl;
        } else {
            cout << passwords[i] << " : FAIL" << endl;
        }
    }

    return 0;
}
