#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "fast_inverse_sqrt.hpp"

TEST_CASE("test one", "[sample]") {
    REQUIRE(fastInverseSqrt(100) == Approx(0.1));
}
