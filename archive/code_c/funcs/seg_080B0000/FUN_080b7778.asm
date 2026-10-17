; undefined FUN_080b7778(void)
; entry 0x80b7778  size 70 bytes

080B7778: 10b5         push {r4,lr}
080B777A: 041c         add r4,r0,#0x0
080B777C: a07b         ldrb r0,[r4,#0xe]
080B777E: 0028         cmp r0,#0x0
080B7780: 08d1         bne 0x080b7794
080B7782: 0c49         ldr r1,[0x080b77b4]
080B7784: 201c         add r0,r4,#0x0
080B7786: 65f7bbfb     bl 0x0801cf00
080B778A: a020         mov r0,#0xa0
080B778C: a074         strb r0,[r4,#0x12]
080B778E: a07b         ldrb r0,[r4,#0xe]
080B7790: 0130         add r0,#0x1
080B7792: a073         strb r0,[r4,#0xe]
080B7794: a07c         ldrb r0,[r4,#0x12]
080B7796: 021c         add r2,r0,#0x0
080B7798: 002a         cmp r2,#0x0
080B779A: 0dd1         bne 0x080b77b8
080B779C: e07c         ldrb r0,[r4,#0x13]
080B779E: 0228         cmp r0,#0x2
080B77A0: 04d1         bne 0x080b77ac
080B77A2: 211c         add r1,r4,#0x0
080B77A4: b431         add r1,#0xb4
080B77A6: 0120         mov r0,#0x1
080B77A8: 0870         strb r0,[r1,#0x0]
080B77AA: e274         strb r2,[r4,#0x13]
080B77AC: 0220         mov r0,#0x2
080B77AE: 6073         strb r0,[r4,#0xd]
080B77B0: a273         strb r2,[r4,#0xe]
080B77B2: 03e0         b 0x080b77bc
080B77B8: 0138         sub r0,#0x1
080B77BA: a074         strb r0,[r4,#0x12]
080B77BC: 10bc         pop {r4}
080B77BE: 01bc         pop {r0}
080B77C0: 0047         bx r0
