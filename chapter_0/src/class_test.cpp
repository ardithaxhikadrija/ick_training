#include "class_test.hpp"

ClassTest::ClassTest(int _param)
{
    this->setTestParameter(_param);
}

void ClassTest::setTestParameter(int _param)
{
    this->test = _param;
}

int ClassTest::getTestParameter(void)
{
    return this->test;
}

int ClassTest::sum(int a, int b)
{
    return a + b;
}

double ClassTest::sum(double a, double b)
{
    return a + b;
}