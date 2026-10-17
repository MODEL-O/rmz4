; undefined FUN_0809f4b4(void)
; entry 0x809f4b4  size 58 bytes

0809F4B4: 10b5         push {r4,lr}
0809F4B6: 041c         add r4,r0,#0x0
0809F4B8: 0d49         ldr r1,[0x0809f4f0]
0809F4BA: 607a         ldrb r0,[r4,#0x9]
0809F4BC: 8000         lsl r0,r0,#0x2
0809F4BE: 4018         add r0,r0,r1
0809F4C0: 0121         mov r1,#0x1
0809F4C2: e160         str r1,[r4,#0xc]
0809F4C4: 0068         ldr r0,[r0,#0x0]
0809F4C6: 4068         ldr r0,[r0,#0x4]
0809F4C8: 6061         str r0,[r4,#0x14]
0809F4CA: 211c         add r1,r4,#0x0
0809F4CC: c031         add r1,#0xc0
0809F4CE: 0020         mov r0,#0x0
0809F4D0: 0870         strb r0,[r1,#0x0]
0809F4D2: 0849         ldr r1,[0x0809f4f4]
0809F4D4: 207c         ldrb r0,[r4,#0x10]
0809F4D6: 8000         lsl r0,r0,#0x2
0809F4D8: 4018         add r0,r0,r1
0809F4DA: 0168         ldr r1,[r0,#0x0]
0809F4DC: 201c         add r0,r4,#0x0
0809F4DE: 89f04ffd     bl 0x08128f80
0809F4E2: 201c         add r0,r4,#0x0
0809F4E4: 00f008f8     bl 0x0809f4f8
0809F4E8: 10bc         pop {r4}
0809F4EA: 01bc         pop {r0}
0809F4EC: 0047         bx r0
