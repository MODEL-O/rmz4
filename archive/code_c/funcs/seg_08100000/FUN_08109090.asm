; undefined FUN_08109090(void)
; entry 0x8109090  size 54 bytes

08109090: 30b5         push {r4,r5,lr}
08109092: 0022         mov r2,#0x0
08109094: 0748         ldr r0,[0x081090b4]
08109096: 0368         ldr r3,[r0,#0x0]
08109098: 0325         mov r5,#0x3
0810909A: 0124         mov r4,#0x1
0810909C: 9008         lsr r0,r2,#0x2
0810909E: 1818         add r0,r3,r0
081090A0: 0178         ldrb r1,[r0,#0x0]
081090A2: 101c         add r0,r2,#0x0
081090A4: 2840         and r0,r5
081090A6: 0430         add r0,#0x4
081090A8: 0141         asr r1,r0
081090AA: 2140         and r1,r4
081090AC: 0029         cmp r1,#0x0
081090AE: 03d0         beq 0x081090b8
081090B0: 0020         mov r0,#0x0
081090B2: 07e0         b 0x081090c4
081090B8: 501c         add r0,r2,#0x1
081090BA: 0006         lsl r0,r0,#0x18
081090BC: 020e         lsr r2,r0,#0x18
081090BE: 1b2a         cmp r2,#0x1b
081090C0: ecd9         bls 0x0810909c
081090C2: 0120         mov r0,#0x1
081090C4: 30bc         pop {r4,r5}
081090C6: 02bc         pop {r1}
081090C8: 0847         bx r1
