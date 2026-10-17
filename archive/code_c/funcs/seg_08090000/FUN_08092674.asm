; undefined FUN_08092674(void)
; entry 0x8092674  size 28 bytes

08092674: 10b5         push {r4,lr}
08092676: 041c         add r4,r0,#0x0
08092678: a07b         ldrb r0,[r4,#0xe]
0809267A: 0528         cmp r0,#0x5
0809267C: 00d9         bls 0x08092680
0809267E: 8ce0         b 0x0809279a
08092680: 8000         lsl r0,r0,#0x2
08092682: 0249         ldr r1,[0x0809268c]
08092684: 4018         add r0,r0,r1
08092686: 0068         ldr r0,[r0,#0x0]
08092688: 8746         mov pc,r0
0809279A: 10bc         pop {r4}
0809279C: 01bc         pop {r0}
0809279E: 0047         bx r0
