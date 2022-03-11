#include<iostream>
using namespace std;

#include "Project8-9.h"

// Console
void Console::Intro() {
    cout << "***** 한성항공에 오신것을 환영합니다 *****" << endl;
}
int Console::showMenu() {
    int inValue;
    cout << endl << "예약:1, 취소:2, 보기:3, 끝내기:4 >> ";
    cin >> inValue;
    return inValue;
}
int Console::showTime() {
    int inValue;
    cout << "07시:1, 12시:2, 17시:3 >> ";
    cin >> inValue;
    return inValue - 1;
}
int Console::showInputNum() {
    int inValue;
    cout << "좌석 번호 >> ";
    cin >> inValue;
    return inValue - 1;
}
string Console::showInputName() {
    string inValue;
    cout << "이름 입력 >> ";
    cin >> inValue;
    return inValue;
}


// Seat
Seat::Seat() { 
    resetName();
}
void Seat::setName(string name) {
    this->name = name;
}
void Seat::resetName() {
    setName("---");
}
string Seat::getName() {
    return name;
}


// Schedule
Schedule::Schedule() {
    seat = new Seat[8];
}
Schedule::~Schedule() {
    delete[ ] seat; 
}
void Schedule::setTime(string time) { 
    this->time = time;
}
string Schedule::getTime() {
    return time;
}
void Schedule::book() {
    show();
    int num = Console::showInputNum();
    if (num < 0 || 7 < num)
        cout << "입력 범위를 초과하였습니다." << endl;
    else if (seat[num].getName() != "---")
        cout << "이미 예약된 좌석입니다." << endl;
    else {
        string name = Console::showInputName();
        seat[num].setName(name);
        cout << "예약이 완료되었습니다." << endl;
    }
}
void Schedule::cancel() {
    show();
    int num = Console::showInputNum();
    if (seat[num].getName() != "---") {
        string name = Console::showInputName();
        if (name == seat[num].getName()) {
            seat[num].resetName();
            cout << "취소가 완료되었습니다. " << endl;
        }
        else
            cout << "일치하지 않은 이름입니다. " << endl;
    }
    else
        cout << "이미 빈 좌석입니다." << endl;
}

void Schedule::show() {
    cout << this->time << ":  ";
    for (int i = 0; i < 8; i++)
        cout << seat[i].getName() << "\t";
    cout << endl;
}


// AirlineBook
AirlineBook::AirlineBook() {
    schedule = new Schedule[3];
    schedule[0].setTime("07시");
    schedule[1].setTime("12시");
    schedule[2].setTime("17시");
}
AirlineBook::~AirlineBook() {
    delete[ ] schedule;
}
void AirlineBook::start() {
    Console::Intro();
    int s;
    while (true) {
        switch (Console::showMenu()) {
            case 1:
                s = Console::showTime();
                if (s < 0 || 2 < s)
                    cout << "입력 범위를 초과하였습니다." << endl;
                else
                    schedule[s].book();
                break;
            case 2:
                s = Console::showTime();
                if (s < 0 || 2 < s)
                    cout << "입력 범위를 초과하였습니다." << endl;
                else
                    schedule[s].cancel();
                break;
            case 3:
                for (int i = 0; i < 3; i++)
                    schedule[i].show();
                break;
            case 4:
                cout << "예약 시스템을 종료합니다." << endl;
                exit(0);
                break;
            default:
                cout << "입력 범위를 초과하였습니다." << endl;
                break;
        }
    }
}


// main
int main() {
    AirlineBook* air = new AirlineBook();
    air->start();
    delete air;
}
