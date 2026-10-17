; undefined FUN_080b0330(void)
; entry 0x80b0330  size 40 bytes

080B0330: 00b5         push {lr}
080B0332: 426d         ldr r2,[r0,#0x54]
080B0334: 816d         ldr r1,[r0,#0x58]
080B0336: 101c         add r0,r2,#0x0
080B0338: 56f772fe     bl 0x08007020
080B033C: 8021         mov r1,#0x80
080B033E: 0902         lsl r1,r1,#0x8
080B0340: 0140         and r1,r0
080B0342: 0029         cmp r1,#0x0
080B0344: 03d1         bne 0x080b034e
080B0346: 3520         mov r0,#0x35
080B0348: 52f7e2fb     bl 0x08002b10
080B034C: 02e0         b 0x080b0354
080B034E: 3120         mov r0,#0x31
080B0350: 52f7defb     bl 0x08002b10
080B0354: 01bc         pop {r0}
080B0356: 0047         bx r0
