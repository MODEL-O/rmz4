; undefined FUN_08072a90(void)
; entry 0x8072a90  size 20 bytes

08072A90: 00b5         push {lr}
08072A92: 044a         ldr r2,[0x08072aa4]
08072A94: 817b         ldrb r1,[r0,#0xe]
08072A96: 8900         lsl r1,r1,#0x2
08072A98: 8918         add r1,r1,r2
08072A9A: 0968         ldr r1,[r1,#0x0]
08072A9C: b6f070fa     bl 0x08128f80
08072AA0: 01bc         pop {r0}
08072AA2: 0047         bx r0
