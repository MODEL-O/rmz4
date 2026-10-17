; undefined FUN_080957d0(void)
; entry 0x80957d0  size 76 bytes

080957D0: 10b5         push {r4,lr}
080957D2: 81b0         sub sp,#0x4
080957D4: 041c         add r4,r0,#0x0
080957D6: 1149         ldr r1,[0x0809581c]
080957D8: 6846         mov r0,sp
080957DA: 0422         mov r2,#0x4
080957DC: 93f03cfd     bl 0x08129258
080957E0: 607c         ldrb r0,[r4,#0x11]
080957E2: e17b         ldrb r1,[r4,#0xf]
080957E4: 0029         cmp r1,#0x0
080957E6: 04d1         bne 0x080957f2
080957E8: 6844         add r0,sp
080957EA: 0078         ldrb r0,[r0,#0x0]
080957EC: a074         strb r0,[r4,#0x12]
080957EE: 481c         add r0,r1,#0x1
080957F0: e073         strb r0,[r4,#0xf]
080957F2: 201c         add r0,r4,#0x0
080957F4: 87f7fcfb     bl 0x0801cff0
080957F8: 201c         add r0,r4,#0x0
080957FA: 00f06dfa     bl 0x08095cd8
080957FE: a07c         ldrb r0,[r4,#0x12]
08095800: 0138         sub r0,#0x1
08095802: a074         strb r0,[r4,#0x12]
08095804: 0006         lsl r0,r0,#0x18
08095806: 010e         lsr r1,r0,#0x18
08095808: 0029         cmp r1,#0x0
0809580A: 03d1         bne 0x08095814
0809580C: 0220         mov r0,#0x2
0809580E: 6073         strb r0,[r4,#0xd]
08095810: a173         strb r1,[r4,#0xe]
08095812: e173         strb r1,[r4,#0xf]
08095814: 01b0         add sp,#0x4
08095816: 10bc         pop {r4}
08095818: 01bc         pop {r0}
0809581A: 0047         bx r0
