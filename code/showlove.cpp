#include <iostream>
#include <windows.h> // For Windows systems to use Sleep function, for other systems use #include <unistd.h> and usleep
using namespace std;

void printHeart() {
    cout << "    ***       ***    " << endl;
    cout << " *******   *******  " << endl;
    cout << "********* *********" << endl;
    cout << " *****************" << endl;
    cout << "   ************" << endl;
    cout << "     ********" << endl;
    cout << "       ****" << endl;
}

void showMessage() {
    cout << "\nTo My Beautiful Girlfriend," << endl;
    cout << "With every beat of my heart, I love you more and more!" << endl;
    cout << "Thank you for bringing so much joy and love into my life." << endl;
    cout << "Forever and always yours! <3" << endl;
}

int main() {
    cout << "Loading love message...\n" << endl;
    Sleep(1000);  // Pause for 1 second before showing the message
    printHeart();
    Sleep(1000);  // Another pause for effect
    showMessage();
    return 0;
}
