
# Password Strength Tester

## 1. Project Title & Goal
A C++ program that checks if passwords are strong based on length, numbers, and special characters.

## 2. Setup Instructions

g++ main_v1.cpp -o password_checker    # Version 1
./password_checker

g++ main_v2.cpp -o password_checker    # Version 2
./password_checker

g++ main_v3.cpp -o password_checker    # Version 3 (runtime input)
./password_checker


## How I Thought

I developed this project in three steps:

Version 1 (Less Optimized)

Used simple loops to check each character for numbers and special characters.

Worked correctly but was a bit repetitive.

Version 2 (Optimized)

Cleaned up the code to make it shorter and easier to read.

Logic is the same but more structured.

Version 3 (Runtime Input)

Allowed users to enter passwords during program execution.

Makes the program interactive and more practical.

The hardest part was checking for special characters, which I solved by comparing each character to a predefined string of specail characters.

I got stuck at the special character part.

## Output Screenshots

Version 1 (Less Optimized):
![main output](C:\Users\nisha\Desktop\Password Strength Tester\PasswordStrengthTester\screenshot\version1_output.png)


Version 2 (Optimized):
![main output](PasswordStrengthTester\screenshot\version2_output.png)

Version 3 (Runtime Input):
![main output](PasswordStrengthTester\screenshot\version3_output.png)

## Future Improvements

Use regex for cleaner password validation

Add password strength scoring (weak, medium, strong)

Accept more special characters

Accept capital letters

Improve user input handling (spaces, long passwords)

Not using this code directly in ui when merged with frontend