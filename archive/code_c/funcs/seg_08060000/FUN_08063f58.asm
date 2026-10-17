; undefined FUN_08063f58(void)
; entry 0x8063f58  size 20 bytes

08063F58: 00b5         push {lr}
08063F5A: 044a         ldr r2,[0x08063f6c]
08063F5C: 817b         ldrb r1,[r0,#0xe]
08063F5E: 8900         lsl r1,r1,#0x2
08063F60: 8918         add r1,r1,r2
08063F62: 0968         ldr r1,[r1,#0x0]
08063F64: c5f00cf8     bl 0x08128f80
08063F68: 01bc         pop {r0}
08063F6A: 0047         bx r0
