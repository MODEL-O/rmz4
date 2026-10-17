; undefined FUN_080a5248(void)
; entry 0x80a5248  size 72 bytes

080A5248: 10b5         push {r4,lr}
080A524A: 041c         add r4,r0,#0x0
080A524C: 3f20         mov r0,#0x3f
080A524E: 5df75ffc     bl 0x08002b10
080A5252: 201c         add r0,r4,#0x0
080A5254: 00f046f8     bl 0x080a52e4
080A5258: a17a         ldrb r1,[r4,#0xa]
080A525A: fe20         mov r0,#0xfe
080A525C: 0840         and r0,r1
080A525E: 0021         mov r1,#0x0
080A5260: a072         strb r0,[r4,#0xa]
080A5262: 201c         add r0,r4,#0x0
080A5264: 8c30         add r0,#0x8c
080A5266: 0160         str r1,[r0,#0x0]
080A5268: 0430         add r0,#0x4
080A526A: 0160         str r1,[r0,#0x0]
080A526C: 0430         add r0,#0x4
080A526E: 0170         strb r1,[r0,#0x0]
080A5270: a17a         ldrb r1,[r4,#0xa]
080A5272: fb20         mov r0,#0xfb
080A5274: 0840         and r0,r1
080A5276: a072         strb r0,[r4,#0xa]
080A5278: 0549         ldr r1,[0x080a5290]
080A527A: 607a         ldrb r0,[r4,#0x9]
080A527C: 8000         lsl r0,r0,#0x2
080A527E: 4018         add r0,r0,r1
080A5280: 0421         mov r1,#0x4
080A5282: e160         str r1,[r4,#0xc]
080A5284: 0068         ldr r0,[r0,#0x0]
080A5286: 0069         ldr r0,[r0,#0x10]
080A5288: 6061         str r0,[r4,#0x14]
080A528A: 10bc         pop {r4}
080A528C: 01bc         pop {r0}
080A528E: 0047         bx r0
