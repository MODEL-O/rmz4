; undefined FUN_08064e7c(void)
; entry 0x8064e7c  size 20 bytes

08064E7C: 00b5         push {lr}
08064E7E: 044a         ldr r2,[0x08064e90]
08064E80: 817b         ldrb r1,[r0,#0xe]
08064E82: 8900         lsl r1,r1,#0x2
08064E84: 8918         add r1,r1,r2
08064E86: 0968         ldr r1,[r1,#0x0]
08064E88: c4f07af8     bl 0x08128f80
08064E8C: 01bc         pop {r0}
08064E8E: 0047         bx r0
