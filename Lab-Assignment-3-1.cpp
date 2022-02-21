/*==============================================================================================================
Class:          CIS 054
Assignment:     Lab Assignment 3-1
Name:           Jeffrey Leong
Date:           Feb 20, 2022

Purpose:        Tree ASCII Art
Input:          number of desired trees
Output:         number of desired trees in ASCII Art
===============================================================================================================*/

#include<iostream>
using namespace std;
int main()
{
    // Intro
    cout << "/ ======================================================= \\" << endl;
    cout << "/                     Trees are Magical                   \\" << endl;
    cout << "/ ======================================================= \\" << endl;
    cout << endl;

    // Variables
    int number;
    int length = 9;
    char ans;
    
    do {
        // Ask for user input
        cout << "How many trees, my beloved customer, do you want to see? ";
        cin >> number;

        // For-loop
        for (int b=1; b<=length; b++) { 
            for (int x=length-1; x>=b; x--){
                cout << "_";
            }
        for (int x = 1; x<=b; x++){
            cout<< "*";
        }
            cout << endl;
        }

        // Try again?
        cout << "Do you want to see the trees again? ";
        cin >> ans;
        } while (ans == 'y' || ans == 'Y');
        return 0;
    }
    
    
    




/*=================================================================================================================================================
Problems I had working on this assignment (and how I overcame these problems)

1. I had major issues with this assignment and the practice problems. I read the book, watched the assigned youtube videos, and 
did the quiz. But when it came to this assignment, I didn't even know how to start it. I understand the for loop and how it is used to count a iteration,
but when I got to this assignment, I didn't know how to how to apply it.

2. I guess when it comes to setting up variables properly, applying the loop, and the logic when nesting a for loop, I got stuck. I know for sure, my 
variables and the expressions in my for loop are completely wrong. But I don't know why they are wrong and this is why I am stuck on this assignment. 

Others things I would like to share:

1. I understand the do-while loop. The book helped. There was an example of how to use the do-while loop and I applied it 
to the problem. 

2. I worked on the practice problems. I didn't know where to start with those but looking online helped a bit. I tried to do version 2 of the 
hw assignment. I got stuck at multiple parts. Here are some questions I had after reading the assignment:

    - After asking the user how many trees, how do I write the code to display the desired number of trees, one after the other, like in the demo?
    - How do I get the program to output the underscores and the stars without manually writing it in?
    - You had mentioned that the program were use if-else statements but I am not sure where it would be applied. I do know how to use an if-else statement.
    - I guess I just need more practice problems with the for loop. I wish I had both questions and answers to look at. So that I can do the problems,
      and compare my answer to the right answer.
====================================================================================================================================================*/