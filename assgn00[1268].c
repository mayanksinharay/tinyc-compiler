/* Test file covering tinyC grammar features */

enum Status {
    SUCCESS = 0,
    FAILURE = 1
};

int global_var = 10;
const char* msg = "Hello, tinyC Compiler!";

inline int add(int a, int b) {
    return a + b;
}

void process_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2 + 1;
    }
}

int main() {
    int x = 5;
    double y = 3.14;
    int array[5] = {1, 2, 3, 4, 5};

    // Conditional expressions
    if (x > 0) {
        x += 10;
    } else {
        x -= 10;
    }

    // Switch case
    switch (x) {
        case 15:
            x++;
            break;
        default:
            x = 0;
    }

    // Loops
    while (x < 20) {
        x++;
        if (x == 18) continue;
    }

    do {
        x--;
    } while (x > 15);

    // Unary and Pointer operations
    int *ptr = &x;
    *ptr = 42;

    int res = add(x, 10);
    process_array(array, 5);

    return 0;
}
