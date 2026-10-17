; undefined FUN_0810f700(void)
; entry 0x810f700  size 44 bytes

0810F700: 70b5         push {r4,r5,r6,lr}
0810F702: 81b0         sub sp,#0x4
0810F704: 051c         add r5,r0,#0x0
0810F706: 0748         ldr r0,[0x0810f724]
0810F708: 8088         ldrh r0,[r0,#0x4]
0810F70A: 0028         cmp r0,#0x0
0810F70C: 01d0         beq 0x0810f712
0810F70E: 0320         mov r0,#0x3
0810F710: 2881         strh r0,[r5,#0x8]
0810F712: 6879         ldrb r0,[r5,#0x5]
0810F714: 0628         cmp r0,#0x6
0810F716: 00d9         bls 0x0810f71a
0810F718: f7e0         b 0x0810f90a
0810F71A: 8000         lsl r0,r0,#0x2
0810F71C: 0249         ldr r1,[0x0810f728]
0810F71E: 4018         add r0,r0,r1
0810F720: 0068         ldr r0,[r0,#0x0]
0810F722: 8746         mov pc,r0
0810F90A: 01b0         add sp,#0x4
0810F90C: 70bc         pop {r4,r5,r6}
0810F90E: 01bc         pop {r0}
0810F910: 0047         bx r0
