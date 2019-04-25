#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "palindrome.hpp"

TEST_CASE("test one", "[sample]") {
    REQUIRE(isPalindromeRecursive("alpha") == false);
}
