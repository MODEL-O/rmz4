; undefined FUN_080c2bb8(void)
; entry 0x80c2bb8  size 20 bytes

080C2BB8: 00b5         push {lr}
080C2BBA: 044a         ldr r2,[0x080c2bcc]
080C2BBC: 017c         ldrb r1,[r0,#0x10]
080C2BBE: 8900         lsl r1,r1,#0x2
080C2BC0: 8918         add r1,r1,r2
080C2BC2: 0968         ldr r1,[r1,#0x0]
080C2BC4: 66f0dcf9     bl 0x08128f80
080C2BC8: 01bc         pop {r0}
080C2BCA: 0047         bx r0
