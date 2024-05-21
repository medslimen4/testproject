#include <unity.h> 
#include <iostream>

int addition(int a, int b) {
    return a + b;
}

// Fonction pour soustraire deux nombres
int soustraction(int a, int b) {
    return a - b;
}

// Fonction exécutée avant chaque test
void setUp(void) {
    // Code de configuration ici
}

// Fonction exécutée après chaque test
void tearDown(void) {
    // Code de nettoyage ici
}

// Test de la fonction d'addition
void testAddition() {
    TEST_ASSERT_EQUAL_INT(2147483649, addition(2147483647 , 2));
    TEST_ASSERT_EQUAL_INT(0, addition(-1, 1));
    TEST_ASSERT_EQUAL_INT(0, addition(0, 0));
}

// Test de la fonction de soustraction
void testSoustraction() {
    TEST_ASSERT_EQUAL_INT(2, soustraction(5, 3));
    TEST_ASSERT_EQUAL_INT(3, soustraction(10, 7));
    TEST_ASSERT_EQUAL_INT(0, soustraction(8, 8));
}

// Fonction principale
int main (int argc , char **argv) {
    UNITY_BEGIN();
    
    RUN_TEST(testAddition);
    RUN_TEST(testSoustraction);

    return UNITY_END();
}
