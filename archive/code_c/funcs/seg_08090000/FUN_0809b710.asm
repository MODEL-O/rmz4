; undefined FUN_0809b710(void)
; entry 0x809b710  size 34 bytes

0809B710: 10b5         push {r4,lr}
0809B712: 041c         add r4,r0,#0x0
0809B714: a16a         ldr r1,[r4,#0x28]
0809B716: b630         add r0,#0xb6
0809B718: 0078         ldrb r0,[r0,#0x0]
0809B71A: 0028         cmp r0,#0x0
0809B71C: 03d0         beq 0x0809b726
0809B71E: 081c         add r0,r1,#0x0
0809B720: 211c         add r1,r4,#0x0
0809B722: caf771fe     bl 0x08066408
0809B726: 201c         add r0,r4,#0x0
0809B728: e4f7e0f8     bl 0x0807f8ec
0809B72C: 10bc         pop {r4}
0809B72E: 01bc         pop {r0}
0809B730: 0047         bx r0
