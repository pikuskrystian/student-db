if(EXISTS "/home/aven/student-db/student-db/CMakelists.txt/student-database-ut[1]_tests.cmake")
  include("/home/aven/student-db/student-db/CMakelists.txt/student-database-ut[1]_tests.cmake")
else()
  add_test(student-database-ut_NOT_BUILT student-database-ut_NOT_BUILT)
endif()