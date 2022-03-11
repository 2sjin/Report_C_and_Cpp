#pragma once
#include <conio.h>
#include "Schedule.h"
#include "Console.h"

Schedule::Schedule() {
    seat = new Seat[8];
}
Schedule::~Schedule() {
    delete[] seat;
}
void Schedule::setTime(string time) {
    this->time = time;
}
string Schedule::getTime() {
    return time;
}
void Schedule::book() {
    // show(); 삭제
    cout << "\n◈ 예약 정보 입력";  // 추가
    cout << "\n예약 시각  ☞  " << getTime();
    int num = Console::showInputNum();
    if (num < 0 || 7 < num) {
        cout << "\n입력 범위를 초과하였습니다.\n";
        _getch();
    }
    else if (seat[num].getName() != "---") {
        cout << "\n이미 예약된 좌석입니다.\n";
        _getch();
    }
    else {
        string name = Console::showInputName();
        seat[num].setName(name);
        cout << "\n아무 키나 누르면 예약이 완료됩니다.\n";
        _getch();
    }
}
void Schedule::cancel() {
    // show(); 삭제
    cout << "\n◈ 취소 정보 입력";  // 추가
    cout << "\n취소 시각  ☞  " << getTime();
    int num = Console::showInputNum();
    if (num < 0 || 7 < num) {
        cout << "\n 입력 범위를 초과하였습니다.\n";
        _getch();
    }
    else if (seat[num].getName() == "---") {
        cout << "\n이미 빈 좌석입니다.\n";
        _getch();
    }
    else {
        string name = Console::showInputName();
        if (name == seat[num].getName()) {
            seat[num].resetName();
            cout << "\n아무 키나 누르면 예약 취소가 완료됩니다.\n";
            _getch();
        }
        else
            cout << "\n일치하지 않은 이름입니다. \n" << endl;
            _getch();
    }
}

void Schedule::show() {
    cout << this->time << ":  ";
    for (int i = 0; i < 8; i++)
        cout << seat[i].getName() << "\t";
    cout << endl;
}