; undefined FUN_080ed420(void)
; entry 0x80ed420  size 38 bytes

080ED420: 00b5         push {lr}
080ED422: 827a         ldrb r2,[r0,#0xa]
080ED424: 0221         mov r1,#0x2
080ED426: 1143         orr r1,r2
080ED428: 8172         strb r1,[r0,#0xa]
080ED42A: 0123         mov r3,#0x1
080ED42C: 8374         strb r3,[r0,#0x12]
080ED42E: 064a         ldr r2,[0x080ed448]
080ED430: 417a         ldrb r1,[r0,#0x9]
080ED432: 8900         lsl r1,r1,#0x2
080ED434: 8918         add r1,r1,r2
080ED436: c360         str r3,[r0,#0xc]
080ED438: 0968         ldr r1,[r1,#0x0]
080ED43A: 4968         ldr r1,[r1,#0x4]
080ED43C: 4161         str r1,[r0,#0x14]
080ED43E: 00f005f8     bl 0x080ed44c
080ED442: 01bc         pop {r0}
080ED444: 0047         bx r0
