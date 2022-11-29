#include "gtest/gtest.h"
#include "copy.h"

namespace {
TEST(copy_test, return_dest) {
  char src[] = "hello";
  char dst[sizeof(src)];
  void *rv = copy(dst, src, sizeof(src));
  ASSERT_EQ(rv,dst);
}

TEST(copy_test, string) {
  char src[] = "hello";
  char dst[sizeof(src)];
  copy(dst, src, sizeof(src));
  ASSERT_STREQ(dst,src);
}
}
/*
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
*/
