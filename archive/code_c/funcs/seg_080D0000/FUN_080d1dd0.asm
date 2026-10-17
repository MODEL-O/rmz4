; undefined FUN_080d1dd0(void)
; entry 0x80d1dd0  size 20 bytes

080D1DD0: 00b5         push {lr}
080D1DD2: 044a         ldr r2,[0x080d1de4]
080D1DD4: 017c         ldrb r1,[r0,#0x10]
080D1DD6: 8900         lsl r1,r1,#0x2
080D1DD8: 8918         add r1,r1,r2
080D1DDA: 0968         ldr r1,[r1,#0x0]
080D1DDC: 57f0d0f8     bl 0x08128f80
080D1DE0: 01bc         pop {r0}
080D1DE2: 0047         bx r0
