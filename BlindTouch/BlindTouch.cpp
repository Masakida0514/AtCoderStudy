#include <bits/stdc++.h>
#include <Windows.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_1(i, n) for (int i = 1; i < (int)(n+1); i++)

int GetRandom(int min, int max){
    static int flag;

    if (flag == 0) {
        srand((unsigned int)time(NULL));
        flag = 1;
    }

    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}


int main() {
    int sel;
    string s;
    cout << "Select the mode" << endl;
    cout << "1 : center" << endl << "2 : upper" << endl << "3 : lower" << endl;
    cout << "type : ";
    cin >> sel;

    if(sel == 1){
        cout << "You select center" << endl;
        s = "asdfghjkl";
    } else if (sel == 2){
        cout << "You select upper" << endl;
        s = "qwertyuiop";
    } else {
        cout << "You select lower" << endl;
        s = "zxcvbnm";
    }

    while(true){
        int random = GetRandom(0,s.size()-1);
        int music = GetRandom(0,4);
        cout << "Enter :" << s[random] << endl;
        char inp;
        cin >> inp;
        if (inp == s[random]){
            cout << "correct" << endl;
            string good = "wavs/good4";
            good += music;
            good += ".wav";
            // PlaySound(good, NULL , SND_FILENAME);
        } else {
            cout << "Fool!" << endl;
            string bad = "wavs/bad4";
            bad += music;
            bad += ".wav";
            // PlaySound(bad, NULL , SND_FILENAME);
        }
    }
}