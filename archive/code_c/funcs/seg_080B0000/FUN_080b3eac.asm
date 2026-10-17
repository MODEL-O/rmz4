; undefined FUN_080b3eac(void)
; entry 0x80b3eac  size 46 bytes

080B3EAC: 00b5         push {lr}
080B3EAE: 011c         add r1,r0,#0x0
080B3EB0: b831         add r1,#0xb8
080B3EB2: 406d         ldr r0,[r0,#0x54]
080B3EB4: 0968         ldr r1,[r1,#0x0]
080B3EB6: 421a         sub r2,r0,r1
080B3EB8: 002a         cmp r2,#0x0
080B3EBA: 04db         blt 0x080b3ec6
080B3EBC: a020         mov r0,#0xa0
080B3EBE: 8001         lsl r0,r0,#0x6
080B3EC0: 8242         cmp r2,r0
080B3EC2: 05dc         bgt 0x080b3ed0
080B3EC4: 06e0         b 0x080b3ed4
080B3EC6: 091a         sub r1,r1,r0
080B3EC8: a020         mov r0,#0xa0
080B3ECA: 8001         lsl r0,r0,#0x6
080B3ECC: 8142         cmp r1,r0
080B3ECE: 01dd         ble 0x080b3ed4
080B3ED0: 0120         mov r0,#0x1
080B3ED2: 00e0         b 0x080b3ed6
080B3ED4: 0020         mov r0,#0x0
080B3ED6: 02bc         pop {r1}
080B3ED8: 0847         bx r1
