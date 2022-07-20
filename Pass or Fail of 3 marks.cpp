#include <iostream>
#include<string>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };
void readMarks(int& mark1, int& mark2, int& mark3) {
    cout << "Enter the first mark" << endl;
    cin >> mark1;
    cout << "Enter the second mark" << endl;
    cin >> mark2;
    cout << "Enter the third mark" << endl;
    cin >> mark3;
}
float calcAverage(int mark1, int mark2, int mark3) {
    return (mark1 + mark2 + mark3) / 3;
}
enPassFail decide(float average) {
    if(average>=50){
        return enPassFail::Pass;
    }
    else {
        return enPassFail::Fail;

    }
}
void printResult(enPassFail result){
    if (result == enPassFail::Pass)
        cout << "Passed" << endl;
    else
        cout << "Failed" << endl;

}
//void printMarks(int mark1, int mark2, int mark3) {
//    cout << mark1 << endl;
//    cout << mark2 << endl;
//    cout << mark3 << endl;
//}
int main()
{
    int mark1;
    int mark2;
    int mark3;
    readMarks(mark1, mark2, mark3);
    printResult(decide(calcAverage(mark1, mark2, mark3)));

}

