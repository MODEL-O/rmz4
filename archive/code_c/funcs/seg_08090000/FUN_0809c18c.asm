; undefined FUN_0809c18c(void)
; entry 0x809c18c  size 70 bytes

0809C18C: 30b5         push {r4,r5,lr}
0809C18E: 041c         add r4,r0,#0x0
0809C190: a56a         ldr r5,[r4,#0x28]
0809C192: e07b         ldrb r0,[r4,#0xf]
0809C194: 0028         cmp r0,#0x0
0809C196: 11d1         bne 0x0809c1bc
0809C198: 201c         add r0,r4,#0x0
0809C19A: 7430         add r0,#0x74
0809C19C: 0d49         ldr r1,[0x0809c1d4]
0809C19E: 0968         ldr r1,[r1,#0x0]
0809C1A0: 0968         ldr r1,[r1,#0x0]
0809C1A2: 69f7effa     bl 0x08005784
0809C1A6: a17a         ldrb r1,[r4,#0xa]
0809C1A8: fe20         mov r0,#0xfe
0809C1AA: 0840         and r0,r1
0809C1AC: a072         strb r0,[r4,#0xa]
0809C1AE: 211c         add r1,r4,#0x0
0809C1B0: b431         add r1,#0xb4
0809C1B2: 0120         mov r0,#0x1
0809C1B4: 0870         strb r0,[r1,#0x0]
0809C1B6: e07b         ldrb r0,[r4,#0xf]
0809C1B8: 0130         add r0,#0x1
0809C1BA: e073         strb r0,[r4,#0xf]
0809C1BC: 281c         add r0,r5,#0x0
0809C1BE: b430         add r0,#0xb4
0809C1C0: 0068         ldr r0,[r0,#0x0]
0809C1C2: 6065         str r0,[r4,#0x54]
0809C1C4: 281c         add r0,r5,#0x0
0809C1C6: b830         add r0,#0xb8
0809C1C8: 0068         ldr r0,[r0,#0x0]
0809C1CA: a065         str r0,[r4,#0x58]
0809C1CC: 30bc         pop {r4,r5}
0809C1CE: 01bc         pop {r0}
0809C1D0: 0047         bx r0
