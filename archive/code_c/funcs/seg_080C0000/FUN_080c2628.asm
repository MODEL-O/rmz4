; undefined FUN_080c2628(void)
; entry 0x80c2628  size 20 bytes

080C2628: 00b5         push {lr}
080C262A: 044a         ldr r2,[0x080c263c]
080C262C: 017c         ldrb r1,[r0,#0x10]
080C262E: 8900         lsl r1,r1,#0x2
080C2630: 8918         add r1,r1,r2
080C2632: 0968         ldr r1,[r1,#0x0]
080C2634: 66f0a4fc     bl 0x08128f80
080C2638: 01bc         pop {r0}
080C263A: 0047         bx r0
