; undefined FUN_080900b4(void)
; entry 0x80900b4  size 20 bytes

080900B4: 00b5         push {lr}
080900B6: 044a         ldr r2,[0x080900c8]
080900B8: 017c         ldrb r1,[r0,#0x10]
080900BA: 8900         lsl r1,r1,#0x2
080900BC: 8918         add r1,r1,r2
080900BE: 0968         ldr r1,[r1,#0x0]
080900C0: 98f05eff     bl 0x08128f80
080900C4: 01bc         pop {r0}
080900C6: 0047         bx r0
