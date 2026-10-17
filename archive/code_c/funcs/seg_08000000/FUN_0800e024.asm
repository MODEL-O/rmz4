; undefined FUN_0800e024(void)
; entry 0x800e024  size 44 bytes

0800E024: 00b5         push {lr}
0800E026: 021c         add r2,r0,#0x0
0800E028: 907b         ldrb r0,[r2,#0xe]
0800E02A: 0028         cmp r0,#0x0
0800E02C: 13d1         bne 0x0800e056
0800E02E: 516b         ldr r1,[r2,#0x34]
0800E030: 0348         ldr r0,[0x0800e040]
0800E032: 8142         cmp r1,r0
0800E034: 08dc         bgt 0x0800e048
0800E036: 0349         ldr r1,[0x0800e044]
0800E038: e020         mov r0,#0xe0
0800E03A: 8002         lsl r0,r0,#0xa
0800E03C: 07e0         b 0x0800e04e
0800E048: 0449         ldr r1,[0x0800e05c]
0800E04A: 8c20         mov r0,#0x8c
0800E04C: 8002         lsl r0,r0,#0xa
0800E04E: 0860         str r0,[r1,#0x0]
0800E050: 907b         ldrb r0,[r2,#0xe]
0800E052: 0130         add r0,#0x1
0800E054: 9073         strb r0,[r2,#0xe]
0800E056: 01bc         pop {r0}
0800E058: 0047         bx r0
