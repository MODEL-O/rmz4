; undefined FUN_08056f10(void)
; entry 0x8056f10  size 20 bytes

08056F10: 00b5         push {lr}
08056F12: 044a         ldr r2,[0x08056f24]
08056F14: 817b         ldrb r1,[r0,#0xe]
08056F16: 8900         lsl r1,r1,#0x2
08056F18: 8918         add r1,r1,r2
08056F1A: 0968         ldr r1,[r1,#0x0]
08056F1C: d2f030f8     bl 0x08128f80
08056F20: 01bc         pop {r0}
08056F22: 0047         bx r0
