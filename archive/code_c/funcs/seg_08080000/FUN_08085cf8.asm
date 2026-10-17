; undefined FUN_08085cf8(void)
; entry 0x8085cf8  size 28 bytes

08085CF8: 10b5         push {r4,lr}
08085CFA: 041c         add r4,r0,#0x0
08085CFC: a07b         ldrb r0,[r4,#0xe]
08085CFE: 0528         cmp r0,#0x5
08085D00: 00d9         bls 0x08085d04
08085D02: 8ae0         b 0x08085e1a
08085D04: 8000         lsl r0,r0,#0x2
08085D06: 0249         ldr r1,[0x08085d10]
08085D08: 4018         add r0,r0,r1
08085D0A: 0068         ldr r0,[r0,#0x0]
08085D0C: 8746         mov pc,r0
08085E1A: 10bc         pop {r4}
08085E1C: 01bc         pop {r0}
08085E1E: 0047         bx r0
