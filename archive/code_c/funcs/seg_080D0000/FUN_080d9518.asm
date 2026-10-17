; undefined FUN_080d9518(void)
; entry 0x80d9518  size 20 bytes

080D9518: 00b5         push {lr}
080D951A: 044a         ldr r2,[0x080d952c]
080D951C: 017c         ldrb r1,[r0,#0x10]
080D951E: 8900         lsl r1,r1,#0x2
080D9520: 8918         add r1,r1,r2
080D9522: 0968         ldr r1,[r1,#0x0]
080D9524: 4ff02cfd     bl 0x08128f80
080D9528: 01bc         pop {r0}
080D952A: 0047         bx r0
