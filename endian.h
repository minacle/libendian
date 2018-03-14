/// @file

#ifndef ENDIAN_H
#define ENDIAN_H

// MARK: - Host Endian to Big Endian

/// @defgroup htob Host Endian to Big Endian
/// @brief
///  This behavior can be disabled by defining \p ENDIAN_NO_HTOB macro.
/// @{
#ifndef ENDIAN_NO_HTOB
#undef htob
#ifndef ENDIAN_NO_GENERIC
/// @brief
///  Convert an integer value with Host Endian to Big Endian.
/// @details
///  It passes \p value as is if Host Endian is same with Big Endian.
/// @param value
///  An integer value with Host Endian.
/// @return
///  An integer value with Big Endian.
#define htob(value) _Generic(value, \
        short: htobs, \
        unsigned short: htobus, \
        int: htobi, \
        unsigned: htobu, \
        long: htobl, \
        unsigned long: htobul, \
        long long: htobll, \
        unsigned long long: htobull, \
        default: _endian_void)(value)
#endif
/// @brief
///  Convert a \c short value with Host Endian to Big Endian.
/// @details
///  It passes \p value as is if Host Endian is same with Big Endian.
/// @param value
///  A \c short value with Host Endian.
/// @return
///  A \c short value with Big Endian.
short htobs(short value);
/// @brief
///  Convert an \c unsigned \c short value with Host Endian to Big Endian.
/// @details
///  It passes \p value as is if Host Endian is same with Big Endian.
/// @param value
///  An \c unsigned \c short value with Host Endian.
/// @return
///  An \c unsigned \c short value with Big Endian.
unsigned short htobus(unsigned short value);
/// @brief
///  Convert an \c int value with Host Endian to Big Endian.
/// @details
///  It passes \p value as is if Host Endian is same with Big Endian.
/// @param value
///  An \c int value with Host Endian.
/// @return
///  An \c int value with Big Endian.
int htobi(int value);
/// @brief
///  Convert an \c unsigned value with Host Endian to Big Endian.
/// @details
///  It passes \p value as is if Host Endian is same with Big Endian.
/// @param value
///  An \c unsigned value with Host Endian.
/// @return
///  An \c unsigned value with Big Endian.
unsigned htobu(unsigned value);
/// @brief
///  Convert a \c long value with Host Endian to Big Endian.
/// @details
///  It passes \p value as is if Host Endian is same with Big Endian.
/// @param value
///  A \c long value with Host Endian.
/// @return
///  A \c long value with Big Endian.
long htobl(long value);
/// @brief
///  Convert an \c unsigned \c long value with Host Endian to Big Endian.
/// @details
///  It passes \p value as is if Host Endian is same with Big Endian.
/// @param value
///  An \c unsigned \c long value with Host Endian.
/// @return
///  An \c unsigned \c long value with Big Endian.
unsigned long htobul(unsigned long value);
/// @brief
///  Convert a \c long \c long value with Host Endian to Big Endian.
/// @details
///  It passes \p value as is if Host Endian is same with Big Endian.
/// @param value
///  A \c long \c long value with Host Endian.
/// @return
///  A \c long \c long value with Big Endian.
long long htobll(long long value);
/// @brief
///  Convert an \c unsigned \c long \c long value with Host Endian to
///  Big Endian.
/// @details
///  It passes \p value as is if Host Endian is same with Big Endian.
/// @param value
///  An \c unsigned \c long \c long value with Host Endian.
/// @return
///  An \c unsigned \c long \c long value with Big Endian.
unsigned long long htobull(unsigned long long value);
#endif
///@}

// MARK: - Host Endian to Little Endian

/// @defgroup htol Host Endian to Little Endian
/// @brief
///  This behavior can be disabled by defining \p ENDIAN_NO_HTOL macro.
/// @{
#ifndef ENDIAN_NO_HTOL
#undef htol
#ifndef ENDIAN_NO_GENERIC
/// @brief
///  Convert an integer value with Host Endian to Little Endian.
/// @details
///  It passes \p value as is if Host Endian is same with Little Endian.
/// @param value
///  An integer value with Host Endian.
/// @return
///  An integer value with Little Endian.
#define htol(value) _Generic(value, \
        short: htols, \
        unsigned short: htolus, \
        int: htoli, \
        unsigned: htolu, \
        long: htoll, \
        unsigned long: htolul, \
        long long: htolll, \
        unsigned long long: htolull, \
        default: _endian_void)(value)
