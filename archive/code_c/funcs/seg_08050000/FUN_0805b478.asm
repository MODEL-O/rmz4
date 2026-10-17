; undefined FUN_0805b478(void)
; entry 0x805b478  size 72 bytes

0805B478: 10b5         push {r4,lr}
0805B47A: 041c         add r4,r0,#0x0
0805B47C: e07b         ldrb r0,[r4,#0xf]
0805B47E: 0028         cmp r0,#0x0
0805B480: 0fd1         bne 0x0805b4a2
0805B482: 201c         add r0,r4,#0x0
0805B484: 7430         add r0,#0x74
0805B486: 0e49         ldr r1,[0x0805b4c0]
0805B488: aaf77cf9     bl 0x08005784
0805B48C: 0d49         ldr r1,[0x0805b4c4]
0805B48E: 201c         add r0,r4,#0x0
0805B490: c1f736fd     bl 0x0801cf00
0805B494: 211c         add r1,r4,#0x0
0805B496: bd31         add r1,#0xbd
0805B498: 0120         mov r0,#0x1
0805B49A: 0870         strb r0,[r1,#0x0]
0805B49C: e07b         ldrb r0,[r4,#0xf]
0805B49E: 0130         add r0,#0x1
0805B4A0: e073         strb r0,[r4,#0xf]
0805B4A2: 201c         add r0,r4,#0x0
0805B4A4: c1f7a4fd     bl 0x0801cff0
0805B4A8: 201c         add r0,r4,#0x0
0805B4AA: 7330         add r0,#0x73
0805B4AC: 0078         ldrb r0,[r0,#0x0]
0805B4AE: 0328         cmp r0,#0x3
0805B4B0: 03d1         bne 0x0805b4ba
0805B4B2: 0021         mov r1,#0x0
0805B4B4: 0420         mov r0,#0x4
0805B4B6: a073         strb r0,[r4,#0xe]
0805B4B8: e173         strb r1,[r4,#0xf]
0805B4BA: 10bc         pop {r4}
0805B4BC: 01bc         pop {r0}
0805B4BE: 0047         bx r0
