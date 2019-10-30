// Do not add or modify anything in this file.

#ifndef DRILLING_RECORD_H
#define DRILLING_RECORD_H

#include <iostream>
#include "Exceptions.h"

const unsigned int MAX_NUMS = 16;                              // the maximum numeric fields in each record
const unsigned int MAX_STRINGS = 2;                            // the maximum string fields in each record

class DrillingRecord {

    // overloaded output operator that sends one formatted record to ostream
    friend std::ostream& operator<<(std::ostream& os, const DrillingRecord& record);

private:
    double nums[MAX_NUMS];                                     // holds the numeric data, in column order
    unsigned int numCtr = 0;                                   // count the number of strings added to the record
public:
    DrillingRecord();                                          // no arg constructor; initializes all nums to 0.0 and all strings to ""

    // the following member functions must throw new ExceptionIndexOutOfRange if attempts are made to add too many values
    void addNum(double num);                                   // puts num in array, increments counter

    // the following member functions must throw new ExceptionIndexOutOfRange if index is too large
    double getNum(unsigned int index) const;                   // returns (copy of) num at index in num array
};

// You must create a corresponding DrillingRecord.cpp file to implement this class.

#endif
