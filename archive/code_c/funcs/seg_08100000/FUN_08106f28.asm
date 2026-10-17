; undefined FUN_08106f28(void)
; entry 0x8106f28  size 28 bytes

08106F28: 30b5         push {r4,r5,lr}
08106F2A: 051c         add r5,r0,#0x0
08106F2C: 687b         ldrb r0,[r5,#0xd]
08106F2E: 1028         cmp r0,#0x10
08106F30: 00d9         bls 0x08106f34
08106F32: 2ce1         b 0x0810718e
08106F34: 8000         lsl r0,r0,#0x2
08106F36: 0249         ldr r1,[0x08106f40]
08106F38: 4018         add r0,r0,r1
08106F3A: 0068         ldr r0,[r0,#0x0]
08106F3C: 8746         mov pc,r0
0810718E: 30bc         pop {r4,r5}
08107190: 01bc         pop {r0}
08107192: 0047         bx r0
