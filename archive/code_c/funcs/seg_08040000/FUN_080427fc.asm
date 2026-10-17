; undefined FUN_080427fc(void)
; entry 0x80427fc  size 34 bytes

080427FC: 00b5         push {lr}
080427FE: c5f73dfa     bl 0x08007c7c
08042802: 0004         lsl r0,r0,#0x10
08042804: 010c         lsr r1,r0,#0x10
08042806: 0f29         cmp r1,#0xf
08042808: 00d1         bne 0x0804280c
0804280A: 0021         mov r1,#0x0
0804280C: 8020         mov r0,#0x80
0804280E: 0002         lsl r0,r0,#0x8
08042810: 0840         and r0,r1
08042812: 0028         cmp r0,#0x0
08042814: 00d0         beq 0x08042818
08042816: 0021         mov r1,#0x0
08042818: 081c         add r0,r1,#0x0
0804281A: 02bc         pop {r1}
0804281C: 0847         bx r1
