#pragma once
#include <iostream>
#include "Console.h"
using namespace std;

void Console::Intro() { // 수정
    cout << "■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
    cout << "■                                              ■" << endl;
    cout << "■      한성항공에 오신 것을 환영합니다!        ■" << endl;
    cout << "■                                              ■" << endl;
    cout << "■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
}
int Console::showMenu() {
    int inValue;
    cout << "\n[ 예약 : 1 ]  [ 취소 : 2 ]  [ 끝내기 : 3 ]  ☞  ";    // 수정
    cin >> inValue;
    return inValue;
}
int Console::showTime() {
    int inValue;
    cout << "\n[ 07시 : 1 ]  [ 12시 : 2 ]  [ 17시 : 3 ]  ☞  ";    // 수정
    cin >> inValue;
    return inValue - 1;
}
int Console::showInputNum() {
    int inValue;
    cout << "\n좌석 번호  ☞  ";
    cin >> inValue;
    return inValue - 1;
}
string Console::showInputName() {
    string inValue;
    cout << "이름 입력  ☞  ";
    cin >> inValue;
    return inValue;
}