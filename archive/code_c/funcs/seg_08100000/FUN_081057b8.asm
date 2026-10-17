; undefined FUN_081057b8(void)
; entry 0x81057b8  size 20 bytes

081057B8: 00b5         push {lr}
081057BA: 044a         ldr r2,[0x081057cc]
081057BC: 017c         ldrb r1,[r0,#0x10]
081057BE: 8900         lsl r1,r1,#0x2
081057C0: 8918         add r1,r1,r2
081057C2: 0968         ldr r1,[r1,#0x0]
081057C4: 23f0dcfb     bl 0x08128f80
081057C8: 01bc         pop {r0}
081057CA: 0047         bx r0
