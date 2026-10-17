; undefined FUN_081057a0(void)
; entry 0x81057a0  size 20 bytes

081057A0: 00b5         push {lr}
081057A2: 044a         ldr r2,[0x081057b4]
081057A4: 017c         ldrb r1,[r0,#0x10]
081057A6: 8900         lsl r1,r1,#0x2
081057A8: 8918         add r1,r1,r2
081057AA: 0968         ldr r1,[r1,#0x0]
081057AC: 23f0e8fb     bl 0x08128f80
081057B0: 01bc         pop {r0}
081057B2: 0047         bx r0
