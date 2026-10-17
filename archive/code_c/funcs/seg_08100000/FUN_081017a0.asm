; undefined FUN_081017a0(void)
; entry 0x81017a0  size 20 bytes

081017A0: 00b5         push {lr}
081017A2: 044a         ldr r2,[0x081017b4]
081017A4: 017c         ldrb r1,[r0,#0x10]
081017A6: 8900         lsl r1,r1,#0x2
081017A8: 8918         add r1,r1,r2
081017AA: 0968         ldr r1,[r1,#0x0]
081017AC: 27f0e8fb     bl 0x08128f80
081017B0: 01bc         pop {r0}
081017B2: 0047         bx r0
