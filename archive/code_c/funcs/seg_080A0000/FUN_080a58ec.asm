; undefined FUN_080a58ec(void)
; entry 0x80a58ec  size 20 bytes

080A58EC: 00b5         push {lr}
080A58EE: 044a         ldr r2,[0x080a5900]
080A58F0: 017c         ldrb r1,[r0,#0x10]
080A58F2: 8900         lsl r1,r1,#0x2
080A58F4: 8918         add r1,r1,r2
080A58F6: 0968         ldr r1,[r1,#0x0]
080A58F8: 83f042fb     bl 0x08128f80
080A58FC: 01bc         pop {r0}
080A58FE: 0047         bx r0
