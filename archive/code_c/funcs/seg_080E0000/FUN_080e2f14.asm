; undefined FUN_080e2f14(void)
; entry 0x80e2f14  size 20 bytes

080E2F14: 00b5         push {lr}
080E2F16: 044a         ldr r2,[0x080e2f28]
080E2F18: 017c         ldrb r1,[r0,#0x10]
080E2F1A: 8900         lsl r1,r1,#0x2
080E2F1C: 8918         add r1,r1,r2
080E2F1E: 0968         ldr r1,[r1,#0x0]
080E2F20: 46f02ef8     bl 0x08128f80
080E2F24: 01bc         pop {r0}
080E2F26: 0047         bx r0
