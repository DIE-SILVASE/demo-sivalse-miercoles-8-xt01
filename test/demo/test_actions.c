#include <unity.h>

#include "port_system.h"

#include "demo.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_demo(void) {
    UNITY_TEST_ASSERT_EQUAL_INT32(3, suma(1, 2), __LINE__, "ERROR: suma(1, 2) debe dar igual a 3");
}

int main(void) {
    port_system_init();
    UNITY_BEGIN();

    RUN_TEST(test_demo);
    exit(UNITY_END());
}