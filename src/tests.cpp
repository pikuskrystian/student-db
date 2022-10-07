#include <gtest/gtest.h>
#include "database.hpp"
#include "student.hpp"

struct DatabaseTest : ::testing::Test
{
  Database db;
};

TEST_F(DatabaseTest, Req1Req2){
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

TEST_F(DatabaseTest, DisplayEmptyDb){
  Database db;
  auto content = db.show();
  auto expected = "";
  EXPECT_EQ(content, expected);
  
}



TEST_F(DatabaseTest, DisplayNonEmptyDb){
  
  Student adam{
     "Adam",
    "Kowalski",
    "ul. DObra 13, 33-160 Tuchów",
    12345,
    "98020807599",
    Gender::Male
  };

  EXPECT_TRUE(db.add(adam));
  auto content = db.show();
  auto expected = "Adam Kowalski; ul. Dobra 13, 33-160 Tuchów; 12345; 98020807599; Male";
  EXPECT_EQ(content, expected);
  }
