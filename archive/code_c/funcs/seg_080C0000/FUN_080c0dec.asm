; undefined FUN_080c0dec(void)
; entry 0x80c0dec  size 20 bytes

080C0DEC: 00b5         push {lr}
080C0DEE: 044a         ldr r2,[0x080c0e00]
080C0DF0: 017c         ldrb r1,[r0,#0x10]
080C0DF2: 8900         lsl r1,r1,#0x2
080C0DF4: 8918         add r1,r1,r2
080C0DF6: 0968         ldr r1,[r1,#0x0]
080C0DF8: 68f0c2f8     bl 0x08128f80
080C0DFC: 01bc         pop {r0}
080C0DFE: 0047         bx r0
