; undefined FUN_081057d0(void)
; entry 0x81057d0  size 20 bytes

081057D0: 00b5         push {lr}
081057D2: 044a         ldr r2,[0x081057e4]
081057D4: 017c         ldrb r1,[r0,#0x10]
081057D6: 8900         lsl r1,r1,#0x2
081057D8: 8918         add r1,r1,r2
081057DA: 0968         ldr r1,[r1,#0x0]
081057DC: 23f0d0fb     bl 0x08128f80
081057E0: 01bc         pop {r0}
081057E2: 0047         bx r0
