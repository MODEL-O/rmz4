; undefined FUN_080f9734(void)
; entry 0x80f9734  size 20 bytes

080F9734: 00b5         push {lr}
080F9736: 044a         ldr r2,[0x080f9748]
080F9738: 817b         ldrb r1,[r0,#0xe]
080F973A: 8900         lsl r1,r1,#0x2
080F973C: 8918         add r1,r1,r2
080F973E: 0968         ldr r1,[r1,#0x0]
080F9740: 2ff01efc     bl 0x08128f80
080F9744: 01bc         pop {r0}
080F9746: 0047         bx r0
