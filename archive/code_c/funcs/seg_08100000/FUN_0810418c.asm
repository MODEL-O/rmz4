; undefined FUN_0810418c(void)
; entry 0x810418c  size 62 bytes

0810418C: 10b5         push {r4,lr}
0810418E: 021c         add r2,r0,#0x0
08104190: 0021         mov r1,#0x0
08104192: 131c         add r3,r2,#0x0
08104194: b433         add r3,#0xb4
08104196: 0024         mov r4,#0x0
08104198: 8800         lsl r0,r1,#0x2
0810419A: 1818         add r0,r3,r0
0810419C: 0460         str r4,[r0,#0x0]
0810419E: 481c         add r0,r1,#0x1
081041A0: 0006         lsl r0,r0,#0x18
081041A2: 010e         lsr r1,r0,#0x18
081041A4: 0329         cmp r1,#0x3
081041A6: f7d9         bls 0x08104198
081041A8: 0021         mov r1,#0x0
081041AA: 0023         mov r3,#0x0
081041AC: 8800         lsl r0,r1,#0x2
081041AE: 8018         add r0,r0,r2
081041B0: c365         str r3,[r0,#0x5c]
081041B2: 481c         add r0,r1,#0x1
081041B4: 0006         lsl r0,r0,#0x18
081041B6: 010e         lsr r1,r0,#0x18
081041B8: 0329         cmp r1,#0x3
081041BA: f7d9         bls 0x081041ac
081041BC: 0020         mov r0,#0x0
081041BE: 9074         strb r0,[r2,#0x12]
081041C0: 0320         mov r0,#0x3
081041C2: d074         strb r0,[r2,#0x13]
081041C4: 10bc         pop {r4}
081041C6: 01bc         pop {r0}
081041C8: 0047         bx r0
