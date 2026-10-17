; undefined FUN_0806e004(void)
; entry 0x806e004  size 28 bytes

0806E004: 70b5         push {r4,r5,r6,lr}
0806E006: 061c         add r6,r0,#0x0
0806E008: f07b         ldrb r0,[r6,#0xf]
0806E00A: 0528         cmp r0,#0x5
0806E00C: 00d9         bls 0x0806e010
0806E00E: 8ee0         b 0x0806e12e
0806E010: 8000         lsl r0,r0,#0x2
0806E012: 0249         ldr r1,[0x0806e01c]
0806E014: 4018         add r0,r0,r1
0806E016: 0068         ldr r0,[r0,#0x0]
0806E018: 8746         mov pc,r0
0806E12E: 70bc         pop {r4,r5,r6}
0806E130: 01bc         pop {r0}
0806E132: 0047         bx r0
