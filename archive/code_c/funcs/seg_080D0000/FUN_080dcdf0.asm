; undefined FUN_080dcdf0(void)
; entry 0x80dcdf0  size 20 bytes

080DCDF0: 00b5         push {lr}
080DCDF2: 044a         ldr r2,[0x080dce04]
080DCDF4: 017c         ldrb r1,[r0,#0x10]
080DCDF6: 8900         lsl r1,r1,#0x2
080DCDF8: 8918         add r1,r1,r2
080DCDFA: 0968         ldr r1,[r1,#0x0]
080DCDFC: 4cf0c0f8     bl 0x08128f80
080DCE00: 01bc         pop {r0}
080DCE02: 0047         bx r0
