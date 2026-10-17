; undefined FUN_080333dc(void)
; entry 0x80333dc  size 20 bytes

080333DC: 00b5         push {lr}
080333DE: 044a         ldr r2,[0x080333f0]
080333E0: 817b         ldrb r1,[r0,#0xe]
080333E2: 8900         lsl r1,r1,#0x2
080333E4: 8918         add r1,r1,r2
080333E6: 0968         ldr r1,[r1,#0x0]
080333E8: f5f0cafd     bl 0x08128f80
080333EC: 01bc         pop {r0}
080333EE: 0047         bx r0
