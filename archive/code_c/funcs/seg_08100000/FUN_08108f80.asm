; undefined FUN_08108f80(void)
; entry 0x8108f80  size 46 bytes

08108F80: 30b5         push {r4,r5,lr}
08108F82: 82b0         sub sp,#0x8
08108F84: 041c         add r4,r0,#0x0
08108F86: 0a48         ldr r0,[0x08108fb0]
08108F88: 0460         str r4,[r0,#0x0]
08108F8A: 0025         mov r5,#0x0
08108F8C: 0095         str r5,[sp,#0x0]
08108F8E: 8022         mov r2,#0x80
08108F90: 5204         lsl r2,r2,#0x11
08108F92: 6846         mov r0,sp
08108F94: 211c         add r1,r4,#0x0
08108F96: 1ff023fe     bl 0x08128be0
08108F9A: 0195         str r5,[sp,#0x4]
08108F9C: 01a8         add r0,sp,#0x4
08108F9E: 054a         ldr r2,[0x08108fb4]
08108FA0: 211c         add r1,r4,#0x0
08108FA2: 1ff01ffe     bl 0x08128be4
08108FA6: 02b0         add sp,#0x8
08108FA8: 30bc         pop {r4,r5}
08108FAA: 01bc         pop {r0}
08108FAC: 0047         bx r0
