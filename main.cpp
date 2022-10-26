#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

vector<int> numList = {};

void genNums(){
    for(int i=0;i<7;i++){
        int newNum = rand() % 49 + 1;
        numList.push_back(newNum);
    }
}
void getNumList(){
    cout << "[";

    for(int k=0;k<numList.size();k++){
        if(k==6){
            cout << numList[k];
            break;
        }
        cout << numList[k] << ", ";
    }

    cout << "]" << endl;
}
bool checkEqual(vector<int> aList){
    if(aList == numList)
        return true;
    return false;
}

int main() {
    genNums();

    vector<int> userList = {};

    for(int j=0;j<7;j++){
        int a = 0;
        cout << "Please enter a number: " << endl;
        cin >> a;
        userList.push_back(a);
    }

    cout << "The numbers are:";

    getNumList();

    if(checkEqual(userList)){
        cout << "Congratulations!!!!!!!!!!!!";
    }
    else{
        cout << "See you next time!";
    }

    return 0;
}
