#pragma once
#include <iostream>
#include <cmath>
class Field_P{
public:
    Field_P();
    Field_P(Field_P&);
    Field_P(size_t, long);
    ~Field_P();

    Field_P& operator[](size_t);
    Field_P& operator=(Field_P&);
    Field_P& operator=(long);
    Field_P& operator+(Field_P&)const;
    Field_P& operator+(long)const;
    Field_P& operator-(Field_P&)const;
    Field_P& operator-(long)const;
    Field_P& operator*(Field_P&)const;
    Field_P& operator*(long)const;

    friend std::ostream& operator<< (std::ostream& stream, Field_P& ex) {
        stream << "Number: " << ex._data << ", base: " << ex._p;
        return stream;
    }

private:
    size_t _p;
    long _data;

};