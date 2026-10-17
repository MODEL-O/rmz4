; undefined FUN_080f7440(void)
; entry 0x80f7440  size 56 bytes

080F7440: 10b5         push {r4,lr}
080F7442: 041c         add r4,r0,#0x0
080F7444: a16a         ldr r1,[r4,#0x28]
080F7446: 0029         cmp r1,#0x0
080F7448: 03d0         beq 0x080f7452
080F744A: b531         add r1,#0xb5
080F744C: 0878         ldrb r0,[r1,#0x0]
080F744E: 0138         sub r0,#0x1
080F7450: 0870         strb r0,[r1,#0x0]
080F7452: 201c         add r0,r4,#0x0
080F7454: 00f058f8     bl 0x080f7508
080F7458: a17a         ldrb r1,[r4,#0xa]
080F745A: fe20         mov r0,#0xfe
080F745C: 0840         and r0,r1
080F745E: a072         strb r0,[r4,#0xa]
080F7460: 0549         ldr r1,[0x080f7478]
080F7462: 607a         ldrb r0,[r4,#0x9]
080F7464: 8000         lsl r0,r0,#0x2
080F7466: 4018         add r0,r0,r1
080F7468: 0421         mov r1,#0x4
080F746A: e160         str r1,[r4,#0xc]
080F746C: 0068         ldr r0,[r0,#0x0]
080F746E: 0069         ldr r0,[r0,#0x10]
080F7470: 6061         str r0,[r4,#0x14]
080F7472: 10bc         pop {r4}
080F7474: 01bc         pop {r0}
080F7476: 0047         bx r0
