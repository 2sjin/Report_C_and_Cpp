class Console {
public:
    static void Intro();
    static int showMenu();
    static int showTime();
    static int showInputNum();
    static string showInputName();
};

class Seat {
    string name;
public:
    Seat();
    void setName(string name);
    void resetName();
    string getName();
};

class Schedule {
    Seat* seat;
    string time;
public:
    Schedule();
    ~Schedule();
    void setTime(string time);
    string getTime();
    void book();
    void cancel();
    void show();
};

class AirlineBook {
    Schedule* schedule;
public:
    AirlineBook();
    ~AirlineBook();
    void start();
};