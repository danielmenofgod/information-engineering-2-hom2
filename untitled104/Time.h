
#include<iostream>
#include<string>


class Time {

public:
    Time() {}
    Time(int s) {}

    Time operator+(const Time& other) const ;

    Time operator-(const Time& other) const ;

    Time operator*(int scalar) const;

    int toSeconds() const;


    friend std::istream& operator>>(std::istream& in, Time& t);

    friend std::ostream& operator<<(std::ostream& out, const Time& t);
private:
    int seconds;
};
