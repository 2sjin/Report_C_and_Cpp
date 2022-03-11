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
    // show(); ����
    cout << "\n�� ���� ���� �Է�";  // �߰�
    cout << "\n���� �ð�  ��  " << getTime();
    int num = Console::showInputNum();
    if (num < 0 || 7 < num) {
        cout << "\n�Է� ������ �ʰ��Ͽ����ϴ�.\n";
        _getch();
    }
    else if (seat[num].getName() != "---") {
        cout << "\n�̹� ����� �¼��Դϴ�.\n";
        _getch();
    }
    else {
        string name = Console::showInputName();
        seat[num].setName(name);
        cout << "\n�ƹ� Ű�� ������ ������ �Ϸ�˴ϴ�.\n";
        _getch();
    }
}
void Schedule::cancel() {
    // show(); ����
    cout << "\n�� ��� ���� �Է�";  // �߰�
    cout << "\n��� �ð�  ��  " << getTime();
    int num = Console::showInputNum();
    if (num < 0 || 7 < num) {
        cout << "\n �Է� ������ �ʰ��Ͽ����ϴ�.\n";
        _getch();
    }
    else if (seat[num].getName() == "---") {
        cout << "\n�̹� �� �¼��Դϴ�.\n";
        _getch();
    }
    else {
        string name = Console::showInputName();
        if (name == seat[num].getName()) {
            seat[num].resetName();
            cout << "\n�ƹ� Ű�� ������ ���� ��Ұ� �Ϸ�˴ϴ�.\n";
            _getch();
        }
        else
            cout << "\n��ġ���� ���� �̸��Դϴ�. \n" << endl;
            _getch();
    }
}

void Schedule::show() {
    cout << this->time << ":  ";
    for (int i = 0; i < 8; i++)
        cout << seat[i].getName() << "\t";
    cout << endl;
}