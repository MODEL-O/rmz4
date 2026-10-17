; undefined FUN_0806c30c(void)
; entry 0x806c30c  size 64 bytes

0806C30C: 10b5         push {r4,lr}
0806C30E: 041c         add r4,r0,#0x0
0806C310: a07b         ldrb r0,[r4,#0xe]
0806C312: 0028         cmp r0,#0x0
0806C314: 06d1         bne 0x0806c324
0806C316: 0d49         ldr r1,[0x0806c34c]
0806C318: 201c         add r0,r4,#0x0
0806C31A: b0f7f1fd     bl 0x0801cf00
0806C31E: a07b         ldrb r0,[r4,#0xe]
0806C320: 0130         add r0,#0x1
0806C322: a073         strb r0,[r4,#0xe]
0806C324: 201c         add r0,r4,#0x0
0806C326: b0f763fe     bl 0x0801cff0
0806C32A: 201c         add r0,r4,#0x0
0806C32C: d930         add r0,#0xd9
0806C32E: 0078         ldrb r0,[r0,#0x0]
0806C330: 0028         cmp r0,#0x0
0806C332: 08d0         beq 0x0806c346
0806C334: 201c         add r0,r4,#0x0
0806C336: da30         add r0,#0xda
0806C338: 0078         ldrb r0,[r0,#0x0]
0806C33A: 0028         cmp r0,#0x0
0806C33C: 03d0         beq 0x0806c346
0806C33E: 0021         mov r1,#0x0
0806C340: 0320         mov r0,#0x3
0806C342: 6073         strb r0,[r4,#0xd]
0806C344: a173         strb r1,[r4,#0xe]
0806C346: 10bc         pop {r4}
0806C348: 01bc         pop {r0}
0806C34A: 0047         bx r0
