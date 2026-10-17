; undefined FUN_0806dc68(void)
; entry 0x806dc68  size 28 bytes

0806DC68: 70b5         push {r4,r5,r6,lr}
0806DC6A: 061c         add r6,r0,#0x0
0806DC6C: f07b         ldrb r0,[r6,#0xf]
0806DC6E: 0528         cmp r0,#0x5
0806DC70: 00d9         bls 0x0806dc74
0806DC72: a5e0         b 0x0806ddc0
0806DC74: 8000         lsl r0,r0,#0x2
0806DC76: 0249         ldr r1,[0x0806dc80]
0806DC78: 4018         add r0,r0,r1
0806DC7A: 0068         ldr r0,[r0,#0x0]
0806DC7C: 8746         mov pc,r0
0806DDC0: 70bc         pop {r4,r5,r6}
0806DDC2: 01bc         pop {r0}
0806DDC4: 0047         bx r0
