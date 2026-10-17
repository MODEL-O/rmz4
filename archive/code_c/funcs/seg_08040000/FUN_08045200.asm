; undefined FUN_08045200(void)
; entry 0x8045200  size 20 bytes

08045200: 00b5         push {lr}
08045202: 044a         ldr r2,[0x08045214]
08045204: 017c         ldrb r1,[r0,#0x10]
08045206: 8900         lsl r1,r1,#0x2
08045208: 8918         add r1,r1,r2
0804520A: 0968         ldr r1,[r1,#0x0]
0804520C: e3f0b8fe     bl 0x08128f80
08045210: 01bc         pop {r0}
08045212: 0047         bx r0
