; undefined FUN_08053d84(void)
; entry 0x8053d84  size 20 bytes

08053D84: 00b5         push {lr}
08053D86: 044a         ldr r2,[0x08053d98]
08053D88: 817b         ldrb r1,[r0,#0xe]
08053D8A: 8900         lsl r1,r1,#0x2
08053D8C: 8918         add r1,r1,r2
08053D8E: 0968         ldr r1,[r1,#0x0]
08053D90: d5f0f6f8     bl 0x08128f80
08053D94: 01bc         pop {r0}
08053D96: 0047         bx r0