#endif
/// @brief
///  Convert a \c short value with Host Endian to Little Endian.
/// @details
///  It passes \p value as is if Host Endian is same with Little Endian.
/// @param value
///  A \c short value with Host Endian.
/// @return
///  A \c short value with Little Endian.
short htols(short value);
/// @brief
///  Convert an \c unsigned \c short value with Host Endian to Little Endian.
/// @details
///  It passes \p value as is if Host Endian is same with Little Endian.
/// @param value
///  An \c unsigned \c short value with Host Endian.
/// @return
///  An \c unsigned \c short value with Little Endian.
unsigned short htolus(unsigned short value);
/// @brief
///  Convert an \c int value with Host Endian to Little Endian.
/// @details
///  It passes \p value as is if Host Endian is same with Little Endian.
/// @param value
///  An \c int value with Host Endian.
/// @return
///  An \c int value with Little Endian.
int htoli(int value);
/// @brief
///  Convert an \c unsigned value with Host Endian to Little Endian.
/// @details
///  It passes \p value as is if Host Endian is same with Little Endian.
/// @param value
///  An \c unsigned value with Host Endian.
/// @return
///  An \c unsigned value with Little Endian.
unsigned htolu(unsigned value);
/// @brief
///  Convert a \c long value with Host Endian to Little Endian.
/// @details
///  It passes \p value as is if Host Endian is same with Little Endian.
/// @param value
///  A \c long value with Host Endian.
/// @return
///  A \c long value with Little Endian.
long htoll(long value);
/// @brief
///  Convert an \c unsigned \c long value with Host Endian to Little Endian.
/// @details
///  It passes \p value as is if Host Endian is same with Little Endian.
/// @param value
///  An \c unsigned \c long value with Host Endian.
/// @return
///  An \c unsigned \c long value with Little Endian.
unsigned long htolul(unsigned long value);
/// @brief
///  Convert a \c long \c long value with Host Endian to Little Endian.
/// @details
///  It passes \p value as is if Host Endian is same with Little Endian.
/// @param value
///  A \c long \c long value with Host Endian.
/// @return
///  A \c long \c long value with Little Endian.
long long htolll(long long value);
/// @brief
///  Convert an \c unsigned \c long \c long value with Host Endian to
///  Little Endian.
/// @details
///  It passes \p value as is if Host Endian is same with Little Endian.
/// @param value
///  An \c unsigned \c long \c long value with Host Endian.
/// @return
///  An \c unsigned \c long \c long value with Little Endian.
unsigned long long htolull(unsigned long long value);
#endif
///@}

// MARK: - Big Endian to Host Endian

/// @defgroup btoh Big Endian to Host Endian
/// @brief
///  This behavior can be disabled by defining \p ENDIAN_NO_BTOH macro.
/// @{
#ifndef ENDIAN_NO_BTOH
#undef btoh
#ifndef ENDIAN_NO_GENERIC
/// @brief
///  Convert an integer value with Big Endian to Host Endian.
/// @details
///  It passes \p value as is if Big Endian is same with Host Endian.
/// @param value
///  An integer value with Big Endian.
/// @return
///  An integer value with Host Endian.
#define btoh(value) _Generic(value, \
        short: btohs, \
        unsigned short: btohus, \
        int: btohi, \
        unsigned: btohu, \
        long: btohl, \
        unsigned long: btohul, \
        long long: btohll, \
        unsigned long long: btohull, \
        default: _endian_void)(value)
#endif
/// @brief
///  Convert a \c short value with Big Endian to Host Endian.
/// @details
///  It passes \p value as is if Big Endian is same with Host Endian.
/// @param value
///  A \c short value with Big Endian.
/// @return
///  A \c short value with Host Endian.
short btohs(short value);
/// @brief
///  Convert an \c unsigned \c short value with Big Endian to Host Endian.
/// @details
///  It passes \p value as is if Big Endian is same with Host Endian.
/// @param value
///  An \c unsigned \c short value with Big Endian.
/// @return
///  An \c unsigned \c short value with Host Endian.
unsigned short btohus(unsigned short value);
/// @brief
///  Convert an \c int value with Big Endian to Host Endian.
/// @details
///  It passes \p value as is if Big Endian is same with Host Endian.
/// @param value
///  An \c int value with Host Endian.
/// @return
///  An \c int value with Big Endian.
int btohi(int value);
/// @brief
///  Convert an \c unsigned value with Big Endian to Host Endian.
/// @details
///  It passes \p value as is if Big Endian is same with Host Endian.
/// @param value
///  An \c unsigned value with Big Endian.
/// @return
///  An \c unsigned value with Host Endian.
unsigned btohu(unsigned value);
/// @brief
///  Convert a \c long value with Big Endian to Host Endian.
/// @details
///  It passes \p value as is if Big Endian is same with Host Endian.
/// @param value
///  A \c long value with Big Endian.
/// @return
///  A \c long value with Host Endian.
long btohl(long value);
/// @brief
///  Convert an \c unsigned \c long value with Big Endian to Host Endian.
/// @details
///  It passes \p value as is if Big Endian is same with Host Endian.
/// @param value
///  An \c unsigned \c long value with Big Endian.
/// @return
///  An \c unsigned \c long value with Host Endian.
unsigned long btohul(unsigned long value);
/// @brief
///  Convert a \c long \c long value with Big Endian to Host Endian.
/// @details
///  It passes \p value as is if Big Endian is same with Host Endian.
/// @param value
///  A \c long \c long value with Big Endian.
/// @return
///  A \c long \c long value with Host Endian.
long long btohll(long long value);
/// @brief
///  Convert an \c unsigned \c long \c long value with Host Endian to
///  Big Endian.
/// @details
///  It passes \p value as is if Big Endian is same with Host Endian.
/// @param value
///  An \c unsigned \c long \c long value with Big Endian.
/// @return
///  An \c unsigned \c long \c long value with Host Endian.
unsigned long long btohull(unsigned long long value);
#endif
///@}

