#include<iostream>
class Time {
private:
    int seconds;

public:
    Time() {
       seconds=0;
    }
    Time(int s) {
        seconds =s;

    }

    Time operator+(const Time& other) const {
        return Time(seconds + other.seconds);
    }

    Time operator-(const Time& other) const {
        return Time(seconds - other.seconds);
    }

    Time operator*(int scalar) const {
        return Time(seconds * scalar);
    }

    int toSeconds() const {
        return seconds;
    }

    friend std::istream& operator>>(std::istream& in, Time& t) {
        char c;
        in >> t.seconds >> c >> c >> c;
        return in;
    }

    friend std::ostream& operator<<(std::ostream& out, const Time& t) {
        int minutes = t.seconds / 60;
        int seconds = t.seconds % 60;

        out << minutes << "m:" << seconds << "s";
        return out;
    }
};
