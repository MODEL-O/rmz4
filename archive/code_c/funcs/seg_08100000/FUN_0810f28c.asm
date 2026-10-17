; undefined FUN_0810f28c(void)
; entry 0x810f28c  size 28 bytes

0810F28C: 70b5         push {r4,r5,r6,lr}
0810F28E: 061c         add r6,r0,#0x0
0810F290: 707b         ldrb r0,[r6,#0xd]
0810F292: 0628         cmp r0,#0x6
0810F294: 00d9         bls 0x0810f298
0810F296: 2fe1         b 0x0810f4f8
0810F298: 8000         lsl r0,r0,#0x2
0810F29A: 0249         ldr r1,[0x0810f2a4]
0810F29C: 4018         add r0,r0,r1
0810F29E: 0068         ldr r0,[r0,#0x0]
0810F2A0: 8746         mov pc,r0
0810F4F8: 70bc         pop {r4,r5,r6}
0810F4FA: 01bc         pop {r0}
0810F4FC: 0047         bx r0
