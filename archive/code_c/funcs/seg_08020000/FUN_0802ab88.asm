; undefined FUN_0802ab88(void)
; entry 0x802ab88  size 74 bytes

0802AB88: 30b5         push {r4,r5,lr}
0802AB8A: 051c         add r5,r0,#0x0
0802AB8C: 141c         add r4,r2,#0x0
0802AB8E: 0906         lsl r1,r1,#0x18
0802AB90: 0b0e         lsr r3,r1,#0x18
0802AB92: 0b4a         ldr r2,[0x0802abc0]
0802AB94: 1168         ldr r1,[r2,#0x0]
0802AB96: 0b48         ldr r0,[0x0802abc4]
0802AB98: 4843         mul r0,r1
0802AB9A: 0b49         ldr r1,[0x0802abc8]
0802AB9C: 4018         add r0,r0,r1
0802AB9E: 4000         lsl r0,r0,#0x1
0802ABA0: 4108         lsr r1,r0,#0x1
0802ABA2: 1160         str r1,[r2,#0x0]
0802ABA4: 400c         lsr r0,r0,#0x11
0802ABA6: 0006         lsl r0,r0,#0x18
0802ABA8: 000e         lsr r0,r0,#0x18
0802ABAA: ff2b         cmp r3,#0xff
0802ABAC: 0ed0         beq 0x0802abcc
0802ABAE: 1f28         cmp r0,#0x1f
0802ABB0: 0cd8         bhi 0x0802abcc
0802ABB2: 181c         add r0,r3,#0x0
0802ABB4: 211c         add r1,r4,#0x0
0802ABB6: 0022         mov r2,#0x0
0802ABB8: ddf0a6fe     bl 0x08108908
0802ABBC: 0020         mov r0,#0x0
0802ABBE: 0be0         b 0x0802abd8
0802ABCC: 281c         add r0,r5,#0x0
0802ABCE: 211c         add r1,r4,#0x0
0802ABD0: fff78cff     bl 0x0802aaec
0802ABD4: 0006         lsl r0,r0,#0x18
0802ABD6: 000e         lsr r0,r0,#0x18
0802ABD8: 30bc         pop {r4,r5}
0802ABDA: 02bc         pop {r1}
0802ABDC: 0847         bx r1
