; undefined FUN_08112a0c(void)
; entry 0x8112a0c  size 20 bytes

08112A0C: 00b5         push {lr}
08112A0E: 044a         ldr r2,[0x08112a20]
08112A10: 4178         ldrb r1,[r0,#0x1]
08112A12: 8900         lsl r1,r1,#0x2
08112A14: 8918         add r1,r1,r2
08112A16: 0968         ldr r1,[r1,#0x0]
08112A18: 16f0b2fa     bl 0x08128f80
08112A1C: 01bc         pop {r0}
08112A1E: 0047         bx r0
