#ifndef clock_h
#define clock_h

#include "lib.h"
#include "Config.h"
#include "Time.h"
#include <chrono>
#include <Windows.h>

struct Clock
{
private:
    Config config;
    Time* time;
    bool is_hours_changed;
    bool is_minutes_changed;
    bool is_seconds_changed;

public:
    Clock();
    Clock(Config config, Time time);

    // Getters
    Config get_config();
    Time get_time();

    // Setters
    void set_config(Config config);
    void set_time(Time time);

    // Methods
    void update();
    void show();

private:
    void show_h();
    void show_m();
    void show_s();
    int show_digits(short number, int x, int y);
    void reset();
    void show_border(int x, int y);
    void output_digit(short number, int x, int y);
    void output_dots(bool flag, int x, int y);
    void setcursor(bool visible, DWORD size);
};

#endif