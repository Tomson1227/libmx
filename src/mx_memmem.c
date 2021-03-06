 #include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len)
{
    if(big_len == 0 || little_len == 0 || big_len < little_len)
        return NULL;
    
    unsigned char *big_copy = (unsigned char *)big;
    
    for(size_t i = 0; i <= big_len - little_len; ++i) {
        if(!mx_memcmp(&big_copy[i], little, little_len)) {
            return (void *) &big_copy[i];
        }
    }

    return NULL;
}
