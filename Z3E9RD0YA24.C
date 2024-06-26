#include <stdio.h>

void decode_and_print(const unsigned char *encoded_str, int len) {
    char decoded_str[65];
    for (int i = 0; i < len; i++) {
        decoded_str[i] = encoded_str[i] ^ 0x5A; // XOR with 0x5A to deobfuscate
    }
    decoded_str[len] = '\0';
    printf("%s\n", decoded_str);
}

int main() {
    // Encoded string using XOR with 0x5A
    const unsigned char encoded_str[] = {
        0x11,0x14,0x1f,0x0c,0x17,0x0c,0x11,0x0e,0x13,0x14,0x1e,0x02,0x0d,0x6f,0x1e,0x13,0x1d,0x08,0x68,0x1c,0x6c,0x6f,0x00,0x0f,0x15,0x14,0x0a,0x0e,0x13,0x69,0x18,0x0b,0x15,0x08,0x0a,0x0e,0x1b,0x00,0x09,0x6d,0x1f,0x08,0x68,0x1e,0x1d,0x6e,0x18,0x1f,0x0a,0x0f,0x67,0x67,0x67,0x67,0x67,0x67
    };
    int len = sizeof(encoded_str) / sizeof(encoded_str[0]);

    decode_and_print(encoded_str, len);
    return 0;
}
