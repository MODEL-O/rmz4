; undefined FUN_080b7300(void)
; entry 0x80b7300  size 71 bytes

080B7300: 0002         lsl r0,r0,#0x8
080B7302: 154b         ldr r3,[0x080b7358]
080B7304: c018         add r0,r0,r3
080B7306: 0918         add r1,r1,r0
080B7308: 0891         str r1,[sp,#0x20]
080B730A: 01a8         add r0,sp,#0x4
080B730C: 8018         add r0,r0,r2
080B730E: ba6d         ldr r2,[r7,#0x58]
080B7310: 0068         ldr r0,[r0,#0x0]
080B7312: 1218         add r2,r2,r0
080B7314: 4046         mov r0,r8
080B7316: 7043         mul r0,r6
080B7318: 0019         add r0,r0,r4
080B731A: 4000         lsl r0,r0,#0x1
080B731C: 4108         lsr r1,r0,#0x1
080B731E: 4c46         mov r4,r9
080B7320: 2160         str r1,[r4,#0x0]
080B7322: 400c         lsr r0,r0,#0x11
080B7324: 2840         and r0,r5
080B7326: 0002         lsl r0,r0,#0x8
080B7328: c018         add r0,r0,r3
080B732A: 1218         add r2,r2,r0
080B732C: 08a9         add r1,sp,#0x20
080B732E: 4a60         str r2,[r1,#0x4]
080B7330: 6046         mov r0,r12
080B7332: 0122         mov r2,#0x1
080B7334: 0023         mov r3,#0x0
080B7336: 31f047f8     bl 0x080e83c8
080B733A: 0ab0         add sp,#0x28
080B733C: 18bc         pop {r3,r4}
080B733E: 9846         mov r8,r3
080B7340: a146         mov r9,r4
080B7342: f0bc         pop {r4,r5,r6,r7}
080B7344: 01bc         pop {r0}
080B7346: 0047         bx r0
