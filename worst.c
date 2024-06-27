#include <stdio.h>

#define MAX_BLOCKS 5
#define MAX_JOBS 4

void worstFit(int blockSize[], int m, int jobSize[], int n) {
    int allocation[MAX_JOBS];
    int i,j;

    for ( i = 0; i < n; i++) {
        allocation[i] = -1;  // Initialize allocation array with -1 to represent unallocated jobs
        int worstFitIdx = -1;

        for ( j = 0; j < m; j++) {
            if (blockSize[j] >= jobSize[i]) {
                if (worstFitIdx == -1 || blockSize[j] > blockSize[worstFitIdx]) {
                    worstFitIdx = j;
                }
            }
        }

        if (worstFitIdx != -1) {
            allocation[i] = worstFitIdx;
            blockSize[worstFitIdx] -= jobSize[i];
        }
    }

    printf("Worst Fit Allocation:\n");
    for ( i = 0; i < n; i++) {
        printf("Job %d allocated to Block %d\n", i, allocation[i]);
    }
    printf("\n");
}

int main() {
    // Example memory block sizes
    int blockSize[MAX_BLOCKS] = {100, 500, 200, 300, 600};

    // Example job sizes
    int jobSize[MAX_JOBS] = {212, 417, 112, 426};

    // Number of memory blocks and jobs
    int m = sizeof(blockSize) / sizeof(blockSize[0]);
    int n = sizeof(jobSize) / sizeof(jobSize[0]);

    // Worst Fit Allocation
    worstFit(blockSize, m, jobSize, n);

    return 0;
}

