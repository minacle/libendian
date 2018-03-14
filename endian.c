#include "endian.h"
#include <assert.h>

const union {unsigned i; unsigned char c;} deadbeef = {0xdeadbeef};
#define h (deadbeef.c == 0xde ? 'b' : deadbeef.c == 0xef ? 'l' : 0)

#define _swap(type, value) { \
    char result[sizeof(type)] = {0}; \
    for (int i = 0; i < sizeof result; i++) \
        result[i] = ((char *)&(value))[sizeof result - 1 - i]; \
    value = *((type *)result); \
}

// MARK: - Host Endian to Big Endian

short htobs(short value) {
    assert(h);
    if (h == 'b')
        return value;
    _swap(short, value);
    return value;
}

unsigned short htobus(unsigned short value) {
    assert(h);
    if (h == 'b')
        return value;
    _swap(unsigned short, value);
    return value;
}

int htobi(int value) {
    assert(h);
    if (h == 'b')
        return value;
    _swap(int, value);
    return value;
}

unsigned htobu(unsigned value) {
    assert(h);
    if (h == 'b')
        return value;
    _swap(unsigned, value);
    return value;
}

long htobl(long value) {
    assert(h);
    if (h == 'b')
        return value;
    _swap(long, value);
    return value;
}

unsigned long htobul(unsigned long value) {
    assert(h);
    if (h == 'b')
        return value;
    _swap(unsigned long, value);
    return value;
}

long long htobll(long long value) {
    assert(h);
    if (h == 'b')
        return value;
    _swap(long long, value);
    return value;
}

unsigned long long htobull(unsigned long long value) {
    assert(h);
    if (h == 'b')
        return value;
    _swap(unsigned long long, value);
    return value;
}

// MARK: - Host Endian to Little Endian

short htols(short value) {
    assert(h);
    if (h == 'l')
        return value;
    _swap(short, value);
    return value;
}

unsigned short htolus(unsigned short value) {
    assert(h);
    if (h == 'l')
        return value;
    _swap(unsigned short, value);
    return value;
}

int htoli(int value) {
    assert(h);
    if (h == 'l')
        return value;
    _swap(int, value);
    return value;
}

unsigned htolu(unsigned value) {
    assert(h);
    if (h == 'l')
        return value;
    _swap(unsigned, value);
    return value;
}

long htoll(long value) {
    assert(h);
    if (h == 'l')
        return value;
    _swap(long, value);
    return value;
}

unsigned long htolul(unsigned long value) {
    assert(h);
    if (h == 'l')
        return value;
    _swap(unsigned long, value);
    return value;
}

long long htolll(long long value) {
    assert(h);
    if (h == 'l')
        return value;
    _swap(long long, value);
    return value;
}

unsigned long long htolull(unsigned long long value) {
    assert(h);
    if (h == 'l')
        return value;
    _swap(unsigned long long, value);
    return value;
}

// MARK: - Big Endian to Host Endian

short btohs(short value) {
    assert(h);
    if (h == 'b')
        return value;
    _swap(short, value);
    return value;
}

unsigned short btohus(unsigned short value) {
    assert(h);
    if (h == 'b')
        return value;
    _swap(unsigned short, value);
    return value;
}

int btohi(int value) {
    assert(h);
    if (h == 'b')
        return value;
    _swap(int, value);
    return value;
}

unsigned btohu(unsigned value) {
    assert(h);
    if (h == 'b')
        return value;
    _swap(unsigned, value);
    return value;
}

long btohl(long value) {
    assert(h);
    if (h == 'b')
        return value;
    _swap(long, value);
    return value;
}

unsigned long btohul(unsigned long value) {
    assert(h);
    if (h == 'b')
        return value;
    _swap(unsigned long, value);
    return value;
}

long long btohll(long long value) {
    assert(h);
    if (h == 'b')
        return value;
    _swap(long long, value);
    return value;
}

unsigned long long btohull(unsigned long long value) {
    assert(h);
    if (h == 'b')
        return value;
    _swap(unsigned long long, value);
    return value;
}

// MARK: - Little Endian to Host Endian

short ltohs(short value) {
    assert(h);
    if (h == 'l')
        return value;
    _swap(short, value);
    return value;
}

unsigned short ltohus(unsigned short value) {
    assert(h);
    if (h == 'l')
        return value;
    _swap(unsigned short, value);
    return value;
}

int ltohi(int value) {
    assert(h);
    if (h == 'l')
        return value;
    _swap(int, value);
    return value;
}

unsigned ltohu(unsigned value) {
    assert(h);
    if (h == 'l')
        return value;
    _swap(unsigned, value);
    return value;
}

long ltohl(long value) {
    assert(h);
    if (h == 'l')
        return value;
    _swap(long, value);
    return value;
}

unsigned long ltohul(unsigned long value) {
    assert(h);
    if (h == 'l')
        return value;
    _swap(unsigned long, value);
    return value;
}

long long ltohll(long long value) {
    assert(h);
    if (h == 'l')
        return value;
    _swap(long long, value);
    return value;
}

unsigned long long ltohull(unsigned long long value) {
    assert(h);
    if (h == 'l')
        return value;
    _swap(unsigned long long, value);
    return value;
}

// MARK: -

void _endian_void(void) {}
