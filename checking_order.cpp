#include<iostream>
#include <cstdint>
#include <cstring>
int main(){
    uint16_t port = 9000;
    unsigned char bytes[2];
    std::memcpy(bytes, &port, 2);      // copy the raw memory of port into bytes[]
    printf("%02x %02x\n", bytes[0], bytes[1]);   // %02x = 2-digit hex
    return 0;
}