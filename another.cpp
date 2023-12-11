#include <iostream>
using namespace std;

int main() {
    // Display initial menu
  while (true){
  
    cout << " [      ] \n" << "  1 2 3 \n" << "  4 5 6 \n" << "  7 8 9 \n" << "  * 0 #\n" << endl;

    string myString;
    cin >> myString;

    // Check if the user entered the special code
    if (myString == "*999#") {
        int x;
        // Display welcome menu after *999# request
        cout << "Welcome to ethiogebeta \n" << "1, packages\n" << "2, my services \n" << endl;
        cin >> x;

        if (x == 1) {
            // Handle packages
            int packageChoice;
            cout << "1, internet \n" << "2, voice\n" << "3, text\n";
            cin >> packageChoice;

            if (packageChoice == 1) {
                // Handle internet packages
                int internetChoice;
                cout << "1, daily\n" << "2, weekly \n" << "3, monthly \n";
                cin >> internetChoice;

                if (internetChoice == 1) {
                    // Handle daily internet package
                    cout << "1, 50MB for 3 birr\n" << "2, 100MB for 10 birr\n" << "3, 200MB for 15 birr\n";
                } else if (internetChoice == 2) {
                    // Handle weekly internet package
                    cout << "1, 500MB for 30 birr\n" << "2, 100MB for 50 birr \n";
                } else if (internetChoice == 3) {
                    // Handle monthly internet package
                    cout << "1, 2000MB for 50 birr\n" << "2, 500MB for 100 birr\n" << "3, 5000MB for 150 birr\n";
                } else {
                    cout << "Incorrect operation. Please return to the main page" << endl;
                }
            } else if (packageChoice == 2) {
                // Handle voice packages
                // Similar structure as internet packages, adapt as needed
                  int voicechoice;
                cout << "1, daily\n" << "2, weekly \n" << "3, monthly \n";
                cin >> voicechoice;
                
                if (voicechoice == 1) {
                    // Handle daily voice package
                    cout << "1, 50MB for 3 birr\n" << "2, 100MB for 10 birr\n" << "3, 200MB for 15 birr\n";
                } else if (voicechoice == 2) {
                    // Handle weekly voice package
                    cout << "1, 500MB for 30 birr\n" << "2, 100MB for 50 birr \n";
                } else if (voicechoice == 3) {
                    // Handle monthly voice package
                    cout << "1, 2000MB for 50 birr\n" << "2, 500MB for 100 birr\n" << "3, 5000MB for 150 birr\n";
                } else {
                    cout << "Incorrect operation. Please return to the main page" << endl;
                }
            } else if (packageChoice == 3) {
            
                // Handle text packages
                // Similar structure as internet packages, adapt as needed
                int textchoice;
                cout << "1, daily\n" << "2, weekly \n" << "3, monthly \n";
                cin >> textchoice;
                 if (textchoice == 1) {
                    // Handle daily text package
                    cout << "1, 50MB for 3 birr\n" << "2, 100MB for 10 birr\n" << "3, 200MB for 15 birr\n";
                } else if (textchoice == 2) {
                    // Handle weekly text package
                    cout << "1, 500MB for 30 birr\n" << "2, 100MB for 50 birr \n";
                } else if (textchoice == 3) {
                    // Handle monthly texxt package
                    cout << "1, 2000MB for 50 birr\n" << "2, 500MB for 100 birr\n" << "3, 5000MB for 150 birr\n";
                }else if (textchoice==0){
                       break;
                }else {
                    cout << "Incorrect operation. Please return to the main page" << endl;
                }
            } else {
                cout << "Incorrect operation. Please return to the main page" << endl;
            }
        } else if (x == 2) {
            // Handle my services
            // Add your code for handling my services choices
        } else {
            cout << "Incorrect operation. Please return to the main page" << endl;
        }
    } else {
        cout << "Invalid request please try again" << endl;
    }
  }
    return 0;
}
