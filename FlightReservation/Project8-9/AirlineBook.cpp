#pragma once
#include <conio.h>
#include "AirlineBook.h"
#include "Console.h"

AirlineBook::AirlineBook() {
    schedule = new Schedule[3];
    schedule[0].setTime("07��");
    schedule[1].setTime("12��");
    schedule[2].setTime("17��");
}
AirlineBook::~AirlineBook() {
    delete[] schedule;
}
void AirlineBook::start() {         // ����
    int s;
    while (true) {
        system("cls");
        Console::Intro();
        cout << "\n�� �¼� ��Ȳ\n";  // �߰�
        for (int i = 0; i < 3; i++) {
            schedule[i].show();
        }
        cout << "\n�� �޴�";  // �߰�
        switch (Console::showMenu()) {
        case 1:
            cout << "\n�� ���� �ð�";  // �߰�
            s = Console::showTime();
            if (s < 0 || 2 < s) {
                cout << "\n�Է� ������ �ʰ��Ͽ����ϴ�.\n";
            _getch();
        }
            else
                schedule[s].book();
            break;
        case 2:
            cout << "\n�� ��� �ð�";  // �߰�
            s = Console::showTime();
            if (s < 0 || 2 < s) {
                cout << "\n�Է� ������ �ʰ��Ͽ����ϴ�.\n";
                _getch();
            }
            else
                schedule[s].cancel();
            break;
        case 3:	    // ����
            cout << "\n���� �ý����� �����մϴ�.\n\n";
            exit(0);	
            break;
        default:
            cout << "\n�Է� ������ �ʰ��Ͽ����ϴ�.\n";
            _getch();
            break;
        }
    }
}