; undefined FUN_0810f500(void)
; entry 0x810f500  size 28 bytes

0810F500: 70b5         push {r4,r5,r6,lr}
0810F502: 061c         add r6,r0,#0x0
0810F504: 707b         ldrb r0,[r6,#0xd]
0810F506: 0628         cmp r0,#0x6
0810F508: 00d9         bls 0x0810f50c
0810F50A: dee0         b 0x0810f6ca
0810F50C: 8000         lsl r0,r0,#0x2
0810F50E: 0249         ldr r1,[0x0810f518]
0810F510: 4018         add r0,r0,r1
0810F512: 0068         ldr r0,[r0,#0x0]
0810F514: 8746         mov pc,r0
0810F6CA: 70bc         pop {r4,r5,r6}
0810F6CC: 01bc         pop {r0}
0810F6CE: 0047         bx r0
