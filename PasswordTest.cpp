/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}
TEST(PasswordTest, long_repeating_leading_characters)
{
	Password my_password;
	int actual = my_password.count_leading_characters("ZZZii");
	ASSERT_EQ(3, actual);
}
TEST(PasswordTest, no_leading_characters)
{
    Password my_password;
    int actual = my_password.count_leading_characters("");
    ASSERT_EQ(0, actual);
}
TEST(PasswordTest, all_cap_letters)
{
	Password my_password;
	bool actual = my_password.has_mixed_case("ZZZ");
	ASSERT_EQ(false, actual);
}
TEST(PasswordTest, all_lower_letters)
{
    Password my_password;
    bool actual = my_password.has_mixed_case("aaa");
    ASSERT_EQ(false, actual);
}
TEST(PasswordTest, mixed_case_letters)
{
    Password my_password;
    bool actual = my_password.has_mixed_case("abCD");
    ASSERT_EQ(false, actual);
}
//bru the fkn letters wont work for wie or left bracket </3
//test cases for: empt./no letters, same # characters for 2+ letters(AAABBB1234),spaces, etc idk
