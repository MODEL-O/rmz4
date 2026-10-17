; undefined FUN_080a0468(void)
; entry 0x80a0468  size 20 bytes

080A0468: 00b5         push {lr}
080A046A: 044a         ldr r2,[0x080a047c]
080A046C: 417b         ldrb r1,[r0,#0xd]
080A046E: 8900         lsl r1,r1,#0x2
080A0470: 8918         add r1,r1,r2
080A0472: 0968         ldr r1,[r1,#0x0]
080A0474: 88f084fd     bl 0x08128f80
080A0478: 01bc         pop {r0}
080A047A: 0047         bx r0
