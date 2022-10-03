#include <gtest/gtest.h>
#include "database.hpp"
#include "student.hpp"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(CheckStructure. Req1Req2){
  Student adam {
    "Adam",
    "Kowalski",
    "ul. DObra 13, 33-160 Tuchów",
    12345,
    "98020807599",
    Gender::Male
  };

  Database db;
  EXPECT_TRUE(db.add(adam));
   EXPECT_FALSE(db.add(adam));
}

