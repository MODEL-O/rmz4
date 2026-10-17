; undefined FUN_08053778(void)
; entry 0x8053778  size 62 bytes

08053778: 10b5         push {r4,lr}
0805377A: 041c         add r4,r0,#0x0
0805377C: e07b         ldrb r0,[r4,#0xf]
0805377E: 0028         cmp r0,#0x0
08053780: 09d1         bne 0x08053796
08053782: b621         mov r1,#0xb6
08053784: 0902         lsl r1,r1,#0x8
08053786: 201c         add r0,r4,#0x0
08053788: c9f7bafb     bl 0x0801cf00
0805378C: 7820         mov r0,#0x78
0805378E: a074         strb r0,[r4,#0x12]
08053790: e07b         ldrb r0,[r4,#0xf]
08053792: 0130         add r0,#0x1
08053794: e073         strb r0,[r4,#0xf]
08053796: 201c         add r0,r4,#0x0
08053798: c9f72afc     bl 0x0801cff0
0805379C: a07c         ldrb r0,[r4,#0x12]
0805379E: 0138         sub r0,#0x1
080537A0: a074         strb r0,[r4,#0x12]
080537A2: 0006         lsl r0,r0,#0x18
080537A4: 000e         lsr r0,r0,#0x18
080537A6: 0028         cmp r0,#0x0
080537A8: 02d1         bne 0x080537b0
080537AA: 6073         strb r0,[r4,#0xd]
080537AC: a073         strb r0,[r4,#0xe]
080537AE: e073         strb r0,[r4,#0xf]
080537B0: 10bc         pop {r4}
080537B2: 01bc         pop {r0}
080537B4: 0047         bx r0
