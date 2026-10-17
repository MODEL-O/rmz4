; undefined FUN_080d68e4(void)
; entry 0x80d68e4  size 20 bytes

080D68E4: 00b5         push {lr}
080D68E6: 044a         ldr r2,[0x080d68f8]
080D68E8: 017c         ldrb r1,[r0,#0x10]
080D68EA: 8900         lsl r1,r1,#0x2
080D68EC: 8918         add r1,r1,r2
080D68EE: 0968         ldr r1,[r1,#0x0]
080D68F0: 52f046fb     bl 0x08128f80
080D68F4: 01bc         pop {r0}
080D68F6: 0047         bx r0
