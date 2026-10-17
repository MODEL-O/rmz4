; undefined FUN_08122e7c(void)
; entry 0x8122e7c  size 20 bytes

08122E7C: 00b5         push {lr}
08122E7E: 044a         ldr r2,[0x08122e90]
08122E80: 8178         ldrb r1,[r0,#0x2]
08122E82: 8900         lsl r1,r1,#0x2
08122E84: 8918         add r1,r1,r2
08122E86: 0968         ldr r1,[r1,#0x0]
08122E88: 06f07af8     bl 0x08128f80
08122E8C: 01bc         pop {r0}
08122E8E: 0047         bx r0
