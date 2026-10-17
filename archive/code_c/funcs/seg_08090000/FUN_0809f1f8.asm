; undefined FUN_0809f1f8(void)
; entry 0x809f1f8  size 72 bytes

0809F1F8: 70b5         push {r4,r5,r6,lr}
0809F1FA: 041c         add r4,r0,#0x0
0809F1FC: 6069         ldr r0,[r4,#0x14]
0809F1FE: 0126         mov r6,#0x1
0809F200: 3040         and r0,r6
0809F202: 0028         cmp r0,#0x0
0809F204: 19d0         beq 0x0809f23a
0809F206: e56a         ldr r5,[r4,#0x2c]
0809F208: 0820         mov r0,#0x8
0809F20A: 67f7bbfb     bl 0x08006984
0809F20E: 6169         ldr r1,[r4,#0x14]
0809F210: 8020         mov r0,#0x80
0809F212: 8000         lsl r0,r0,#0x2
0809F214: 0840         and r0,r1
0809F216: 0028         cmp r0,#0x0
0809F218: 0fd0         beq 0x0809f23a
0809F21A: 8020         mov r0,#0x80
0809F21C: 8002         lsl r0,r0,#0xa
0809F21E: 0140         and r1,r0
0809F220: 0029         cmp r1,#0x0
0809F222: 0ad0         beq 0x0809f23a
0809F224: 281c         add r0,r5,#0x0
0809F226: b930         add r0,#0xb9
0809F228: 0670         strb r6,[r0,#0x0]
0809F22A: 0548         ldr r0,[0x0809f240]
0809F22C: 0068         ldr r0,[r0,#0x0]
0809F22E: 0028         cmp r0,#0x0
0809F230: 03d0         beq 0x0809f23a
0809F232: 0321         mov r1,#0x3
0809F234: 0e22         mov r2,#0xe
0809F236: 9bf79ff9     bl 0x0803a578
0809F23A: 70bc         pop {r4,r5,r6}
0809F23C: 01bc         pop {r0}
0809F23E: 0047         bx r0
