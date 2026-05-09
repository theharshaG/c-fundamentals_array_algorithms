#include <stdio.h>

int main() {

    int arr[100], visited[100];
    int n, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }

    // Frequency logic
    for (int i = 0; i < n; i++) {

        // Skip already counted elements
        if (visited[i] == 1) {
            continue;
        }

        count = 1;

        for (int j = i + 1; j < n; j++) {

            if (arr[i] == arr[j]) {

                count++;
                visited[j] = 1;
            }
        }

        printf("%d -> %d times\n", arr[i], count);
    }

    return 0;
}
