; undefined FUN_08028c60(void)
; entry 0x8028c60  size 32 bytes

08028C60: 70b5         push {r4,r5,r6,lr}
08028C62: 041c         add r4,r0,#0x0
08028C64: e068         ldr r0,[r4,#0xc]
08028C66: 4078         ldrb r0,[r0,#0x1]
08028C68: 0728         cmp r0,#0x7
08028C6A: 00d9         bls 0x08028c6e
08028C6C: 9de0         b 0x08028daa
08028C6E: 8000         lsl r0,r0,#0x2
08028C70: 0149         ldr r1,[0x08028c78]
08028C72: 4018         add r0,r0,r1
08028C74: 0068         ldr r0,[r0,#0x0]
08028C76: 8746         mov pc,r0
08028DAA: 0020         mov r0,#0x0
08028DAC: 70bc         pop {r4,r5,r6}
08028DAE: 02bc         pop {r1}
08028DB0: 0847         bx r1
