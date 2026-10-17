; undefined FUN_080c2fe0(void)
; entry 0x80c2fe0  size 20 bytes

080C2FE0: 00b5         push {lr}
080C2FE2: 044a         ldr r2,[0x080c2ff4]
080C2FE4: 017c         ldrb r1,[r0,#0x10]
080C2FE6: 8900         lsl r1,r1,#0x2
080C2FE8: 8918         add r1,r1,r2
080C2FEA: 0968         ldr r1,[r1,#0x0]
080C2FEC: 65f0c8ff     bl 0x08128f80
080C2FF0: 01bc         pop {r0}
080C2FF2: 0047         bx r0
