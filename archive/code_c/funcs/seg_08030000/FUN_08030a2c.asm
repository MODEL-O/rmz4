; undefined FUN_08030a2c(void)
; entry 0x8030a2c  size 20 bytes

08030A2C: 00b5         push {lr}
08030A2E: 044a         ldr r2,[0x08030a40]
08030A30: c17b         ldrb r1,[r0,#0xf]
08030A32: 8900         lsl r1,r1,#0x2
08030A34: 8918         add r1,r1,r2
08030A36: 0968         ldr r1,[r1,#0x0]
08030A38: f8f0a2fa     bl 0x08128f80
08030A3C: 01bc         pop {r0}
08030A3E: 0047         bx r0
