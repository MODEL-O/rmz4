; undefined FUN_0810edf8(void)
; entry 0x810edf8  size 28 bytes

0810EDF8: 70b5         push {r4,r5,r6,lr}
0810EDFA: 051c         add r5,r0,#0x0
0810EDFC: 687b         ldrb r0,[r5,#0xd]
0810EDFE: 0828         cmp r0,#0x8
0810EE00: 00d9         bls 0x0810ee04
0810EE02: 36e2         b 0x0810f272
0810EE04: 8000         lsl r0,r0,#0x2
0810EE06: 0249         ldr r1,[0x0810ee10]
0810EE08: 4018         add r0,r0,r1
0810EE0A: 0068         ldr r0,[r0,#0x0]
0810EE0C: 8746         mov pc,r0
0810F272: 70bc         pop {r4,r5,r6}
0810F274: 01bc         pop {r0}
0810F276: 0047         bx r0
