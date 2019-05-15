#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "radix_sort.hpp"

TEST_CASE("test one", "[sample]") {
	std::vector<int> test_data{};
	radix_sort(test_data);
    REQUIRE(test_data.size() == 0);
}
