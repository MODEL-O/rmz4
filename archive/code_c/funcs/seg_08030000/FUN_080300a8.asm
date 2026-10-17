; undefined FUN_080300a8(void)
; entry 0x80300a8  size 20 bytes

080300A8: 00b5         push {lr}
080300AA: 044a         ldr r2,[0x080300bc]
080300AC: 817b         ldrb r1,[r0,#0xe]
080300AE: 8900         lsl r1,r1,#0x2
080300B0: 8918         add r1,r1,r2
080300B2: 0968         ldr r1,[r1,#0x0]
080300B4: f8f064ff     bl 0x08128f80
080300B8: 01bc         pop {r0}
080300BA: 0047         bx r0
