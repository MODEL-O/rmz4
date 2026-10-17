; undefined FUN_0805b1c8(void)
; entry 0x805b1c8  size 72 bytes

0805B1C8: 10b5         push {r4,lr}
0805B1CA: 041c         add r4,r0,#0x0
0805B1CC: e07b         ldrb r0,[r4,#0xf]
0805B1CE: 0028         cmp r0,#0x0
0805B1D0: 0fd1         bne 0x0805b1f2
0805B1D2: 201c         add r0,r4,#0x0
0805B1D4: 7430         add r0,#0x74
0805B1D6: 0e49         ldr r1,[0x0805b210]
0805B1D8: aaf7d4fa     bl 0x08005784
0805B1DC: 0d49         ldr r1,[0x0805b214]
0805B1DE: 201c         add r0,r4,#0x0
0805B1E0: c1f78efe     bl 0x0801cf00
0805B1E4: 211c         add r1,r4,#0x0
0805B1E6: bd31         add r1,#0xbd
0805B1E8: 0120         mov r0,#0x1
0805B1EA: 0870         strb r0,[r1,#0x0]
0805B1EC: e07b         ldrb r0,[r4,#0xf]
0805B1EE: 0130         add r0,#0x1
0805B1F0: e073         strb r0,[r4,#0xf]
0805B1F2: 201c         add r0,r4,#0x0
0805B1F4: c1f7fcfe     bl 0x0801cff0
0805B1F8: 201c         add r0,r4,#0x0
0805B1FA: 7330         add r0,#0x73
0805B1FC: 0078         ldrb r0,[r0,#0x0]
0805B1FE: 0328         cmp r0,#0x3
0805B200: 03d1         bne 0x0805b20a
0805B202: 0021         mov r1,#0x0
0805B204: 0420         mov r0,#0x4
0805B206: a073         strb r0,[r4,#0xe]
0805B208: e173         strb r1,[r4,#0xf]
0805B20A: 10bc         pop {r4}
0805B20C: 01bc         pop {r0}
0805B20E: 0047         bx r0
