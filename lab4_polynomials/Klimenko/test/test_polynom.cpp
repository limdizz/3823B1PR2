#include <gtest.h>
#include "polynom.h"

TEST(Polynom, can_initialize_polynom) {
	ASSERT_NO_THROW(Polynom p());
}

TEST(Polynom, can_add_terms) {
    Polynom p;
    ASSERT_NO_THROW(p.addTerm(3, {4, 5, 4}));
}

TEST(Polynom, can_add_two_polynoms) {
    Polynom p1, p2;

    p1.addTerm(3, {4, 5, 3}); 
    p2.addTerm(4, {3, 5, 1});

    Polynom result = p1 + p2;

    ASSERT_NO_THROW(result);
}

TEST(Polynom, can_add_two_polynoms_with_assignment) {
    Polynom p1, p2;

    p1.addTerm(3, { 4, 5, 3 });
    p2.addTerm(4, { 4, 5, 3 });
    p1 += p2;

    ASSERT_NO_THROW(p1);
}

TEST(Polynom, can_add_a_number_to_the_polynom) {
    Polynom p1;

    p1.addTerm(3, { 4, 5, 3 });

    Polynom result = p1 + 4;

    ASSERT_NO_THROW(result);
}

TEST(Polynom, can_add_a_number_to_the_polynom_with_assignment) {
    Polynom p1;

    p1.addTerm(3, { 4, 5, 3 });
    p1 += 4;

    ASSERT_NO_THROW(p1);
}

TEST(Polynom, can_subtract_two_polynoms) {
    Polynom p1, p2;

    p1.addTerm(3, { 4, 5, 3 });
    p2.addTerm(4, { 3, 5, 1 });

    Polynom result = p1 - p2;

    ASSERT_NO_THROW(result);
}

TEST(Polynom, can_subtract_two_polynoms_with_assignment) {
    Polynom p1, p2;

    p1.addTerm(3, { 4, 5, 3 });
    p2.addTerm(4, { 3, 5, 1 });
    p1 -= p2;

    ASSERT_NO_THROW(p1);
}

TEST(Polynom, can_subtract_a_number_from_the_polynom) {
    Polynom p1;

    p1.addTerm(3, { 4, 5, 3 });

    Polynom result = p1 - 4;

    ASSERT_NO_THROW(result);
}

TEST(Polynom, can_subtract_a_number_from_the_polynom_with_assignment) {
    Polynom p1;

    p1.addTerm(3, { 4, 5, 3 });
    p1 -= 4;

    ASSERT_NO_THROW(p1);
}

TEST(Polynom, can_multiply_two_polynoms) {
    Polynom p1, p2;

    p1.addTerm(3, { 4, 5, 3 });
    p2.addTerm(4, { 3, 5, 1 });

    Polynom result = p1 * p2;

    ASSERT_NO_THROW(result);
}

TEST(Polynom, can_multiply_two_polynoms_with_assignment) {
    Polynom p1, p2;

    p1.addTerm(3, { 4, 5, 3 });
    p2.addTerm(4, { 3, 5, 1 });
    p1 *= p2;

    ASSERT_NO_THROW(p1);
}

TEST(Polynom, can_multiply_a_number_to_the_polynom) {
    Polynom p1;

    p1.addTerm(3, { 4, 5, 3 });

    Polynom result = p1 * 5;

    ASSERT_NO_THROW(result);
}

TEST(Polynom, can_multiply_a_number_to_the_polynom_with_assignment) {
    Polynom p1;

    p1.addTerm(3, { 4, 5, 3 });
    p1 *= 5;

    ASSERT_NO_THROW(p1);
}

TEST(Polynom, can_print_the_result) {
    Polynom p1, p2;

    p1.addTerm(3, { 4, 5, 3 });
    p2.addTerm(4, { 3, 5, 1 });

    Polynom result = p1 * p2;
    ASSERT_NO_THROW(result.print());
}

TEST(Polynom, can_calculate_the_value_of_the_polynom_at_the_point) {
    Polynom p1, p2;

    p1.addTerm(3, { 2, 1, 1 });
    p1.calculate(3, 4, 1);

    EXPECT_EQ(108, p1.calculate(3, 4, 1));
}
