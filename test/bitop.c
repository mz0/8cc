void test_or() {
    expect(3, 1 | 2);
    expect(7, 2 | 5);
    expect(7, 2 | 7);
}

void test_and() {
    expect(0, 1 & 2);
    expect(2, 2 & 7);
}

void test_not() {
    expect(-1, ~0);
    expect(-3, ~2);
    expect(0, ~-1);
}

int main() {
    printf("Testing bitwise operators ... ");

    test_or();
    test_and();
    test_not();

    printf("OK\n");
    return 0;
}