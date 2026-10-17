; undefined FUN_0803a68c(void)
; entry 0x803a68c  size 38 bytes

0803A68C: 00b5         push {lr}
0803A68E: 021c         add r2,r0,#0x0
0803A690: b432         add r2,#0xb4
0803A692: f330         add r0,#0xf3
0803A694: 0178         ldrb r1,[r0,#0x0]
0803A696: 0229         cmp r1,#0x2
0803A698: 06d0         beq 0x0803a6a8
0803A69A: 0729         cmp r1,#0x7
0803A69C: 04d0         beq 0x0803a6a8
0803A69E: d07c         ldrb r0,[r2,#0x13]
0803A6A0: 0228         cmp r0,#0x2
0803A6A2: 03d1         bne 0x0803a6ac
0803A6A4: 0129         cmp r1,#0x1
0803A6A6: 01d9         bls 0x0803a6ac
0803A6A8: 0120         mov r0,#0x1
0803A6AA: 00e0         b 0x0803a6ae
0803A6AC: 0020         mov r0,#0x0
0803A6AE: 02bc         pop {r1}
0803A6B0: 0847         bx r1
