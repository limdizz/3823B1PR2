#include <gtest.h>
#include <ctime>
#include<iostream>
using namespace std;
int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
