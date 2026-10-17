; undefined FUN_08057a8c(void)
; entry 0x8057a8c  size 20 bytes

08057A8C: 00b5         push {lr}
08057A8E: 044a         ldr r2,[0x08057aa0]
08057A90: 817b         ldrb r1,[r0,#0xe]
08057A92: 8900         lsl r1,r1,#0x2
08057A94: 8918         add r1,r1,r2
08057A96: 0968         ldr r1,[r1,#0x0]
08057A98: d1f072fa     bl 0x08128f80
08057A9C: 01bc         pop {r0}
08057A9E: 0047         bx r0
