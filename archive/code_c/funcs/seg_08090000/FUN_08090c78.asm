; undefined FUN_08090c78(void)
; entry 0x8090c78  size 20 bytes

08090C78: 00b5         push {lr}
08090C7A: 044a         ldr r2,[0x08090c8c]
08090C7C: 017c         ldrb r1,[r0,#0x10]
08090C7E: 8900         lsl r1,r1,#0x2
08090C80: 8918         add r1,r1,r2
08090C82: 0968         ldr r1,[r1,#0x0]
08090C84: 98f07cf9     bl 0x08128f80
08090C88: 01bc         pop {r0}
08090C8A: 0047         bx r0
