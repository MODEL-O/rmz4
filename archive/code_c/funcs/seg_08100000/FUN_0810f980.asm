; undefined FUN_0810f980(void)
; entry 0x810f980  size 48 bytes

0810F980: f0b5         push {r4,r5,r6,r7,lr}
0810F982: 5746         mov r7,r10
0810F984: 4e46         mov r6,r9
0810F986: 4546         mov r5,r8
0810F988: e0b4         push {r5,r6,r7}
0810F98A: 83b0         sub sp,#0xc
0810F98C: 071c         add r7,r0,#0x0
0810F98E: 7879         ldrb r0,[r7,#0x5]
0810F990: 0428         cmp r0,#0x4
0810F992: 00d9         bls 0x0810f996
0810F994: 2ae2         b 0x0810fdec
0810F996: 8000         lsl r0,r0,#0x2
0810F998: 0149         ldr r1,[0x0810f9a0]
0810F99A: 4018         add r0,r0,r1
0810F99C: 0068         ldr r0,[r0,#0x0]
0810F99E: 8746         mov pc,r0
0810FDEC: 03b0         add sp,#0xc
0810FDEE: 38bc         pop {r3,r4,r5}
0810FDF0: 9846         mov r8,r3
0810FDF2: a146         mov r9,r4
0810FDF4: aa46         mov r10,r5
0810FDF6: f0bc         pop {r4,r5,r6,r7}
0810FDF8: 01bc         pop {r0}
0810FDFA: 0047         bx r0
