#include<iostream>
#include<cstdlib>
using namespace std;
void nimGame(int end, int max) {
    int runningNum = 0;
    int playerTurn = 1;
    while(runningNum < end) {
        int pick;
        cout << "Player " << playerTurn << ", pick a number between 1 and " << max << ": ";
        cout << endl << endl;
        do {
            cin >> pick;
            if(pick > max || pick < 1) {
                cout << "Invalid choice! Pick between 1 and " << max << ". Try again." << endl << endl;
                continue;
            }
            else if(pick + runningNum > end) {
                cout << endl << endl << "The entered number will be greater than the target number, please enter smaller number" << endl;
                continue;
            }
        } while(pick > max || pick < 1 || pick + runningNum > end);
        runningNum = runningNum + pick;
        cout << endl << endl << "Runnning number: " << runningNum << endl << endl;
        if(runningNum == end) {
            cout << "Player " << playerTurn << " loses!" << endl << endl;
            break;
        }
        playerTurn = (playerTurn == 1) ? 2 : 1;
    }
}
int main() {
    system("cls");
    cout << "########## WELCOME TO NIM GAME ##########" << endl;
    cout << endl;
    int endNumber, maxPick;
    cout << "Enter the end number to reach: ";;
    cin >> endNumber;
    cout << endl << endl;
    cout << "Enter the maximum number a player can pick per turn: ";
    cin >> maxPick;
    cout << endl << endl;
    nimGame(endNumber, maxPick);
    return 0;
}