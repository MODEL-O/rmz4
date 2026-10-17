; undefined FUN_080dff68(void)
; entry 0x80dff68  size 20 bytes

080DFF68: 00b5         push {lr}
080DFF6A: 044a         ldr r2,[0x080dff7c]
080DFF6C: 017c         ldrb r1,[r0,#0x10]
080DFF6E: 8900         lsl r1,r1,#0x2
080DFF70: 8918         add r1,r1,r2
080DFF72: 0968         ldr r1,[r1,#0x0]
080DFF74: 49f004f8     bl 0x08128f80
080DFF78: 01bc         pop {r0}
080DFF7A: 0047         bx r0
