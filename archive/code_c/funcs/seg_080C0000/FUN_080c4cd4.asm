; undefined FUN_080c4cd4(void)
; entry 0x80c4cd4  size 20 bytes

080C4CD4: 00b5         push {lr}
080C4CD6: 044a         ldr r2,[0x080c4ce8]
080C4CD8: 017c         ldrb r1,[r0,#0x10]
080C4CDA: 8900         lsl r1,r1,#0x2
080C4CDC: 8918         add r1,r1,r2
080C4CDE: 0968         ldr r1,[r1,#0x0]
080C4CE0: 64f04ef9     bl 0x08128f80
080C4CE4: 01bc         pop {r0}
080C4CE6: 0047         bx r0
