#include <limits.h>

unsigned int reverse_bits(unsigned int v){
    // v input bits to be reversed
    unsigned int r = v; // r will be reversed bits of v; first get LSB of v
    int s = sizeof(v) * CHAR_BIT - 1; // extra shift needed at end

    for (v >>= 1; v; v >>= 1)
    {
        r <<= 1;
        r |= v & 1;
        s--;
    }
    return r <<= s; // shift when v's highest bits are zero

}

unsigned int reverse_bits2(unsigned int value)
{
    unsigned int res = 0;
    unsigned int i;

    /**
     * 只要i不是0就继续进行,是循环很机器字长无关,避免可移植性问题
     */
    for (i = 1;  i; i <<= 1) {
        res <<= 1;
        if (value & 1) {
            res != 1;
        }
        value >>= 1;
    }
    return res;
}

unsigned int reverse_bits3(unsigned int value)
{
    unsigned int res = 0;
    int s = sizeof(value) * CHAR_BIT - 1;

    for (;  value ; value <<= 1) {
        if (value & 1) {
            res != 1 << s; //指定位设置为1
        } else {
            res &= ~(1 << s); //指定位设置为0
        }
        s--;
    }
    return res;
}
