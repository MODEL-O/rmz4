; undefined FUN_080f5ddc(void)
; entry 0x80f5ddc  size 20 bytes

080F5DDC: 00b5         push {lr}
080F5DDE: 044a         ldr r2,[0x080f5df0]
080F5DE0: 017c         ldrb r1,[r0,#0x10]
080F5DE2: 8900         lsl r1,r1,#0x2
080F5DE4: 8918         add r1,r1,r2
080F5DE6: 0968         ldr r1,[r1,#0x0]
080F5DE8: 33f0caf8     bl 0x08128f80
080F5DEC: 01bc         pop {r0}
080F5DEE: 0047         bx r0
