; undefined FUN_08108f0c(void)
; entry 0x8108f0c  size 54 bytes

08108F0C: 30b5         push {r4,r5,lr}
08108F0E: 0022         mov r2,#0x0
08108F10: 0748         ldr r0,[0x08108f30]
08108F12: 0368         ldr r3,[r0,#0x0]
08108F14: 0125         mov r5,#0x1
08108F16: 0f24         mov r4,#0xf
08108F18: 5008         lsr r0,r2,#0x1
08108F1A: 1818         add r0,r3,r0
08108F1C: 0178         ldrb r1,[r0,#0x0]
08108F1E: 101c         add r0,r2,#0x0
08108F20: 2840         and r0,r5
08108F22: 8000         lsl r0,r0,#0x2
08108F24: 0141         asr r1,r0
08108F26: 2140         and r1,r4
08108F28: 0029         cmp r1,#0x0
08108F2A: 03d1         bne 0x08108f34
08108F2C: 0020         mov r0,#0x0
08108F2E: 07e0         b 0x08108f40
08108F34: 501c         add r0,r2,#0x1
08108F36: 0006         lsl r0,r0,#0x18
08108F38: 020e         lsr r2,r0,#0x18
08108F3A: 322a         cmp r2,#0x32
08108F3C: ecd9         bls 0x08108f18
08108F3E: 0120         mov r0,#0x1
08108F40: 30bc         pop {r4,r5}
08108F42: 02bc         pop {r1}
08108F44: 0847         bx r1
