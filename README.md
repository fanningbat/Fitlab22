# simplecalculator
The working of a basic calculator.
Including a header file and then starting with the main function straight ahead.
Now we can declare the variables, choice as char and the two input numbers as double.
A series of printf statements where you tell the user what to press for the function they want the calculator to perform. Then using scanf we take user’s input and store it the variable choice.
Then using scanf again, we take two numbers from the user and store it in the variables num1 and num2 respectively. 
After the printf and scanf statements, we can move onto the working of the code. We use a switch statement and make cases based on the user choice. In each case, we perform basic calculator functions (add, subtract, multiply, divide). 
In the last case, which is divide, we used an if-else statement to make sure that num1 is not divided by zero and it generates an error instead. Similarly, we ended the code by the default case, where the user is told that they entered the wrong choice.

The git commands used on Vs code.
We started by initializing git by git init.
Then we moved on to creating a .c file named calculator.c in our opened folder named Simplecalculator.
We added and then committed the file by easy commands: git add and git commit –m”” but before committing, we had to make our identity known. So we entered our user.name and then email.
git config --global user.name "xxx"
git config --global user.email "xx@gmail.com"
Then we create branches in the calculator.c file of each feature, checking out before merging them in the master branch. We then use the url of our github repository and push the commits into it. Next we create the read me file where we add the entire explanation of the code and the git working. After that we add and commit it before pushing it into the github again.
To check if our branches were created, we entered “git branch” which displayed our branch and on which one we are currently at.



