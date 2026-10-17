; undefined FUN_080b05b4(void)
; entry 0x80b05b4  size 22 bytes

080B05B4: 00b5         push {lr}
080B05B6: 027c         ldrb r2,[r0,#0x10]
080B05B8: 002a         cmp r2,#0x0
080B05BA: 02d1         bne 0x080b05c2
080B05BC: 011c         add r1,r0,#0x0
080B05BE: b731         add r1,#0xb7
080B05C0: 0a70         strb r2,[r1,#0x0]
080B05C2: cff793f9     bl 0x0807f8ec
080B05C6: 01bc         pop {r0}
080B05C8: 0047         bx r0
