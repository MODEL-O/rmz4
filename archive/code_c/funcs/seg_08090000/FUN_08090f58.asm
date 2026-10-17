; undefined FUN_08090f58(void)
; entry 0x8090f58  size 20 bytes

08090F58: 00b5         push {lr}
08090F5A: 044a         ldr r2,[0x08090f6c]
08090F5C: 017c         ldrb r1,[r0,#0x10]
08090F5E: 8900         lsl r1,r1,#0x2
08090F60: 8918         add r1,r1,r2
08090F62: 0968         ldr r1,[r1,#0x0]
08090F64: 98f00cf8     bl 0x08128f80
08090F68: 01bc         pop {r0}
08090F6A: 0047         bx r0
