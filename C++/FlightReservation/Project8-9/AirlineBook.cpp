#pragma once
#include <conio.h>
#include "AirlineBook.h"
#include "Console.h"

AirlineBook::AirlineBook() {
    schedule = new Schedule[3];
    schedule[0].setTime("07시");
    schedule[1].setTime("12시");
    schedule[2].setTime("17시");
}
AirlineBook::~AirlineBook() {
    delete[] schedule;
}
void AirlineBook::start() {         // 수정
    int s;
    while (true) {
        system("cls");
        Console::Intro();
        cout << "\n◈ 좌석 현황\n";  // 추가
        for (int i = 0; i < 3; i++) {
            schedule[i].show();
        }
        cout << "\n◈ 메뉴";  // 추가
        switch (Console::showMenu()) {
        case 1:
            cout << "\n◈ 예약 시각";  // 추가
            s = Console::showTime();
            if (s < 0 || 2 < s) {
                cout << "\n입력 범위를 초과하였습니다.\n";
            _getch();
        }
            else
                schedule[s].book();
            break;
        case 2:
            cout << "\n◈ 취소 시각";  // 추가
            s = Console::showTime();
            if (s < 0 || 2 < s) {
                cout << "\n입력 범위를 초과하였습니다.\n";
                _getch();
            }
            else
                schedule[s].cancel();
            break;
        case 3:	    // 수정
            cout << "\n예약 시스템을 종료합니다.\n\n";
            exit(0);	
            break;
        default:
            cout << "\n입력 범위를 초과하였습니다.\n";
            _getch();
            break;
        }
    }
}