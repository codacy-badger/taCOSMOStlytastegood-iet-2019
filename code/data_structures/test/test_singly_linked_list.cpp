#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "singly_linked_list.hpp"

TEST_CASE("test one", "[sample]") {
	Linkedlist<int> list{};
    REQUIRE(list.size() == 0);
}
