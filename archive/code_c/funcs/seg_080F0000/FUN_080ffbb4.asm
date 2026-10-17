; undefined FUN_080ffbb4(void)
; entry 0x80ffbb4  size 46 bytes

080FFBB4: 10b5         push {r4,lr}
080FFBB6: 041c         add r4,r0,#0x0
080FFBB8: 0a48         ldr r0,[0x080ffbe4]
080FFBBA: 211c         add r1,r4,#0x0
080FFBBC: 5431         add r1,#0x54
080FFBBE: 1ff7a9ff     bl 0x0801fb14
080FFBC2: f021         mov r1,#0xf0
080FFBC4: 0902         lsl r1,r1,#0x8
080FFBC6: 8842         cmp r0,r1
080FFBC8: 08d9         bls 0x080ffbdc
080FFBCA: 0749         ldr r1,[0x080ffbe8]
080FFBCC: 607a         ldrb r0,[r4,#0x9]
080FFBCE: 8000         lsl r0,r0,#0x2
080FFBD0: 4018         add r0,r0,r1
080FFBD2: 0221         mov r1,#0x2
080FFBD4: e160         str r1,[r4,#0xc]
080FFBD6: 0068         ldr r0,[r0,#0x0]
080FFBD8: 8068         ldr r0,[r0,#0x8]
080FFBDA: 6061         str r0,[r4,#0x14]
080FFBDC: 10bc         pop {r4}
080FFBDE: 01bc         pop {r0}
080FFBE0: 0047         bx r0
