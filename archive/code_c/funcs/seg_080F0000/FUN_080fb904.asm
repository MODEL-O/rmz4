; undefined FUN_080fb904(void)
; entry 0x80fb904  size 48 bytes

080FB904: 00b5         push {lr}
080FB906: c168         ldr r1,[r0,#0xc]
080FB908: c96a         ldr r1,[r1,#0x2c]
080FB90A: c26a         ldr r2,[r0,#0x2c]
080FB90C: 0820         mov r0,#0x8
080FB90E: 0856         ldrsb r0,[r1,r0]
080FB910: 0028         cmp r0,#0x0
080FB912: 0dd1         bne 0x080fb930
080FB914: 107c         ldrb r0,[r2,#0x10]
080FB916: 0028         cmp r0,#0x0
080FB918: 03d1         bne 0x080fb922
080FB91A: b431         add r1,#0xb4
080FB91C: e120         mov r0,#0xe1
080FB91E: c000         lsl r0,r0,#0x3
080FB920: 01e0         b 0x080fb926
080FB922: b431         add r1,#0xb4
080FB924: 0348         ldr r0,[0x080fb934]
080FB926: 8863         str r0,[r1,#0x38]
080FB928: 111c         add r1,r2,#0x0
080FB92A: bd31         add r1,#0xbd
080FB92C: 0120         mov r0,#0x1
080FB92E: 0870         strb r0,[r1,#0x0]
080FB930: 01bc         pop {r0}
080FB932: 0047         bx r0
