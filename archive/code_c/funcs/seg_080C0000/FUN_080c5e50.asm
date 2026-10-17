; undefined FUN_080c5e50(void)
; entry 0x80c5e50  size 20 bytes

080C5E50: 00b5         push {lr}
080C5E52: 044a         ldr r2,[0x080c5e64]
080C5E54: 017c         ldrb r1,[r0,#0x10]
080C5E56: 8900         lsl r1,r1,#0x2
080C5E58: 8918         add r1,r1,r2
080C5E5A: 0968         ldr r1,[r1,#0x0]
080C5E5C: 63f090f8     bl 0x08128f80
080C5E60: 01bc         pop {r0}
080C5E62: 0047         bx r0
