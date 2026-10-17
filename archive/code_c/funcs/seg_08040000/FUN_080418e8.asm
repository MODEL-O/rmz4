; undefined FUN_080418e8(void)
; entry 0x80418e8  size 20 bytes

080418E8: 00b5         push {lr}
080418EA: 044a         ldr r2,[0x080418fc]
080418EC: 017c         ldrb r1,[r0,#0x10]
080418EE: 8900         lsl r1,r1,#0x2
080418F0: 8918         add r1,r1,r2
080418F2: 0968         ldr r1,[r1,#0x0]
080418F4: e7f044fb     bl 0x08128f80
080418F8: 01bc         pop {r0}
080418FA: 0047         bx r0
