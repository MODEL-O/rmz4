; undefined FUN_080ad678(void)
; entry 0x80ad678  size 20 bytes

080AD678: 00b5         push {lr}
080AD67A: 044a         ldr r2,[0x080ad68c]
080AD67C: 017c         ldrb r1,[r0,#0x10]
080AD67E: 8900         lsl r1,r1,#0x2
080AD680: 8918         add r1,r1,r2
080AD682: 0968         ldr r1,[r1,#0x0]
080AD684: 7bf07cfc     bl 0x08128f80
080AD688: 01bc         pop {r0}
080AD68A: 0047         bx r0
