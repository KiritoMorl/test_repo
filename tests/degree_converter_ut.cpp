#include <gtest/gtest.h>
#include <lib/lib.h>

TEST(CasualNumbersSuite, IntegerTest) {
    int n = 5;
    int arr[] = {1, 3, 2, 3, 1};
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    EXPECT_EQ(count, 2);
}

TEST(CasualNumbersSuite2, IntegerTest) {
    int n = 5;
    int arr[] = {2, 4, 3, 5, 1};
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    EXPECT_EQ(count, 3);
}

TEST(EmptyArraySuite, InputTest) {
    int n = 0;
    int arr[] = {};
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    EXPECT_EQ(count, 0);
}

TEST(SingleElementSuite, InputTest) {
    int n = 1;
    int arr[] = {1};
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    EXPECT_EQ(count, 0);
}

TEST(WrongInputSuite, InputTest) {
    int n = 5;
    int arr[] = {1};
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    EXPECT_EQ(count, 0);
}

TEST(EqualElementsSuite, IntegerTest) {
    int n = 5;
    int arr[] = {3, 3, 3, 3, 3};
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    EXPECT_EQ(count, 0);
}

TEST(DecreasingSequenceSuite, IntegerTest) {
    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    EXPECT_EQ(count, 4);
}

TEST(DecreasingSequenceSuite2, IntegerTest) {
    int n = 4;
    int arr[] = {4, 3, 2, 1};
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    EXPECT_EQ(count, 2);
}

TEST(IncreasingSequenceSuite, IntegerTest) {
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    EXPECT_EQ(count, 0);
}

TEST(PlusMinusSuite, IntegerTest) {
    int n = 4;
    int arr[] = {-1, 2, -3, 4};
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    EXPECT_EQ(count, 2);
}

TEST(PlusMinusSuite2, IntegerTest) {
    int n = 8;
    int arr[] = {10, -9, 5, -4, 30, -15, 1, -8};
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    EXPECT_EQ(count, 18);
}

TEST(AllNegativeSuite, IntegerTest) {
    int n = 4;
    int arr[] = {-1, -2, -3, -4};
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    EXPECT_EQ(count, 6);
}

TEST(BigNumbersSuite, IntegerTest) {
    int n = 4;
    int arr[] = {1000000, 500000, 250000, 125000};
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    EXPECT_EQ(count, 3);
}

TEST(BigNegativeNumbersSuite, IntegerTest) {
    int n = 4;
    int arr[] = {-1000000, -500000, -250000, -125000};
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    EXPECT_EQ(count, 0);
}

TEST(LimitValuesSuite, IntegerTest) {
    int n = 3;
    int arr[] = {2147483647, 1073741823, 1};
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    EXPECT_EQ(count, 3);
}

TEST(NegativeLimitValuesSuite, IntegerTest) {
    int n = 3;
    int arr[] = {-2147483648, -1073741824, 0};
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    EXPECT_EQ(count, 0);
}

TEST(OwerflowSuite, IntegerTest) {
    int n = 2;
    int arr[] = {1073741824, 1};
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    EXPECT_EQ(count, 1);
}

TEST(ZeroOnlySuite, IntegerTest) {
    int n = 4;
    int arr[] = {0, 0, 0, 0};
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    EXPECT_EQ(count, 0);
}
TEST(ZeroAndPositiveSuite, IntegerTest) {
    int n = 4;
    int arr[] = {1, 0, 2, 0};
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    EXPECT_EQ(count, 3);
}

TEST(PowerSuite, IntegerTest) {
    int n = 1000;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = n - i;
    }
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    EXPECT_EQ(count, 124750);
}

