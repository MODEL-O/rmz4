; undefined FUN_0801df34(void)
; entry 0x801df34  size 28 bytes

0801DF34: 00b5         push {lr}
0801DF36: 031c         add r3,r0,#0x0
0801DF38: 0820         mov r0,#0x8
0801DF3A: 1856         ldrsb r0,[r3,r0]
0801DF3C: 0828         cmp r0,#0x8
0801DF3E: 00d9         bls 0x0801df42
0801DF40: c1e0         b 0x0801e0c6
0801DF42: 8000         lsl r0,r0,#0x2
0801DF44: 0149         ldr r1,[0x0801df4c]
0801DF46: 4018         add r0,r0,r1
0801DF48: 0068         ldr r0,[r0,#0x0]
0801DF4A: 8746         mov pc,r0
0801E0C6: 01bc         pop {r0}
0801E0C8: 0047         bx r0
