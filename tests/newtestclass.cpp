/*
 * File:   newtestclass.cpp
 * Author: Ivan
 *
 * Created on Nov 3, 2013, 10:39:42 PM
 */

#include "newtestclass.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

int game(int number);

void newtestclass::testGame_01() {
    int number = 5;
    int result = game(number);
    int expected = 594;
    CPPUNIT_ASSERT_EQUAL_MESSAGE("Input   : 5", expected, result);
}

void newtestclass::testGame_02() {
    int number = 2;
    int result = game(number);
    int expected = 297;
    CPPUNIT_ASSERT_EQUAL_MESSAGE("Input   : 2", expected, result);
}

void newtestclass::testGame_03() {
    int number = 7;
    int result = game(number);
    int expected = 792;
    CPPUNIT_ASSERT_EQUAL_MESSAGE("Input   : 7", expected, result);
}

void newtestclass::testGame_04() {
    int number = 9;
    int result = game(number);
    int expected = 990;
    CPPUNIT_ASSERT_EQUAL_MESSAGE("Input   : 9", expected, result);
}
