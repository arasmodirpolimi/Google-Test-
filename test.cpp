#include <gtest/gtest.h>

struct BankAccount
{
    /* data */
    int balance = 0;
    BankAccount() {
    };
    explicit BankAccount(int balance) : balance(balance) {}
    void deposit(int amount) {
        balance += amount;
    }
};

struct BankAccountTest : testing::Test
{
    /* data */
    BankAccount *account;

    BankAccountTest()
    {
        account = new BankAccount;
    }

    ~BankAccountTest()
    {
    }
};

TEST_F(BankAccountTest, BankAccountStartsEmpty)
{
    EXPECT_EQ(0, account->balance);
}

TEST_F(BankAccountTest, CanDepositMoeny)
{
    account->deposit(100);
    EXPECT_EQ(100, account->balance);
}

// TEST(AccountTest, BankAccountStartsEmpty) {
//     BankAccount account;
//     EXPECT_EQ(0, account .balance);
// }

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
