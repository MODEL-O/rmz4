; undefined FUN_080ec4b4(void)
; entry 0x80ec4b4  size 20 bytes

080EC4B4: 00b5         push {lr}
080EC4B6: 044a         ldr r2,[0x080ec4c8]
080EC4B8: 017c         ldrb r1,[r0,#0x10]
080EC4BA: 8900         lsl r1,r1,#0x2
080EC4BC: 8918         add r1,r1,r2
080EC4BE: 0968         ldr r1,[r1,#0x0]
080EC4C0: 3cf05efd     bl 0x08128f80
080EC4C4: 01bc         pop {r0}
080EC4C6: 0047         bx r0
