#include "construction_detector.h"

#include <iostream>
#include <string_view>

void test_construction_detector()
{
    // Default constructions
    detector def {};
    detector def2;

    // Copy then move constructed
    detector copy {def};
    detector move {std::move(def2)};

    // Copy then move assigned
    copy = def;
    move = std::move(def2);

    //4 destruction messages
}

int main()
{
    test_construction_detector();
}