#include <gtest.h>
#include "list.h"
#include "polynom.h"

TEST(Polynom, can_initialize_polynom) {
	ASSERT_NO_THROW(Polynom p());
}

TEST(Polynom, can_add_terms) {
    Polynom p;
    ASSERT_NO_THROW(p.addTerm(50, 30));
}

TEST(Polynom, can_add_two_polynoms) {
    Polynom p1;
    Polynom p2;

    p1.addTerm(3, 2); // 3x^2
    p1.addTerm(2, 1); // + 2x^1
    p1.addTerm(1, 0); // + 1

    p2.addTerm(4, 1); // 4x^1
    p2.addTerm(5, 0); // + 5

    Polynom result = p1 + p2;

    ASSERT_NO_THROW(result);
}

TEST(Polynom, can_subtract_two_polynoms) {
    Polynom p1;
    Polynom p2;

    p1.addTerm(3, 2); // 3x^2
    p1.addTerm(2, 1); // + 2x^1
    p1.addTerm(1, 0); // + 1

    p2.addTerm(4, 1); // 4x^1
    p2.addTerm(5, 0); // + 5

    Polynom result = p1 - p2;

    ASSERT_NO_THROW(result);
}

TEST(Polynom, can_multiply_two_polynoms) {
    Polynom p1;
    Polynom p2;

    p1.addTerm(3, 2); // 3x^2
    p1.addTerm(2, 1); // + 2x^1
    p1.addTerm(1, 0); // + 1

    p2.addTerm(4, 1); // 4x^1
    p2.addTerm(5, 0); // + 5

    Polynom result = p1 * p2;

    ASSERT_NO_THROW(result);
}

TEST(Polynom, can_print_the_result) {
    Polynom p1;
    Polynom p2;

    p1.addTerm(3, 2); // 3x^2
    p1.addTerm(2, 1); // + 2x^1
    p1.addTerm(1, 0); // + 1

    p2.addTerm(4, 1); // 4x^1
    p2.addTerm(5, 0); // + 5

    Polynom result = p1 * p2;
    ASSERT_NO_THROW(result.print());
}