; undefined FUN_0801dd7c(void)
; entry 0x801dd7c  size 36 bytes

0801DD7C: 10b5         push {r4,lr}
0801DD7E: 0006         lsl r0,r0,#0x18
0801DD80: 000e         lsr r0,r0,#0x18
0801DD82: 0906         lsl r1,r1,#0x18
0801DD84: 0c0e         lsr r4,r1,#0x18
0801DD86: 0828         cmp r0,#0x8
0801DD88: 00d9         bls 0x0801dd8c
0801DD8A: cde0         b 0x0801df28
0801DD8C: 8000         lsl r0,r0,#0x2
0801DD8E: 0249         ldr r1,[0x0801dd98]
0801DD90: 4018         add r0,r0,r1
0801DD92: 0068         ldr r0,[r0,#0x0]
0801DD94: 8746         mov pc,r0
0801DF28: 0023         mov r3,#0x0
0801DF2A: 181c         add r0,r3,#0x0
0801DF2C: 10bc         pop {r4}
0801DF2E: 02bc         pop {r1}
0801DF30: 0847         bx r1
