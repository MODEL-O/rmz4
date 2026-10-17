; undefined FUN_0809ee6c(void)
; entry 0x809ee6c  size 66 bytes

0809EE6C: 10b5         push {r4,lr}
0809EE6E: 041c         add r4,r0,#0x0
0809EE70: 211c         add r1,r4,#0x0
0809EE72: 5431         add r1,#0x54
0809EE74: 0220         mov r0,#0x2
0809EE76: 31f007ff     bl 0x080d0c88
0809EE7A: 201c         add r0,r4,#0x0
0809EE7C: 8c30         add r0,#0x8c
0809EE7E: 0021         mov r1,#0x0
0809EE80: 0160         str r1,[r0,#0x0]
0809EE82: 0430         add r0,#0x4
0809EE84: 0160         str r1,[r0,#0x0]
0809EE86: 0430         add r0,#0x4
0809EE88: 0170         strb r1,[r0,#0x0]
0809EE8A: a17a         ldrb r1,[r4,#0xa]
0809EE8C: fb20         mov r0,#0xfb
0809EE8E: 0840         and r0,r1
0809EE90: fe21         mov r1,#0xfe
0809EE92: 0840         and r0,r1
0809EE94: a072         strb r0,[r4,#0xa]
0809EE96: 0649         ldr r1,[0x0809eeb0]
0809EE98: 607a         ldrb r0,[r4,#0x9]
0809EE9A: 8000         lsl r0,r0,#0x2
0809EE9C: 4018         add r0,r0,r1
0809EE9E: 0421         mov r1,#0x4
0809EEA0: e160         str r1,[r4,#0xc]
0809EEA2: 0068         ldr r0,[r0,#0x0]
0809EEA4: 0069         ldr r0,[r0,#0x10]
0809EEA6: 6061         str r0,[r4,#0x14]
0809EEA8: 10bc         pop {r4}
0809EEAA: 01bc         pop {r0}
0809EEAC: 0047         bx r0
