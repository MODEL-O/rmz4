; undefined FUN_08046394(void)
; entry 0x8046394  size 20 bytes

08046394: 00b5         push {lr}
08046396: 044a         ldr r2,[0x080463a8]
08046398: 017c         ldrb r1,[r0,#0x10]
0804639A: 8900         lsl r1,r1,#0x2
0804639C: 8918         add r1,r1,r2
0804639E: 0968         ldr r1,[r1,#0x0]
080463A0: e2f0eefd     bl 0x08128f80
080463A4: 01bc         pop {r0}
080463A6: 0047         bx r0
