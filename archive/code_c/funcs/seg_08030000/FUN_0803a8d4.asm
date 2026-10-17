; undefined FUN_0803a8d4(void)
; entry 0x803a8d4  size 26 bytes

0803A8D4: 10b5         push {r4,lr}
0803A8D6: 0004         lsl r0,r0,#0x10
0803A8D8: 000c         lsr r0,r0,#0x10
0803A8DA: 054c         ldr r4,[0x0803a8f0]
0803A8DC: 4300         lsl r3,r0,#0x1
0803A8DE: 1b19         add r3,r3,r4
0803A8E0: 1980         strh r1,[r3,#0x0]
0803A8E2: 0449         ldr r1,[0x0803a8f4]
0803A8E4: 4018         add r0,r0,r1
0803A8E6: 0270         strb r2,[r0,#0x0]
0803A8E8: 10bc         pop {r4}
0803A8EA: 01bc         pop {r0}
0803A8EC: 0047         bx r0