// MARK: - Little Endian to Host Endian

/// @defgroup ltoh Little Endian to Host Endian
/// @brief
///  This behavior can be disabled by defining \p ENDIAN_NO_LTOH macro.
/// @{
#ifndef ENDIAN_NO_LTOH
#undef ltoh
#ifndef ENDIAN_NO_GENERIC
/// @brief
///  Convert an integer value with Little Endian to Host Endian.
/// @details
///  It passes \p value as is if Little Endian is same with Host Endian.
/// @param value
///  An integer value with Little Endian.
/// @return
///  An integer value with Host Endian.
#define ltoh(value) _Generic(value, \
        short: ltohs, \
        unsigned short: ltohus, \
        int: ltohi, \
        unsigned: ltohu, \
        long: ltohl, \
        unsigned long: ltohul, \
        long long: ltohll, \
        unsigned long long: ltohull, \
        default: _endian_void)(value)
#endif
/// @brief
///  Convert a \c short value with Little Endian to Host Endian.
/// @details
///  It passes \p value as is if Little Endian is same with Host Endian.
/// @param value
///  A \c short value with Little Endian.
/// @return
///  A \c short value with Host Endian.
short ltohs(short value);
/// @brief
///  Convert an \c unsigned \c short value with Little Endian to Host Endian.
/// @details
///  It passes \p value as is if Little Endian is same with Host Endian.
/// @param value
///  An \c unsigned \c short value with Little Endian.
/// @return
///  An \c unsigned \c short value with Host Endian.
unsigned short ltohus(unsigned short value);
/// @brief
///  Convert an \c int value with Little Endian to Host Endian.
/// @details
///  It passes \p value as is if Little Endian is same with Host Endian.
/// @param value
///  An \c int value with Host Endian.
/// @return
///  An \c int value with Little Endian.
int ltohi(int value);
/// @brief
///  Convert an \c unsigned value with Little Endian to Host Endian.
/// @details
///  It passes \p value as is if Little Endian is same with Host Endian.
/// @param value
///  An \c unsigned value with Little Endian.
/// @return
///  An \c unsigned value with Host Endian.
unsigned ltohu(unsigned value);
/// @brief
///  Convert a \c long value with Little Endian to Host Endian.
/// @details
///  It passes \p value as is if Little Endian is same with Host Endian.
/// @param value
///  A \c long value with Little Endian.
/// @return
///  A \c long value with Host Endian.
long ltohl(long value);
/// @brief
///  Convert an \c unsigned \c long value with Little Endian to Host Endian.
/// @details
///  It passes \p value as is if Little Endian is same with Host Endian.
/// @param value
///  An \c unsigned \c long value with Little Endian.
/// @return
///  An \c unsigned \c long value with Host Endian.
unsigned long ltohul(unsigned long value);
/// @brief
///  Convert a \c long \c long value with Little Endian to Host Endian.
/// @details
///  It passes \p value as is if Little Endian is same with Host Endian.
/// @param value
///  A \c long \c long value with Little Endian.
/// @return
///  A \c long \c long value with Host Endian.
long long ltohll(long long value);
/// @brief
///  Convert an \c unsigned \c long \c long value with Host Endian to
///  Little Endian.
/// @details
///  It passes \p value as is if Little Endian is same with Host Endian.
/// @param value
///  An \c unsigned \c long \c long value with Little Endian.
/// @return
///  An \c unsigned \c long \c long value with Host Endian.
unsigned long long ltohull(unsigned long long value);
#endif
///@}

// MARK: -

/// @cond
void _endian_void(void);
/// @endcond

#endif
