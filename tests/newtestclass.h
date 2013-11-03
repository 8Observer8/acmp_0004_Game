/*
 * File:   newtestclass.h
 * Author: Ivan
 *
 * Created on Nov 3, 2013, 10:39:42 PM
 */

#ifndef NEWTESTCLASS_H
#define	NEWTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass);

    CPPUNIT_TEST(testGame_01);
    CPPUNIT_TEST(testGame_02);
    CPPUNIT_TEST(testGame_03);
    CPPUNIT_TEST(testGame_04);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass();
    virtual ~newtestclass();
    void setUp();
    void tearDown();

private:
    void testGame_01();
    void testGame_02();
    void testGame_03();
    void testGame_04();
};

#endif	/* NEWTESTCLASS_H */

