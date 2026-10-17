; undefined FUN_080c24ec(void)
; entry 0x80c24ec  size 20 bytes

080C24EC: 00b5         push {lr}
080C24EE: 044a         ldr r2,[0x080c2500]
080C24F0: 017c         ldrb r1,[r0,#0x10]
080C24F2: 8900         lsl r1,r1,#0x2
080C24F4: 8918         add r1,r1,r2
080C24F6: 0968         ldr r1,[r1,#0x0]
080C24F8: 66f042fd     bl 0x08128f80
080C24FC: 01bc         pop {r0}
080C24FE: 0047         bx r0
