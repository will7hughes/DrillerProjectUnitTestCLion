#include "DrillingRecord.h"
#include "Exceptions.h"
#include <iomanip>

DrillingRecord::DrillingRecord() {
    std::fill(nums, nums + MAX_NUMS, 0);
}

// puts num in array, increments counter
void DrillingRecord::addNum(double num) {
    nums[numCtr] = num;
    numCtr++;
}


// returns (copy of) num at index in num array
double DrillingRecord::getNum(unsigned int index) const{
    return nums[index];
}
