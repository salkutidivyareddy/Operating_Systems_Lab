#include <stdio.h>

#define MAX_FRAMES 4

void lruPageReplacement(int pages[], int n) {
    int frames[MAX_FRAMES];
    int age[MAX_FRAMES];
    int pageFaults = 0;
    int pageHits = 0;
    int i,j;
    for ( i = 0; i < MAX_FRAMES; i++) {
        frames[i] = -1;  // Initialize frames with -1 to represent empty frames
        age[i] = 0;      // Initialize age with 0
    }

    for ( i = 0; i < n; i++) {
        int page = pages[i];
        int pageFound = 0;

        // Check if the page is already in a frame
        for ( j = 0; j < MAX_FRAMES; j++) {
            if (frames[j] == page) {
                pageHits++;
                pageFound = 1;
                age[j] = 0;  // Reset age to 0 for the accessed page
                break;
            }
        }

        // If the page is not in a frame, replace a page using LRU page replacement
        if (!pageFound) {
            pageFaults++;
            int replaceIndex = 0;

            // Find the frame with the highest age to replace
            for ( j = 1; j < MAX_FRAMES; j++) {
                if (age[j] > age[replaceIndex]) {
                    replaceIndex = j;
                }
            }

            frames[replaceIndex] = page;
            age[replaceIndex] = 0;  // Reset age for the newly added page
        }

        // Increment age for all frames
        for ( j = 0; j < MAX_FRAMES; j++) {
            age[j]++;
        }

        // Print the current state of frames
        printf("Frames: ");
        for ( j = 0; j < MAX_FRAMES; j++) {
            printf("%d ", frames[j]);
        }
        printf("\n");
    }

    // Print the results
    printf("Page Faults: %d\n", pageFaults);
    printf("Page Hits: %d\n", pageHits);
}

int main() {
    // Example reference string
    int pages[] = {7,0,1,2,0,3,0,4,2,3,0,3,2,3};
    int n = sizeof(pages) / sizeof(pages[0]);

    lruPageReplacement(pages, n);

    return 0;
}

