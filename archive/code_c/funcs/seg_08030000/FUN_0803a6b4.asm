; undefined FUN_0803a6b4(void)
; entry 0x803a6b4  size 38 bytes

0803A6B4: 00b5         push {lr}
0803A6B6: 021c         add r2,r0,#0x0
0803A6B8: b432         add r2,#0xb4
0803A6BA: f330         add r0,#0xf3
0803A6BC: 0178         ldrb r1,[r0,#0x0]
0803A6BE: 0429         cmp r1,#0x4
0803A6C0: 06d0         beq 0x0803a6d0
0803A6C2: 0729         cmp r1,#0x7
0803A6C4: 04d0         beq 0x0803a6d0
0803A6C6: d07c         ldrb r0,[r2,#0x13]
0803A6C8: 0228         cmp r0,#0x2
0803A6CA: 03d1         bne 0x0803a6d4
0803A6CC: 0329         cmp r1,#0x3
0803A6CE: 01d9         bls 0x0803a6d4
0803A6D0: 0120         mov r0,#0x1
0803A6D2: 00e0         b 0x0803a6d6
0803A6D4: 0020         mov r0,#0x0
0803A6D6: 02bc         pop {r1}
0803A6D8: 0847         bx r1
