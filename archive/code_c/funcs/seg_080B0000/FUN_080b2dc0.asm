; undefined FUN_080b2dc0(void)
; entry 0x80b2dc0  size 62 bytes

080B2DC0: 10b5         push {r4,lr}
080B2DC2: 041c         add r4,r0,#0x0
080B2DC4: 606d         ldr r0,[r4,#0x54]
080B2DC6: a021         mov r1,#0xa0
080B2DC8: 0901         lsl r1,r1,#0x4
080B2DCA: 4018         add r0,r0,r1
080B2DCC: a16d         ldr r1,[r4,#0x58]
080B2DCE: 0a4a         ldr r2,[0x080b2df8]
080B2DD0: 8918         add r1,r1,r2
080B2DD2: 54f753ff     bl 0x08007c7c
080B2DD6: 0004         lsl r0,r0,#0x10
080B2DD8: 0028         cmp r0,#0x0
080B2DDA: 0ad1         bne 0x080b2df2
080B2DDC: 606d         ldr r0,[r4,#0x54]
080B2DDE: 0749         ldr r1,[0x080b2dfc]
080B2DE0: 4018         add r0,r0,r1
080B2DE2: a16d         ldr r1,[r4,#0x58]
080B2DE4: 044a         ldr r2,[0x080b2df8]
080B2DE6: 8918         add r1,r1,r2
080B2DE8: 54f748ff     bl 0x08007c7c
080B2DEC: 0004         lsl r0,r0,#0x10
080B2DEE: 0028         cmp r0,#0x0
080B2DF0: 06d0         beq 0x080b2e00
080B2DF2: 0120         mov r0,#0x1
080B2DF4: 05e0         b 0x080b2e02
080B2E00: 0020         mov r0,#0x0
080B2E02: 10bc         pop {r4}
080B2E04: 02bc         pop {r1}
080B2E06: 0847         bx r1
