#pragma once
#include <iostream>
#include "Console.h"
using namespace std;

void Console::Intro() { // ����
    cout << "��������������������������" << endl;
    cout << "��                                              ��" << endl;
    cout << "��      �Ѽ��װ��� ���� ���� ȯ���մϴ�!        ��" << endl;
    cout << "��                                              ��" << endl;
    cout << "��������������������������" << endl;
}
int Console::showMenu() {
    int inValue;
    cout << "\n[ ���� : 1 ]  [ ��� : 2 ]  [ ������ : 3 ]  ��  ";    // ����
    cin >> inValue;
    return inValue;
}
int Console::showTime() {
    int inValue;
    cout << "\n[ 07�� : 1 ]  [ 12�� : 2 ]  [ 17�� : 3 ]  ��  ";    // ����
    cin >> inValue;
    return inValue - 1;
}
int Console::showInputNum() {
    int inValue;
    cout << "\n�¼� ��ȣ  ��  ";
    cin >> inValue;
    return inValue - 1;
}
string Console::showInputName() {
    string inValue;
    cout << "�̸� �Է�  ��  ";
    cin >> inValue;
    return inValue;
}