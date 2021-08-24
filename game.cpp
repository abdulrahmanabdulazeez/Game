#include <iostream>
#include <string>
using namespace std;

void myQuestions(),myHelp();

int main(){
cout << "======================\n";
cout << "SIMPLE RIDDLE GAME V2\n";
cout << "======================\n\n";
cout << "[1] Start Game\n";
cout << "[2] Help\n";
cout << "[3] Quit\n\n";
cout << "Select an option (1/2/3):\n";
string opt;

while (opt != "1","2","3"){
        cin >> opt;
        cout << "Invalid option!\n\n";
if (opt == "1"){
    myQuestions();
}
else if (opt == "2"){
    myHelp();
}
else if (opt == "3"){
    return 0;
}
else {
    //Nothing else!!;
}

cout << "[1] Start Game\n";
cout << "[2] Help\n";
cout << "[3] Quit\n\n";
cout << "Select an option (1/2/3):\n";
}

main();

return 0;
}
void myQuestions(){

int scr;

string one, two, three, four, five, six, seven, eight, nine, ten;
cout << "\n";
cout << "Q1\n";
cout << "What English word has three consecutive double letters?\n";
cin >> one;
if (one == "bookkeeper"){
    cout << "==========\n";
    cout << " Correct!!\n";
    cout << "==========\n\n";
    scr ++;
}
else if (one == "Bookkeeper"){
    cout << "==========\n";
    cout << " Correct!!\n";
    cout << "==========\n\n";
    scr ++;
}
else {
    cout << "========\n";
    cout << " Wrong!!\n";
    cout << "========\n\n";
}
cout << "Q2\n";
cout << "I have cities, but no houses. I have mountains, but no trees. I have water, but no fish. What am I??\n";
cin >> two;
if (two == "map"){
    cout << "==========\n";
    cout << " Correct!!\n";
    cout << "==========\n\n";
    scr ++;
}
else if (two == "Map"){
    cout << "==========\n";
    cout << " Correct!!\n";
    cout << "==========\n\n";
    scr ++;
}
else {
    cout << "========\n";
    cout << " Wrong!!\n";
    cout << "========\n\n";
}
cout << "Q3\n";
cout << "Which word in the dictionary is always spelled incorrectly?\n";
cin >> three;
if (three == "incorrectly"){
    cout << "==========\n";
    cout << " Correct!!\n";
    cout << "==========\n\n";
    scr ++;
}
else if (three == "Incorrectly"){
    cout << "==========\n";
    cout << " Correct!!\n";
    cout << "==========\n\n";
    scr ++;
}
else {
    cout << "========\n";
    cout << " Wrong!!\n";
    cout << "========\n\n";
}
cout << "Q4\n";
cout << "What is seen in the middle of March and April that cannot be seen at the beginning or end of either month?\n";
cin >> four;
if (four == "r"){
    cout << "==========\n";
    cout << " Correct!!\n";
    cout << "==========\n\n";
    scr ++;
}
else if (four == "R"){
    cout << "==========\n";
    cout << " Correct!!\n";
    cout << "==========\n\n";
    scr ++;
}
else {
    cout << "========\n";
    cout << " Wrong!!\n";
    cout << "========\n\n";
}
cout << "Q5\n";
cout << "You measure my life in hours and I serve you by expiring. I'm quick when I'm thin and slow when I'm fat. The wind is my enemy.\n";
cin >> five;
if (five == "candle"){
    cout << "==========\n";
    cout << " Correct!!\n";
    cout << "==========\n\n";
    scr ++;
}
else if (five == "Candle"){
    cout << "==========\n";
    cout << " Correct!!\n";
    cout << "==========\n\n";
    scr ++;
}
else {
    cout << "========\n";
    cout << " Wrong!!\n";
    cout << "========\n\n";
}
cout << "Q6\n";
cout << "What disappears as soon as you say its name?\n";
cin >> six;
if (six == "silence"){
    cout << "==========\n";
    cout << " Correct!!\n";
    cout << "==========\n\n";
    scr ++;
}
else if (six == "Silence"){
    cout << "==========\n";
    cout << " Correct!!\n";
    cout << "==========\n\n";
    scr ++;
}
else {
    cout << "========\n";
    cout << " Wrong!!\n";
    cout << "========\n\n";
}
cout << "Q7\n";
cout << "I have keys, but no locks and space, and no rooms. You can enter, but you cannot go outside. What am I?\n";
cin >> seven;
if (seven == "Keyboard"){
    cout << "==========\n";
    cout << " Correct!!\n";
    cout << "==========\n\n";
    scr ++;
}
else if (seven == "Keyboard"){
    cout << "==========\n";
    cout << " Correct!!\n";
    cout << "==========\n\n";
    scr ++;
}
else {
    cout << "========\n";
    cout << " Wrong!!\n";
    cout << "========\n\n";
}
cout << "Q8\n";
cout << "This belongs to you, but everyone else uses it.\n";
cin >> eight;
if (eight == "name"){
    cout << "==========\n";
    cout << " Correct!!\n";
    cout << "==========\n\n";
    scr ++;
}
else if (eight == "Name"){
    cout << "==========\n";
    cout << " Correct!!\n";
    cout << "==========\n\n";
    scr ++;
}
else {
    cout << "========\n";
    cout << " Wrong!!\n";
    cout << "========\n\n";
}
cout << "Q9\n";
cout << "What gets wet while drying?\n";
cin >> nine;
if (nine == "towel"){
    cout << "==========\n";
    cout << " Correct!!\n";
    cout << "==========\n\n";
    scr ++;
}
else if (nine == "Towel"){
    cout << "==========\n";
    cout << " Correct!!\n";
    cout << "==========\n\n";
    scr ++;
}
else {
    cout << "========\n";
    cout << " Wrong!!\n";
    cout << "========\n\n";
}
cout << "Q10\n";
cout << "I come from a mine and get surrounded by wood always. Everyone uses me. What am I?\n";
cin >> ten;
if (ten == "pencil(lid)"){
    cout << "==========\n";
    cout << " Correct!!\n";
    cout << "==========\n\n";
    scr ++;
}
else if (ten == "Pencil(lid)"){
    cout << "=======";
    cout << "Correct!!\n\n";
    cout << "=======";
    scr ++;
}
else {
    cout << "========\n";
    cout << " Wrong!!\n";
    cout << "========\n\n";
}
cout << "You scored " << scr << " out of 10\n\n";



}
void myHelp(){
cout << "\n";
cout << "This is a simple riddle game that asks you questions (riddles) and then gives you an option to answer.\n";
cout << "There are ten(10) questions and you are required to answer each question that shows up before moving to the next question.\n";
cout << "After answering all questions, your score will be showed to you and then you will be asked if you want to Play again or exit the game.\n";
cout << "Note that you have to select every option given correctly else you won't move further into the game.\n";
int main();
}







