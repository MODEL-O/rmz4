; undefined FUN_08012948(void)
; entry 0x8012948  size 28 bytes

08012948: 00b5         push {lr}
0801294A: 011c         add r1,r0,#0x0
0801294C: 0120         mov r0,#0x1
0801294E: f4f721fb     bl 0x08006f94
08012952: 0004         lsl r0,r0,#0x10
08012954: 000c         lsr r0,r0,#0x10
08012956: 0128         cmp r0,#0x1
08012958: 01d8         bhi 0x0801295e
0801295A: 0020         mov r0,#0x0
0801295C: 00e0         b 0x08012960
0801295E: 0120         mov r0,#0x1
08012960: 02bc         pop {r1}
08012962: 0847         bx r1
