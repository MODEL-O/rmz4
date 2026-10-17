; undefined FUN_080b10f4(void)
; entry 0x80b10f4  size 38 bytes

080B10F4: 00b5         push {lr}
080B10F6: 021c         add r2,r0,#0x0
080B10F8: d16a         ldr r1,[r2,#0x2c]
080B10FA: 0029         cmp r1,#0x0
080B10FC: 08d0         beq 0x080b1110
080B10FE: 087b         ldrb r0,[r1,#0xc]
080B1100: 0128         cmp r0,#0x1
080B1102: 05d8         bhi 0x080b1110
080B1104: 081c         add r0,r1,#0x0
080B1106: c230         add r0,#0xc2
080B1108: ff21         mov r1,#0xff
080B110A: 0170         strb r1,[r0,#0x0]
080B110C: 0020         mov r0,#0x0
080B110E: d062         str r0,[r2,#0x2c]
080B1110: 101c         add r0,r2,#0x0
080B1112: cef7ebfb     bl 0x0807f8ec
080B1116: 01bc         pop {r0}
080B1118: 0047         bx r0
