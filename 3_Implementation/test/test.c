#include "unity.h"
#include "func.h"

void setUp()
{

}
void tearDown()
{
  
}
void test_availability()
{
    
    int c=1;
    TEST_ASSERT_EQUAL(1,show(c));
    
}

int main()
{
  UNITY_BEGIN();
  
  RUN_TEST(test_availability);
  return UNITY_END();
}