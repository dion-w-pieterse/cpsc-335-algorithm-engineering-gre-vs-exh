///////////////////////////////////////////////////////////////////////////////
// maxprotein_timing.cc
//
// Example code showing how to run each algorithm while measuring
// elapsed times precisely. You should modify this program to gather
// all of your experimental data.
//
///////////////////////////////////////////////////////////////////////////////

#include <cassert>
#include <climits>
#include <iostream>
#include <vector>

#include "maxprotein.hh"
#include "timer.hh"

using namespace std;

void print_bar() {
    cout << string(79, '-') << endl;
}

void print_star_line() {
    cout << string(79, '*') << endl;
}

int main() {
    
    const int n_test2 = 12;
    const int n_test3 = 14;
    const int n_test4 = 16;
    const int n_test5 = 18;
    const int n_test6 = 20;
    const int n_test7 = 22;
    const int n_test8 = 24;
    const int n_test9 = 26;
    const int n_test10 = 28;
    const int n_test11 = 30;
    const int n_test12_g = 32;
    const int n_test13_g = 34;
    const int n_test14_g = 36;
    const int n_test15_g = 38;
    const int n_test16_g = 40;
    const int n_test17_g = 42;
    const int n_test18_g = 44;
    const int n_test19_g = 46;
    const int n_test20_g = 48;
    const int n_test21_g = 50;
    const int n_test22_g = 52;
    const int n_test23_g = 54;
    const int n_test24_g = 56;
    const int n_test25_g = 58;
    const int n_test26_g = 60;
    const int n_test27_g = 62;
    
    /*****************************************************
     *** TEST VALUE 1:  n = 10 ***
     ****************************************************/
    print_star_line();
    cout << "TEST 1: n = 10:" << endl;
    print_star_line();
    cout << endl;
    
    const int n = 10,
    total_kcal = 1000;
    
    auto all_foods = load_usda_abbrev("ABBREV.txt");
    assert( all_foods );
    
    auto n_foods = filter_food_vector(*all_foods, 0, INT_MAX, n);
    assert( n_foods );
    assert( n_foods->size() == n );
    
    double elapsed;
    Timer timer;
    
    print_bar();
    cout << "n = " << n << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer.reset();
    auto greedy_solution = greedy_max_protein(*n_foods, total_kcal);
    elapsed = timer.elapsed();
    assert(greedy_solution);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution);
    cout << endl;
    cout << "elapsed time = " << elapsed << " seconds" << endl;
    
    print_bar();
    if (n >= 64) {
        cout << "(n too large, skipping exhaustive search)" << endl;
    } else {
        timer.reset();
        auto exhaustive_solution = exhaustive_max_protein(*n_foods, total_kcal);
        elapsed = timer.elapsed();
        assert(exhaustive_solution);
        cout << "exhaustive solution:" << endl;
        print_food_vector(*exhaustive_solution);
        cout << endl;
        cout << "elapsed time = " << elapsed << " seconds" << endl;
    }
    print_bar();
    
    /*****************************************************
     *** TEST VALUE 2:  n = 12 ***
     ****************************************************/
    
    cout << endl << endl;
    print_star_line();
    cout << "TEST 2: n = 12:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t2 = filter_food_vector(*all_foods, 0, INT_MAX, n_test2);
    assert( n_foods_t2 );
    assert( n_foods_t2->size() == n_test2 );
    
    double elapsed_t2;
    Timer timer_t2;
    
    print_bar();
    cout << "n_test2 = " << n_test2 << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t2.reset();
    auto greedy_solution_t2 = greedy_max_protein(*n_foods_t2, total_kcal);
    elapsed_t2 = timer_t2.elapsed();
    assert(greedy_solution_t2);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t2);
    cout << endl;
    cout << "elapsed time = " << elapsed_t2 << " seconds" << endl;
    
    print_bar();
    if (n_test2 >= 64) {
        cout << "(n too large, skipping exhaustive search)" << endl;
    } else {
        timer_t2.reset();
        auto exhaustive_solution_t2 = exhaustive_max_protein(*n_foods_t2, total_kcal);
        elapsed_t2 = timer.elapsed();
        assert(exhaustive_solution_t2);
        cout << "exhaustive solution:" << endl;
        print_food_vector(*exhaustive_solution_t2);
        cout << endl;
        cout << "elapsed time = " << elapsed_t2 << " seconds" << endl;
    }
    print_bar();
    
    /*****************************************************
     *** TEST VALUE 3:  n = 14 ***
     ****************************************************/
    
    cout << endl << endl;
    print_star_line();
    cout << "TEST 3: n = 14:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t3 = filter_food_vector(*all_foods, 0, INT_MAX, n_test3);
    assert( n_foods_t3 );
    assert( n_foods_t3->size() == n_test3 );
    
    double elapsed_t3;
    Timer timer_t3;
    
    print_bar();
    cout << "n_test3 = " << n_test3 << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t3.reset();
    auto greedy_solution_t3 = greedy_max_protein(*n_foods_t3, total_kcal);
    elapsed_t3 = timer_t3.elapsed();
    assert(greedy_solution_t3);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t3);
    cout << endl;
    cout << "elapsed time = " << elapsed_t3 << " seconds" << endl;
    
    print_bar();
    if (n_test3 >= 64) {
        cout << "(n too large, skipping exhaustive search)" << endl;
    } else {
        timer_t3.reset();
        auto exhaustive_solution_t3 = exhaustive_max_protein(*n_foods_t3, total_kcal);
        elapsed_t3 = timer.elapsed();
        assert(exhaustive_solution_t3);
        cout << "exhaustive solution:" << endl;
        print_food_vector(*exhaustive_solution_t3);
        cout << endl;
        cout << "elapsed time = " << elapsed_t3 << " seconds" << endl;
    }
    print_bar();
    
    
    /*****************************************************
     *** TEST VALUE 4:  n = 16 ***
     ****************************************************/
    
    cout << endl << endl;
    print_star_line();
    cout << "TEST 4: n = 16:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t4 = filter_food_vector(*all_foods, 0, INT_MAX, n_test4);
    assert( n_foods_t4 );
    assert( n_foods_t4->size() == n_test4 );
    
    double elapsed_t4;
    Timer timer_t4;
    
    print_bar();
    cout << "n_test4 = " << n_test4 << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t4.reset();
    auto greedy_solution_t4 = greedy_max_protein(*n_foods_t4, total_kcal);
    elapsed_t4 = timer_t4.elapsed();
    assert(greedy_solution_t4);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t4);
    cout << endl;
    cout << "elapsed time = " << elapsed_t4 << " seconds" << endl;
    
    print_bar();
    if (n_test4 >= 64) {
        cout << "(n too large, skipping exhaustive search)" << endl;
    } else {
        timer_t4.reset();
        auto exhaustive_solution_t4 = exhaustive_max_protein(*n_foods_t4, total_kcal);
        elapsed_t4 = timer.elapsed();
        assert(exhaustive_solution_t4);
        cout << "exhaustive solution:" << endl;
        print_food_vector(*exhaustive_solution_t4);
        cout << endl;
        cout << "elapsed time = " << elapsed_t4 << " seconds" << endl;
    }
    print_bar();
    
    
    /*****************************************************
     *** TEST VALUE 5:  n = 18 ***
     ****************************************************/
    
    cout << endl << endl;
    print_star_line();
    cout << "TEST 5: n = 18:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t5 = filter_food_vector(*all_foods, 0, INT_MAX, n_test5);
    assert( n_foods_t5 );
    assert( n_foods_t5->size() == n_test5 );
    
    double elapsed_t5;
    Timer timer_t5;
    
    print_bar();
    cout << "n_test5 = " << n_test5 << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t5.reset();
    auto greedy_solution_t5 = greedy_max_protein(*n_foods_t5, total_kcal);
    elapsed_t5 = timer_t5.elapsed();
    assert(greedy_solution_t5);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t5);
    cout << endl;
    cout << "elapsed time = " << elapsed_t5 << " seconds" << endl;
    
    print_bar();
    if (n_test5 >= 64) {
        cout << "(n too large, skipping exhaustive search)" << endl;
    } else {
        timer_t5.reset();
        auto exhaustive_solution_t5 = exhaustive_max_protein(*n_foods_t5, total_kcal);
        elapsed_t5 = timer.elapsed();
        assert(exhaustive_solution_t5);
        cout << "exhaustive solution:" << endl;
        print_food_vector(*exhaustive_solution_t5);
        cout << endl;
        cout << "elapsed time = " << elapsed_t5 << " seconds" << endl;
    }
    print_bar();
    
    
    /*****************************************************
     *** TEST VALUE 6:  n = 20 ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 6: n = 20:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t6 = filter_food_vector(*all_foods, 0, INT_MAX, n_test6);
    assert( n_foods_t6 );
    assert( n_foods_t6->size() == n_test6 );
    
    double elapsed_t6;
    Timer timer_t6;
    
    print_bar();
    cout << "n_test6 = " << n_test6 << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t6.reset();
    auto greedy_solution_t6 = greedy_max_protein(*n_foods_t6, total_kcal);
    elapsed_t6 = timer_t6.elapsed();
    assert(greedy_solution_t6);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t6);
    cout << endl;
    cout << "elapsed time = " << elapsed_t6 << " seconds" << endl;
    
    print_bar();
    if (n_test6 >= 64) {
        cout << "(n too large, skipping exhaustive search)" << endl;
    } else {
        timer_t6.reset();
        auto exhaustive_solution_t6 = exhaustive_max_protein(*n_foods_t6, total_kcal);
        elapsed_t6 = timer.elapsed();
        assert(exhaustive_solution_t6);
        cout << "exhaustive solution:" << endl;
        print_food_vector(*exhaustive_solution_t6);
        cout << endl;
        cout << "elapsed time = " << elapsed_t6 << " seconds" << endl;
    }
    print_bar();
    /*****************************************************
     *** TEST VALUE 7:  n = 22 ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 7: n = 22:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t7 = filter_food_vector(*all_foods, 0, INT_MAX, n_test7);
    assert( n_foods_t7 );
    assert( n_foods_t7->size() == n_test7 );
    
    double elapsed_t7;
    Timer timer_t7;
    
    print_bar();
    cout << "n_test7 = " << n_test7 << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t7.reset();
    auto greedy_solution_t7 = greedy_max_protein(*n_foods_t7, total_kcal);
    elapsed_t7 = timer_t7.elapsed();
    assert(greedy_solution_t7);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t7);
    cout << endl;
    cout << "elapsed time = " << elapsed_t7 << " seconds" << endl;
    
    print_bar();
    if (n_test7 >= 64) {
        cout << "(n too large, skipping exhaustive search)" << endl;
    } else {
        timer_t7.reset();
        auto exhaustive_solution_t7 = exhaustive_max_protein(*n_foods_t7, total_kcal);
        elapsed_t7 = timer.elapsed();
        assert(exhaustive_solution_t7);
        cout << "exhaustive solution:" << endl;
        print_food_vector(*exhaustive_solution_t7);
        cout << endl;
        cout << "elapsed time = " << elapsed_t7 << " seconds" << endl;
    }
    print_bar();
    /*****************************************************
     *** TEST VALUE 8:  n = 24 ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 8: n = 24:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t8 = filter_food_vector(*all_foods, 0, INT_MAX, n_test8);
    assert( n_foods_t8 );
    assert( n_foods_t8->size() == n_test8 );
    
    double elapsed_t8;
    Timer timer_t8;
    
    print_bar();
    cout << "n_test8 = " << n_test8 << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t8.reset();
    auto greedy_solution_t8 = greedy_max_protein(*n_foods_t8, total_kcal);
    elapsed_t8 = timer_t8.elapsed();
    assert(greedy_solution_t8);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t8);
    cout << endl;
    cout << "elapsed time = " << elapsed_t8 << " seconds" << endl;
    
    print_bar();
    if (n_test8 >= 64) {
        cout << "(n too large, skipping exhaustive search)" << endl;
    } else {
        timer_t8.reset();
        auto exhaustive_solution_t8 = exhaustive_max_protein(*n_foods_t8, total_kcal);
        elapsed_t8 = timer.elapsed();
        assert(exhaustive_solution_t8);
        cout << "exhaustive solution:" << endl;
        print_food_vector(*exhaustive_solution_t8);
        cout << endl;
        cout << "elapsed time = " << elapsed_t8 << " seconds" << endl;
    }
    print_bar();
    
    /*****************************************************
     *** TEST VALUE 9:  n = 26 ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 9: n = 26:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t9 = filter_food_vector(*all_foods, 0, INT_MAX, n_test9);
    assert( n_foods_t9 );
    assert( n_foods_t9->size() == n_test9 );
    
    double elapsed_t9;
    Timer timer_t9;
    
    print_bar();
    cout << "n_test9 = " << n_test9 << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t9.reset();
    auto greedy_solution_t9 = greedy_max_protein(*n_foods_t9, total_kcal);
    elapsed_t9 = timer_t9.elapsed();
    assert(greedy_solution_t9);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t9);
    cout << endl;
    cout << "elapsed time = " << elapsed_t9 << " seconds" << endl;
    
    print_bar();
    if (n_test9 >= 64) {
        cout << "(n too large, skipping exhaustive search)" << endl;
    } else {
        timer_t9.reset();
        auto exhaustive_solution_t9 = exhaustive_max_protein(*n_foods_t9, total_kcal);
        elapsed_t9 = timer.elapsed();
        assert(exhaustive_solution_t9);
        cout << "exhaustive solution:" << endl;
        print_food_vector(*exhaustive_solution_t9);
        cout << endl;
        cout << "elapsed time = " << elapsed_t9 << " seconds" << endl;
    }
    print_bar();
    
    /*****************************************************
     *** TEST VALUE 10:  n = 28 ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 10: n = 28:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t10 = filter_food_vector(*all_foods, 0, INT_MAX, n_test10);
    assert( n_foods_t10 );
    assert( n_foods_t10->size() == n_test10 );
    
    double elapsed_t10;
    Timer timer_t10;
    
    print_bar();
    cout << "n_test10 = " << n_test10 << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t10.reset();
    auto greedy_solution_t10 = greedy_max_protein(*n_foods_t10, total_kcal);
    elapsed_t10 = timer_t10.elapsed();
    assert(greedy_solution_t10);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t10);
    cout << endl;
    cout << "elapsed time = " << elapsed_t10 << " seconds" << endl;
    
    print_bar();
    if (n_test10 >= 64) {
        cout << "(n too large, skipping exhaustive search)" << endl;
    } else {
        timer_t10.reset();
        auto exhaustive_solution_t10 = exhaustive_max_protein(*n_foods_t10, total_kcal);
        elapsed_t10 = timer.elapsed();
        assert(exhaustive_solution_t10);
        cout << "exhaustive solution:" << endl;
        print_food_vector(*exhaustive_solution_t10);
        cout << endl;
        cout << "elapsed time = " << elapsed_t10 << " seconds" << endl;
    }
    print_bar();
    
    /*****************************************************
     *** TEST VALUE 11:  n = 30 ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 11: n = 30:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t11 = filter_food_vector(*all_foods, 0, INT_MAX, n_test11);
    assert( n_foods_t11 );
    assert( n_foods_t11->size() == n_test11 );
    
    double elapsed_t11;
    Timer timer_t11;
    
    print_bar();
    cout << "n_test11 = " << n_test11 << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t11.reset();
    auto greedy_solution_t11 = greedy_max_protein(*n_foods_t11, total_kcal);
    elapsed_t11 = timer_t11.elapsed();
    assert(greedy_solution_t11);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t11);
    cout << endl;
    cout << "elapsed time = " << elapsed_t11 << " seconds" << endl;
    
    print_bar();
    if (n_test11 >= 64) {
        cout << "(n too large, skipping exhaustive search)" << endl;
    } else {
        timer_t11.reset();
        auto exhaustive_solution_t11 = exhaustive_max_protein(*n_foods_t11, total_kcal);
        elapsed_t11 = timer.elapsed();
        assert(exhaustive_solution_t11);
        cout << "exhaustive solution:" << endl;
        print_food_vector(*exhaustive_solution_t11);
        cout << endl;
        cout << "elapsed time = " << elapsed_t11 << " seconds" << endl;
    }
    print_bar();
    
    /*****************************************************
     *** TEST VALUE 12:  n = 32 GREEDY ONLY ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 12: n = 32:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t12 = filter_food_vector(*all_foods, 0, INT_MAX, n_test12_g);
    assert( n_foods_t12 );
    assert( n_foods_t12->size() == n_test12_g );
    
    double elapsed_t12;
    Timer timer_t12;
    
    print_bar();
    cout << "n_test12 = " << n_test12_g << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t12.reset();
    auto greedy_solution_t12 = greedy_max_protein(*n_foods_t12, total_kcal);
    elapsed_t12 = timer_t12.elapsed();
    assert(greedy_solution_t12);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t12);
    cout << endl;
    cout << "elapsed time = " << elapsed_t12 << " seconds" << endl;
    
    print_bar();
    
    /*****************************************************
     *** TEST VALUE 13:  n = 34 GREEDY ONLY ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 13: n = 34:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t13 = filter_food_vector(*all_foods, 0, INT_MAX, n_test13_g);
    assert( n_foods_t13 );
    assert( n_foods_t13->size() == n_test13_g );
    
    double elapsed_t13;
    Timer timer_t13;
    
    print_bar();
    cout << "n_test13 = " << n_test13_g << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t13.reset();
    auto greedy_solution_t13 = greedy_max_protein(*n_foods_t13, total_kcal);
    elapsed_t13 = timer_t13.elapsed();
    assert(greedy_solution_t13);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t13);
    cout << endl;
    cout << "elapsed time = " << elapsed_t13 << " seconds" << endl;
    
    print_bar();
    
    /*****************************************************
     *** TEST VALUE 14:  n = 36 GREEDY ONLY ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 14: n = 36:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t14 = filter_food_vector(*all_foods, 0, INT_MAX, n_test14_g);
    assert( n_foods_t14 );
    assert( n_foods_t14->size() == n_test14_g );
    
    double elapsed_t14;
    Timer timer_t14;
    
    print_bar();
    cout << "n_test14 = " << n_test14_g << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t14.reset();
    auto greedy_solution_t14 = greedy_max_protein(*n_foods_t14, total_kcal);
    elapsed_t14 = timer_t14.elapsed();
    assert(greedy_solution_t14);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t14);
    cout << endl;
    cout << "elapsed time = " << elapsed_t14 << " seconds" << endl;
    
    print_bar();
    
    /*****************************************************
     *** TEST VALUE 15:  n = 38 GREEDY ONLY ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 15: n = 38:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t15 = filter_food_vector(*all_foods, 0, INT_MAX, n_test15_g);
    assert( n_foods_t15 );
    assert( n_foods_t15->size() == n_test15_g );
    
    double elapsed_t15;
    Timer timer_t15;
    
    print_bar();
    cout << "n_test15 = " << n_test15_g << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t15.reset();
    auto greedy_solution_t15 = greedy_max_protein(*n_foods_t15, total_kcal);
    elapsed_t15 = timer_t15.elapsed();
    assert(greedy_solution_t15);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t15);
    cout << endl;
    cout << "elapsed time = " << elapsed_t15 << " seconds" << endl;
    
    print_bar();
    
    
    /*****************************************************
     *** TEST VALUE 16:  n = 40 GREEDY ONLY ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 16: n = 40:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t16 = filter_food_vector(*all_foods, 0, INT_MAX, n_test16_g);
    assert( n_foods_t16 );
    assert( n_foods_t16->size() == n_test16_g );
    
    double elapsed_t16;
    Timer timer_t16;
    
    print_bar();
    cout << "n_test16 = " << n_test16_g << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t16.reset();
    auto greedy_solution_t16 = greedy_max_protein(*n_foods_t16, total_kcal);
    elapsed_t16 = timer_t16.elapsed();
    assert(greedy_solution_t16);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t16);
    cout << endl;
    cout << "elapsed time = " << elapsed_t16 << " seconds" << endl;
    
    print_bar();
    
    
    /*****************************************************
     *** TEST VALUE 17:  n = 42 GREEDY ONLY ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 17: n = 42:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t17 = filter_food_vector(*all_foods, 0, INT_MAX, n_test17_g);
    assert( n_foods_t17 );
    assert( n_foods_t17->size() == n_test17_g );
    
    double elapsed_t17;
    Timer timer_t17;
    
    print_bar();
    cout << "n_test17 = " << n_test17_g << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t17.reset();
    auto greedy_solution_t17 = greedy_max_protein(*n_foods_t17, total_kcal);
    elapsed_t17 = timer_t17.elapsed();
    assert(greedy_solution_t17);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t17);
    cout << endl;
    cout << "elapsed time = " << elapsed_t17 << " seconds" << endl;
    
    print_bar();
    
    
    /*****************************************************
     *** TEST VALUE 18:  n = 44 GREEDY ONLY ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 18: n = 44:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t18 = filter_food_vector(*all_foods, 0, INT_MAX, n_test18_g);
    assert( n_foods_t18 );
    assert( n_foods_t18->size() == n_test18_g );
    
    double elapsed_t18;
    Timer timer_t18;
    
    print_bar();
    cout << "n_test18 = " << n_test18_g << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t18.reset();
    auto greedy_solution_t18 = greedy_max_protein(*n_foods_t18, total_kcal);
    elapsed_t18 = timer_t18.elapsed();
    assert(greedy_solution_t18);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t18);
    cout << endl;
    cout << "elapsed time = " << elapsed_t18 << " seconds" << endl;
    
    print_bar();
    
    
    /*****************************************************
     *** TEST VALUE 19:  n = 46 GREEDY ONLY ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 19: n = 46:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t19 = filter_food_vector(*all_foods, 0, INT_MAX, n_test19_g);
    assert( n_foods_t19 );
    assert( n_foods_t19->size() == n_test19_g );
    
    double elapsed_t19;
    Timer timer_t19;
    
    print_bar();
    cout << "n_test19 = " << n_test19_g << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t19.reset();
    auto greedy_solution_t19 = greedy_max_protein(*n_foods_t19, total_kcal);
    elapsed_t19 = timer_t19.elapsed();
    assert(greedy_solution_t19);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t19);
    cout << endl;
    cout << "elapsed time = " << elapsed_t19 << " seconds" << endl;
    
    print_bar();
    
    
    /*****************************************************
     *** TEST VALUE 20:  n = 48 GREEDY ONLY ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 20: n = 48:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t20 = filter_food_vector(*all_foods, 0, INT_MAX, n_test20_g);
    assert( n_foods_t20 );
    assert( n_foods_t20->size() == n_test20_g );
    
    double elapsed_t20;
    Timer timer_t20;
    
    print_bar();
    cout << "n_test20 = " << n_test20_g << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t20.reset();
    auto greedy_solution_t20 = greedy_max_protein(*n_foods_t20, total_kcal);
    elapsed_t20 = timer_t20.elapsed();
    assert(greedy_solution_t20);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t20);
    cout << endl;
    cout << "elapsed time = " << elapsed_t20 << " seconds" << endl;
    
    print_bar();
    
    
    /*****************************************************
     *** TEST VALUE 21:  n = 50 GREEDY ONLY ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 21: n = 50:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t21 = filter_food_vector(*all_foods, 0, INT_MAX, n_test21_g);
    assert( n_foods_t21 );
    assert( n_foods_t21->size() == n_test21_g );
    
    double elapsed_t21;
    Timer timer_t21;
    
    print_bar();
    cout << "n_test21 = " << n_test21_g << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t21.reset();
    auto greedy_solution_t21 = greedy_max_protein(*n_foods_t21, total_kcal);
    elapsed_t21 = timer_t21.elapsed();
    assert(greedy_solution_t21);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t21);
    cout << endl;
    cout << "elapsed time = " << elapsed_t21 << " seconds" << endl;
    
    print_bar();
    
    
    /*****************************************************
     *** TEST VALUE 22:  n = 52 GREEDY ONLY ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 22: n = 52:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t22 = filter_food_vector(*all_foods, 0, INT_MAX, n_test22_g);
    assert( n_foods_t22 );
    assert( n_foods_t22->size() == n_test22_g );
    
    double elapsed_t22;
    Timer timer_t22;
    
    print_bar();
    cout << "n_test22 = " << n_test22_g << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t22.reset();
    auto greedy_solution_t22 = greedy_max_protein(*n_foods_t22, total_kcal);
    elapsed_t22 = timer_t22.elapsed();
    assert(greedy_solution_t22);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t22);
    cout << endl;
    cout << "elapsed time = " << elapsed_t22 << " seconds" << endl;
    
    print_bar();
    
    
    /*****************************************************
     *** TEST VALUE 23:  n = 54 GREEDY ONLY ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 23: n = 54:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t23 = filter_food_vector(*all_foods, 0, INT_MAX, n_test23_g);
    assert( n_foods_t23 );
    assert( n_foods_t23->size() == n_test23_g );
    
    double elapsed_t23;
    Timer timer_t23;
    
    print_bar();
    cout << "n_test23 = " << n_test23_g << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t23.reset();
    auto greedy_solution_t23 = greedy_max_protein(*n_foods_t23, total_kcal);
    elapsed_t23 = timer_t23.elapsed();
    assert(greedy_solution_t23);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t23);
    cout << endl;
    cout << "elapsed time = " << elapsed_t23 << " seconds" << endl;
    
    print_bar();
    
    /*****************************************************
     *** TEST VALUE 24:  n = 56 GREEDY ONLY ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 24: n = 56:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t24 = filter_food_vector(*all_foods, 0, INT_MAX, n_test24_g);
    assert( n_foods_t24 );
    assert( n_foods_t24->size() == n_test24_g );
    
    double elapsed_t24;
    Timer timer_t24;
    
    print_bar();
    cout << "n_test24 = " << n_test24_g << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t24.reset();
    auto greedy_solution_t24 = greedy_max_protein(*n_foods_t24, total_kcal);
    elapsed_t24 = timer_t24.elapsed();
    assert(greedy_solution_t24);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t24);
    cout << endl;
    cout << "elapsed time = " << elapsed_t24 << " seconds" << endl;
    
    print_bar();
    
    
    /*****************************************************
     *** TEST VALUE 25:  n = 58 GREEDY ONLY ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 25: n = 58:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t25 = filter_food_vector(*all_foods, 0, INT_MAX, n_test25_g);
    assert( n_foods_t25 );
    assert( n_foods_t25->size() == n_test25_g );
    
    double elapsed_t25;
    Timer timer_t25;
    
    print_bar();
    cout << "n_test25 = " << n_test25_g << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t25.reset();
    auto greedy_solution_t25 = greedy_max_protein(*n_foods_t25, total_kcal);
    elapsed_t25 = timer_t25.elapsed();
    assert(greedy_solution_t25);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t25);
    cout << endl;
    cout << "elapsed time = " << elapsed_t25 << " seconds" << endl;
    
    print_bar();
    
    
    /*****************************************************
     *** TEST VALUE 26:  n = 60 GREEDY ONLY ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 26: n = 60:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t26 = filter_food_vector(*all_foods, 0, INT_MAX, n_test26_g);
    assert( n_foods_t26 );
    assert( n_foods_t26->size() == n_test26_g );
    
    double elapsed_t26;
    Timer timer_t26;
    
    print_bar();
    cout << "n_test26 = " << n_test26_g << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t26.reset();
    auto greedy_solution_t26 = greedy_max_protein(*n_foods_t26, total_kcal);
    elapsed_t26 = timer_t26.elapsed();
    assert(greedy_solution_t26);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t26);
    cout << endl;
    cout << "elapsed time = " << elapsed_t26 << " seconds" << endl;
    
    print_bar();
    
    
    /*****************************************************
     *** TEST VALUE 27:  n = 62 GREEDY ONLY ***
     ****************************************************/
    cout << endl << endl;
    print_star_line();
    cout << "TEST 27: n = 62:" << endl;
    print_star_line();
    cout << endl;
    
    assert( all_foods );
    
    auto n_foods_t27 = filter_food_vector(*all_foods, 0, INT_MAX, n_test27_g);
    assert( n_foods_t27 );
    assert( n_foods_t27->size() == n_test27_g );
    
    double elapsed_t27;
    Timer timer_t27;
    
    print_bar();
    cout << "n_test27 = " << n_test27_g << ", total_kcal = " << total_kcal << endl;
    
    print_bar();
    timer_t27.reset();
    auto greedy_solution_t27 = greedy_max_protein(*n_foods_t27, total_kcal);
    elapsed_t27 = timer_t27.elapsed();
    assert(greedy_solution_t27);
    cout << "greedy solution:" << endl;
    print_food_vector(*greedy_solution_t27);
    cout << endl;
    cout << "elapsed time = " << elapsed_t27 << " seconds" << endl;
    
    print_bar();
    
    
    
    return 0;
}
