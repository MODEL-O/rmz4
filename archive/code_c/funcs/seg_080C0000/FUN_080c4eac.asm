; undefined FUN_080c4eac(void)
; entry 0x80c4eac  size 20 bytes

080C4EAC: 00b5         push {lr}
080C4EAE: 044a         ldr r2,[0x080c4ec0]
080C4EB0: 017c         ldrb r1,[r0,#0x10]
080C4EB2: 8900         lsl r1,r1,#0x2
080C4EB4: 8918         add r1,r1,r2
080C4EB6: 0968         ldr r1,[r1,#0x0]
080C4EB8: 64f062f8     bl 0x08128f80
080C4EBC: 01bc         pop {r0}
080C4EBE: 0047         bx r0
