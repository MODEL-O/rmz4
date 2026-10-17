; undefined FUN_08108f48(void)
; entry 0x8108f48  size 46 bytes

08108F48: 30b5         push {r4,r5,lr}
08108F4A: 82b0         sub sp,#0x8
08108F4C: 041c         add r4,r0,#0x0
08108F4E: 0a48         ldr r0,[0x08108f78]
08108F50: 0460         str r4,[r0,#0x0]
08108F52: 0025         mov r5,#0x0
08108F54: 0095         str r5,[sp,#0x0]
08108F56: 8022         mov r2,#0x80
08108F58: 5204         lsl r2,r2,#0x11
08108F5A: 6846         mov r0,sp
08108F5C: 211c         add r1,r4,#0x0
08108F5E: 1ff03ffe     bl 0x08128be0
08108F62: 0195         str r5,[sp,#0x4]
08108F64: 01a8         add r0,sp,#0x4
08108F66: 054a         ldr r2,[0x08108f7c]
08108F68: 211c         add r1,r4,#0x0
08108F6A: 1ff03bfe     bl 0x08128be4
08108F6E: 02b0         add sp,#0x8
08108F70: 30bc         pop {r4,r5}
08108F72: 01bc         pop {r0}
08108F74: 0047         bx r0
