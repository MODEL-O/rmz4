; undefined FUN_0809acdc(void)
; entry 0x809acdc  size 68 bytes

0809ACDC: 10b5         push {r4,lr}
0809ACDE: 041c         add r4,r0,#0x0
0809ACE0: 5430         add r0,#0x54
0809ACE2: 0021         mov r1,#0x0
0809ACE4: 0322         mov r2,#0x3
0809ACE6: 1823         mov r3,#0x18
0809ACE8: 2bf0dafa     bl 0x080c62a0
0809ACEC: 201c         add r0,r4,#0x0
0809ACEE: 8c30         add r0,#0x8c
0809ACF0: 0021         mov r1,#0x0
0809ACF2: 0160         str r1,[r0,#0x0]
0809ACF4: 0430         add r0,#0x4
0809ACF6: 0160         str r1,[r0,#0x0]
0809ACF8: 0430         add r0,#0x4
0809ACFA: 0170         strb r1,[r0,#0x0]
0809ACFC: a17a         ldrb r1,[r4,#0xa]
0809ACFE: fb20         mov r0,#0xfb
0809AD00: 0840         and r0,r1
0809AD02: fe21         mov r1,#0xfe
0809AD04: 0840         and r0,r1
0809AD06: a072         strb r0,[r4,#0xa]
0809AD08: 0549         ldr r1,[0x0809ad20]
0809AD0A: 607a         ldrb r0,[r4,#0x9]
0809AD0C: 8000         lsl r0,r0,#0x2
0809AD0E: 4018         add r0,r0,r1
0809AD10: 0421         mov r1,#0x4
0809AD12: e160         str r1,[r4,#0xc]
0809AD14: 0068         ldr r0,[r0,#0x0]
0809AD16: 0069         ldr r0,[r0,#0x10]
0809AD18: 6061         str r0,[r4,#0x14]
0809AD1A: 10bc         pop {r4}
0809AD1C: 01bc         pop {r0}
0809AD1E: 0047         bx r0
