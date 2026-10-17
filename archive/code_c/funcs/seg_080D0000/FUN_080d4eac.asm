; undefined FUN_080d4eac(void)
; entry 0x80d4eac  size 20 bytes

080D4EAC: 00b5         push {lr}
080D4EAE: 044a         ldr r2,[0x080d4ec0]
080D4EB0: 417c         ldrb r1,[r0,#0x11]
080D4EB2: 8900         lsl r1,r1,#0x2
080D4EB4: 8918         add r1,r1,r2
080D4EB6: 0968         ldr r1,[r1,#0x0]
080D4EB8: 54f062f8     bl 0x08128f80
080D4EBC: 01bc         pop {r0}
080D4EBE: 0047         bx r0
