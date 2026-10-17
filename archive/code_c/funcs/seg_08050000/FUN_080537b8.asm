; undefined FUN_080537b8(void)
; entry 0x80537b8  size 20 bytes

080537B8: 00b5         push {lr}
080537BA: 044a         ldr r2,[0x080537cc]
080537BC: 817b         ldrb r1,[r0,#0xe]
080537BE: 8900         lsl r1,r1,#0x2
080537C0: 8918         add r1,r1,r2
080537C2: 0968         ldr r1,[r1,#0x0]
080537C4: d5f0dcfb     bl 0x08128f80
080537C8: 01bc         pop {r0}
080537CA: 0047         bx r0
