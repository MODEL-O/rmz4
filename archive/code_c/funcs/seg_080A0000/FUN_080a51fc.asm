; undefined FUN_080a51fc(void)
; entry 0x80a51fc  size 72 bytes

080A51FC: 10b5         push {r4,lr}
080A51FE: 041c         add r4,r0,#0x0
080A5200: 3f20         mov r0,#0x3f
080A5202: 5df785fc     bl 0x08002b10
080A5206: 201c         add r0,r4,#0x0
080A5208: 00f0b6f8     bl 0x080a5378
080A520C: a17a         ldrb r1,[r4,#0xa]
080A520E: fe20         mov r0,#0xfe
080A5210: 0840         and r0,r1
080A5212: 0021         mov r1,#0x0
080A5214: a072         strb r0,[r4,#0xa]
080A5216: 201c         add r0,r4,#0x0
080A5218: 8c30         add r0,#0x8c
080A521A: 0160         str r1,[r0,#0x0]
080A521C: 0430         add r0,#0x4
080A521E: 0160         str r1,[r0,#0x0]
080A5220: 0430         add r0,#0x4
080A5222: 0170         strb r1,[r0,#0x0]
080A5224: a17a         ldrb r1,[r4,#0xa]
080A5226: fb20         mov r0,#0xfb
080A5228: 0840         and r0,r1
080A522A: a072         strb r0,[r4,#0xa]
080A522C: 0549         ldr r1,[0x080a5244]
080A522E: 607a         ldrb r0,[r4,#0x9]
080A5230: 8000         lsl r0,r0,#0x2
080A5232: 4018         add r0,r0,r1
080A5234: 0421         mov r1,#0x4
080A5236: e160         str r1,[r4,#0xc]
080A5238: 0068         ldr r0,[r0,#0x0]
080A523A: 0069         ldr r0,[r0,#0x10]
080A523C: 6061         str r0,[r4,#0x14]
080A523E: 10bc         pop {r4}
080A5240: 01bc         pop {r0}
080A5242: 0047         bx r0
