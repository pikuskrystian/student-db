#include <gtest/gtest.h>
#include "database.hpp"
#include "student.hpp"


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


/*
TEST(DisplayDb, DisplayNonEmptyDb){
  Database db;

  Student adam{
     "Adam",
    "Kowalski",
    "ul. DObra 13, 33-160 Tuchów",
    12345,
    "98020807599",
    Gender::Male
  };
  EXPECT_TRUE(db.add(adam));
  db.display;
  }
*/