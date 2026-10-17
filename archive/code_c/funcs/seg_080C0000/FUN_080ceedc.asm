; undefined FUN_080ceedc(void)
; entry 0x80ceedc  size 20 bytes

080CEEDC: 00b5         push {lr}
080CEEDE: 044a         ldr r2,[0x080ceef0]
080CEEE0: 017c         ldrb r1,[r0,#0x10]
080CEEE2: 8900         lsl r1,r1,#0x2
080CEEE4: 8918         add r1,r1,r2
080CEEE6: 0968         ldr r1,[r1,#0x0]
080CEEE8: 5af04af8     bl 0x08128f80
080CEEEC: 01bc         pop {r0}
080CEEEE: 0047         bx r0
