; undefined FUN_080da93c(void)
; entry 0x80da93c  size 20 bytes

080DA93C: 00b5         push {lr}
080DA93E: 044a         ldr r2,[0x080da950]
080DA940: 017c         ldrb r1,[r0,#0x10]
080DA942: 8900         lsl r1,r1,#0x2
080DA944: 8918         add r1,r1,r2
080DA946: 0968         ldr r1,[r1,#0x0]
080DA948: 4ef01afb     bl 0x08128f80
080DA94C: 01bc         pop {r0}
080DA94E: 0047         bx r0
