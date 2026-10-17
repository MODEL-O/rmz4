; undefined FUN_0805459c(void)
; entry 0x805459c  size 20 bytes

0805459C: 00b5         push {lr}
0805459E: 044a         ldr r2,[0x080545b0]
080545A0: 817b         ldrb r1,[r0,#0xe]
080545A2: 8900         lsl r1,r1,#0x2
080545A4: 8918         add r1,r1,r2
080545A6: 0968         ldr r1,[r1,#0x0]
080545A8: d4f0eafc     bl 0x08128f80
080545AC: 01bc         pop {r0}
080545AE: 0047         bx r0
