; undefined FUN_08105b4c(void)
; entry 0x8105b4c  size 28 bytes

08105B4C: 00b5         push {lr}
08105B4E: 064a         ldr r2,[0x08105b68]
08105B50: 417a         ldrb r1,[r0,#0x9]
08105B52: 8900         lsl r1,r1,#0x2
08105B54: 8918         add r1,r1,r2
08105B56: 0222         mov r2,#0x2
08105B58: c260         str r2,[r0,#0xc]
08105B5A: 0968         ldr r1,[r1,#0x0]
08105B5C: 8968         ldr r1,[r1,#0x8]
08105B5E: 4161         str r1,[r0,#0x14]
08105B60: fff736fe     bl 0x081057d0
08105B64: 01bc         pop {r0}
08105B66: 0047         bx r0
