; undefined FUN_0803aaf4(void)
; entry 0x803aaf4  size 52 bytes

0803AAF4: 70b5         push {r4,r5,r6,lr}
0803AAF6: 0023         mov r3,#0x0
0803AAF8: 074e         ldr r6,[0x0803ab18]
0803AAFA: 0725         mov r5,#0x7
0803AAFC: 0124         mov r4,#0x1
0803AAFE: 1a1c         add r2,r3,#0x0
0803AB00: 4e32         add r2,#0x4e
0803AB02: d010         asr r0,r2,#0x3
0803AB04: 8019         add r0,r0,r6
0803AB06: 0178         ldrb r1,[r0,#0x0]
0803AB08: 101c         add r0,r2,#0x0
0803AB0A: 2840         and r0,r5
0803AB0C: 0141         asr r1,r0
0803AB0E: 2140         and r1,r4
0803AB10: 0029         cmp r1,#0x0
0803AB12: 03d1         bne 0x0803ab1c
0803AB14: 0020         mov r0,#0x0
0803AB16: 06e0         b 0x0803ab26
0803AB1C: 832a         cmp r2,#0x83
0803AB1E: 01d0         beq 0x0803ab24
0803AB20: 0133         add r3,#0x1
0803AB22: ece7         b 0x0803aafe
0803AB24: 0120         mov r0,#0x1
0803AB26: 70bc         pop {r4,r5,r6}
0803AB28: 02bc         pop {r1}
0803AB2A: 0847         bx r1
