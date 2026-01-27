# PasswordStrengthTester

# Project Goal:
A simple C++ program to check password strength by validating:
- Minimum length of 8 characters
- At least one number
- At least one special character

# How I Thought

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

The hardest part was checking for special characters without using any advanced functions, which I solved by comparing each character to a predefined list.

I got stuck at the special character part.

# Future Improvements

Use regex for cleaner password validation

Add password strength scoring (weak, medium, strong)

Accept more special characters

Accept capital letters

Improve user input handling (spaces, long passwords)

Not using this code directly in ui when merged with frontend