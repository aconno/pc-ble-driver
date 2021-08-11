#include <endian.h>
#include <stdint.h>

uint32_t ltoh_uint32_t(const uint32_t little)
{
#if __BYTE_ORDER == __LITTLE_ENDIAN
    return little;
#else
    return __builtin_bswap32(little);
#endif
}

uint32_t htol_uint32_t(const uint32_t host)
{
#if __BYTE_ORDER == __LITTLE_ENDIAN
    return host;
#else
    return __builtin_bswap32(host);
#endif
}

uint16_t ltoh_uint16_t(const uint16_t little)
{
#if __BYTE_ORDER == __LITTLE_ENDIAN
    return little;
#else
    return __builtin_bswap16(little);
#endif
}

uint16_t htol_uint16_t(const uint16_t host)
{
#if __BYTE_ORDER == __LITTLE_ENDIAN
    return host;
#else
    return __builtin_bswap16(host);
#endif
}
