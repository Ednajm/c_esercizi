#include <stdio.h>
#include <string.h>

// Function to compute frequencies
void frequencies(unsigned *freqs, const char *src) {
    // Initialize the frequency array to 0
    for (int i = 0; i < 256; i++) {
        freqs[i] = 0;
    }
    
    // Count the frequency of each character in the string
    for (int i = 0; src[i] != '\0'; i++) {
        freqs[(unsigned char)src[i]]++;
    }
}

int main() {
    char src[] = "abcdabcdogaca"; // Input string
    unsigned freqs[256];          // Frequency array for all ASCII characters

    // Compute frequencies
    frequencies(freqs, src);

    // Print the frequencies
    printf("Frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freqs[i] > 0) { // Only print characters that appear in the string
            printf("'%c': %u\n", i, freqs[i]);
        }
    }

    return 0;
}
