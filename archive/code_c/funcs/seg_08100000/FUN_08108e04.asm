; undefined FUN_08108e04(void)
; entry 0x8108e04  size 46 bytes

08108E04: 30b5         push {r4,r5,lr}
08108E06: 82b0         sub sp,#0x8
08108E08: 041c         add r4,r0,#0x0
08108E0A: 0a48         ldr r0,[0x08108e34]
08108E0C: 0460         str r4,[r0,#0x0]
08108E0E: 0025         mov r5,#0x0
08108E10: 0095         str r5,[sp,#0x0]
08108E12: 8022         mov r2,#0x80
08108E14: 5204         lsl r2,r2,#0x11
08108E16: 6846         mov r0,sp
08108E18: 211c         add r1,r4,#0x0
08108E1A: 1ff0e1fe     bl 0x08128be0
08108E1E: 0195         str r5,[sp,#0x4]
08108E20: 01a8         add r0,sp,#0x4
08108E22: 054a         ldr r2,[0x08108e38]
08108E24: 211c         add r1,r4,#0x0
08108E26: 1ff0ddfe     bl 0x08128be4
08108E2A: 02b0         add sp,#0x8
08108E2C: 30bc         pop {r4,r5}
08108E2E: 01bc         pop {r0}
08108E30: 0047         bx r0
