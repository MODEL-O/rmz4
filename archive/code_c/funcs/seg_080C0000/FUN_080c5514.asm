; undefined FUN_080c5514(void)
; entry 0x80c5514  size 20 bytes

080C5514: 00b5         push {lr}
080C5516: 044a         ldr r2,[0x080c5528]
080C5518: 017c         ldrb r1,[r0,#0x10]
080C551A: 8900         lsl r1,r1,#0x2
080C551C: 8918         add r1,r1,r2
080C551E: 0968         ldr r1,[r1,#0x0]
080C5520: 63f02efd     bl 0x08128f80
080C5524: 01bc         pop {r0}
080C5526: 0047         bx r0
