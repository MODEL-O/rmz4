; undefined FUN_0807869c(void)
; entry 0x807869c  size 20 bytes

0807869C: 00b5         push {lr}
0807869E: 044a         ldr r2,[0x080786b0]
080786A0: 817b         ldrb r1,[r0,#0xe]
080786A2: 8900         lsl r1,r1,#0x2
080786A4: 8918         add r1,r1,r2
080786A6: 0968         ldr r1,[r1,#0x0]
080786A8: b0f06afc     bl 0x08128f80
080786AC: 01bc         pop {r0}
080786AE: 0047         bx r0
