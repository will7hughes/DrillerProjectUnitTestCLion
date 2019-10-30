#include "gtest/gtest.h"
#include "DrillingRecord.h"


class DrillingRecordFixture : public ::testing::Test {

protected:
    virtual void SetUp()
    {
    }

    virtual void TearDown() {
    }
};

TEST_F(DrillingRecordFixture, FirstDayEver){

    DrillingRecord rec;
    rec.addNum(1);

    EXPECT_EQ(rec.getNum(0),1);

}
