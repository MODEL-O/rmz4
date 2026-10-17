; undefined FUN_080c3534(void)
; entry 0x80c3534  size 20 bytes

080C3534: 00b5         push {lr}
080C3536: 044a         ldr r2,[0x080c3548]
080C3538: 017c         ldrb r1,[r0,#0x10]
080C353A: 8900         lsl r1,r1,#0x2
080C353C: 8918         add r1,r1,r2
080C353E: 0968         ldr r1,[r1,#0x0]
080C3540: 65f01efd     bl 0x08128f80
080C3544: 01bc         pop {r0}
080C3546: 0047         bx r0
