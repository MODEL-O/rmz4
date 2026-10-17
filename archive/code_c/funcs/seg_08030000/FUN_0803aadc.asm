; undefined FUN_0803aadc(void)
; entry 0x803aadc  size 24 bytes

0803AADC: 00b5         push {lr}
0803AADE: e630         add r0,#0xe6
0803AAE0: 0078         ldrb r0,[r0,#0x0]
0803AAE2: ff28         cmp r0,#0xff
0803AAE4: 03d0         beq 0x0803aaee
0803AAE6: 0128         cmp r0,#0x1
0803AAE8: 01d8         bhi 0x0803aaee
0803AAEA: 0120         mov r0,#0x1
0803AAEC: 00e0         b 0x0803aaf0
0803AAEE: 0020         mov r0,#0x0
0803AAF0: 02bc         pop {r1}
0803AAF2: 0847         bx r1
