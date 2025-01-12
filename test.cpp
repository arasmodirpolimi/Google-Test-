#include <gtest/gtest.h>

struct BankAccount
{
    /* data */
    int balance = 0;
    BankAccount() {
    };
    explicit  BankAccount(int balance) : balance(balance) {}        
};


TEST(AccountTest, BankAccountStartsEmpty) {
    BankAccount account;
    EXPECT_EQ(0, account .balance);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
