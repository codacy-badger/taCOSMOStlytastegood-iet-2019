#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "singly_linked_list.hpp"

TEST_CASE("test default constructor", "[sample]") {
	//initialization
	
	//act
	Linkedlist<int> list{};
	
	//assert
    REQUIRE(list.size() == 0);
}

TEST_CASE("test copy constructor", "[sample]") {
	//initialization
	int input_a = 1;
	int input_b = 2;
	Linkedlist<int> list{};
	list.rearAdd(input_a);
	list.rearAdd(input_b);
	
	//act	
	Linkedlist<int> copy = list;
	
	//assert
	REQUIRE(copy.size() == list.size());
	for(int i = 0; i < list.size(); i++) {
		REQUIRE(copy.getPos(i) == list.getPos(i));
	}
}

TEST_CASE("test assign operator", "[sample]") {
	//initialization
	int input_a = 1;
	int input_b = 2;
	Linkedlist<int> list{};
	list.rearAdd(input_a);
	list.rearAdd(input_b);
	Linkedlist<int> rhs{};
	
	//act
	list = rhs;
	
	//assert
	REQUIRE(rhs.size() == list.size());
	for(int i = 0; i < list.size(); i++) {
		REQUIRE(rhs.getPos(i) == list.getPos(i));
	}
}

TEST_CASE("test self assign", "[sample]") {
	//initialization
	int input_a = 1;
	int input_b = 2;
	Linkedlist<int> list{};
	list.rearAdd(input_a);
	list.rearAdd(input_b);
	Linkedlist<int> control = list;
	
	//act
	list = list;
	
	//assert
	REQUIRE(list.size() == control.size());
	for(int i = 0; i < list.size(); i++) {
		REQUIRE(list.getPos(i) == control.getPos(i));
	}
}

TEST_CASE("test headAdd() case one", "[sample]") {
	//initialization
	int input_a = 55;
	Linkedlist<int> list{};
	Linkedlist<int> control = list;
	
	//act
	list.headAdd(input_a);
	
	//assert
	REQUIRE(list.size() == control.size()+1);
	REQUIRE(list.getPos(0) == input_a);
}

TEST_CASE("test headAdd() case two", "[sample]") {
	//initialization
	int input_a = 55;
	int input_b = 66;
	Linkedlist<int> list{};
	list.headAdd(input_a);
	Linkedlist<int> control = list;
	
	//act		
	list.headAdd(input_b);
	
	//assert
	REQUIRE(list.size() == control.size()+1);
	REQUIRE(list.getPos(0) == input_b);
	for(int i = 0; i < control.size(); i++) {
		REQUIRE(list.getPos(i+1) == control.getPos(i));
	}
}

TEST_CASE("test rearAdd() case one", "[sample]") {
	//initialization
	int input_a = 55;
	Linkedlist<int> list{};
	Linkedlist<int> control = list;
	
	//act
	list.rearAdd(input_a);
	
	//assert
	REQUIRE(list.size() == control.size()+1);
	REQUIRE(list.getPos(list.size()-1) == input_a);
}

TEST_CASE("test rearAdd() case two", "[sample]") {
	//initialization
	int input_a = 55;
	int input_b = 66;
	Linkedlist<int> list{};
	list.rearAdd(input_a);
	Linkedlist<int> control = list;
	
	//act	
	list.rearAdd(input_b);
	
	//assert
	REQUIRE(list.size() == control.size()+1);
	REQUIRE(list.getPos(list.size()-1) == input_b);
	for(int i = 0; i < control.size(); i++) {
		REQUIRE(list.getPos(i) == control.getPos(i)); 
	}
}











