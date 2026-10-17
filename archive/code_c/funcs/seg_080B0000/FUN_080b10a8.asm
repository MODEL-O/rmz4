; undefined FUN_080b10a8(void)
; entry 0x80b10a8  size 70 bytes

080B10A8: 10b5         push {r4,lr}
080B10AA: 041c         add r4,r0,#0x0
080B10AC: c230         add r0,#0xc2
080B10AE: 0078         ldrb r0,[r0,#0x0]
080B10B0: ff28         cmp r0,#0xff
080B10B2: 10d1         bne 0x080b10d6
080B10B4: 211c         add r1,r4,#0x0
080B10B6: 5431         add r1,#0x54
080B10B8: 0220         mov r0,#0x2
080B10BA: 1ff0e5fd     bl 0x080d0c88
080B10BE: e16a         ldr r1,[r4,#0x2c]
080B10C0: 0029         cmp r1,#0x0
080B10C2: 08d0         beq 0x080b10d6
080B10C4: 087b         ldrb r0,[r1,#0xc]
080B10C6: 0128         cmp r0,#0x1
080B10C8: 05d8         bhi 0x080b10d6
080B10CA: 081c         add r0,r1,#0x0
080B10CC: c230         add r0,#0xc2
080B10CE: ff21         mov r1,#0xff
080B10D0: 0170         strb r1,[r0,#0x0]
080B10D2: 0020         mov r0,#0x0
080B10D4: e062         str r0,[r4,#0x2c]
080B10D6: 0649         ldr r1,[0x080b10f0]
080B10D8: 607a         ldrb r0,[r4,#0x9]
080B10DA: 8000         lsl r0,r0,#0x2
080B10DC: 4018         add r0,r0,r1
080B10DE: 0421         mov r1,#0x4
080B10E0: e160         str r1,[r4,#0xc]
080B10E2: 0068         ldr r0,[r0,#0x0]
080B10E4: 0069         ldr r0,[r0,#0x10]
080B10E6: 6061         str r0,[r4,#0x14]
080B10E8: 10bc         pop {r4}
080B10EA: 01bc         pop {r0}
080B10EC: 0047         bx r0
