; undefined FUN_08007098(void)
; entry 0x8007098  size 24 bytes

08007098: 00b5         push {lr}
0800709A: 00f069fb     bl 0x08007770
0800709E: 0021         mov r1,#0x0
080070A0: 0006         lsl r0,r0,#0x18
080070A2: 000e         lsr r0,r0,#0x18
080070A4: f028         cmp r0,#0xf0
080070A6: 00d1         bne 0x080070aa
080070A8: 0121         mov r1,#0x1
080070AA: 081c         add r0,r1,#0x0
080070AC: 02bc         pop {r1}
080070AE: 0847         bx r1
