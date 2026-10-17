; undefined FUN_08030c7c(void)
; entry 0x8030c7c  size 20 bytes

08030C7C: 00b5         push {lr}
08030C7E: 044a         ldr r2,[0x08030c90]
08030C80: c17b         ldrb r1,[r0,#0xf]
08030C82: 8900         lsl r1,r1,#0x2
08030C84: 8918         add r1,r1,r2
08030C86: 0968         ldr r1,[r1,#0x0]
08030C88: f8f07af9     bl 0x08128f80
08030C8C: 01bc         pop {r0}
08030C8E: 0047         bx r0
