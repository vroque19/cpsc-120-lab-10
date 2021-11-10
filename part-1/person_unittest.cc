
/* Do not edit below this line. */
/* Do not edit below this line. */
/* Do not edit below this line. */

#include "person.h"

#include <gtest/gtest.h>

#include <cstdio>
#include <sstream>
#include <string>

namespace {

class PersonTest : public testing::Test {
 protected:
  void SetUp() override {
    p0_ = Person("Rosalynn Carter", "710-111-2222");
    p1_ = Person("Laura Bush", "710-333-4444");
    p2_ = Person("Hillary Clinton", "710-555-6666");
  }

  // void TearDown() override { }

  Person p0_;
  Person p1_;
  Person p2_;
};

TEST_F(PersonTest, GetName) {
  EXPECT_TRUE(p0_.name() == "Rosalynn Carter");
  EXPECT_TRUE(p1_.name() == "Laura Bush");
  EXPECT_TRUE(p2_.name() == "Hillary Clinton");
}

TEST_F(PersonTest, GetPhoneNumber) {
  EXPECT_TRUE(p0_.phone_number() == "710-111-2222");
  EXPECT_TRUE(p1_.phone_number() == "710-333-4444");
  EXPECT_TRUE(p2_.phone_number() == "710-555-6666");
}

TEST_F(PersonTest, SetPhoneNumber) {
  EXPECT_TRUE(p0_.set_phone_number("710-333-4444").phone_number() ==
              "710-333-4444");
  EXPECT_TRUE(p1_.set_phone_number("710-555-6666").phone_number() ==
              "710-555-6666");
  EXPECT_TRUE(p2_.set_phone_number("710-111-2222").phone_number() ==
              "710-111-2222");
}

TEST_F(PersonTest, Write) {
  std::ostringstream message_buffer;
  p0_.write(message_buffer);
  EXPECT_TRUE(message_buffer.str() == "Rosalynn Carter 710-111-2222");
  message_buffer = std::ostringstream();
  p1_.write(message_buffer);
  EXPECT_TRUE(message_buffer.str() == "Laura Bush 710-333-4444");
  message_buffer = std::ostringstream();
  p2_.write(message_buffer);
  EXPECT_TRUE(message_buffer.str() == "Hillary Clinton 710-555-6666");
}

TEST_F(PersonTest, OperatorEqualTo) {
  EXPECT_TRUE(p0_ == p0_);
  EXPECT_FALSE(p1_ == p2_);
}

TEST_F(PersonTest, OperatorNotEqualTo) {
  EXPECT_FALSE(p0_ != p0_);
  EXPECT_TRUE(p1_ != p2_);
}

TEST_F(PersonTest, OperatorLessThan) {
  EXPECT_TRUE(p1_ < p0_);
  EXPECT_FALSE(p0_ < p0_);
  EXPECT_FALSE(p0_ < p2_);
}

TEST_F(PersonTest, OperatorGreaterThan) {
  EXPECT_FALSE(p1_ > p0_);
  EXPECT_FALSE(p0_ > p0_);
  EXPECT_TRUE(p0_ > p2_);
}

}  // namespace
