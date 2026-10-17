; undefined FUN_0805a2f4(void)
; entry 0x805a2f4  size 72 bytes

0805A2F4: 10b5         push {r4,lr}
0805A2F6: 041c         add r4,r0,#0x0
0805A2F8: e07b         ldrb r0,[r4,#0xf]
0805A2FA: 0028         cmp r0,#0x0
0805A2FC: 0fd1         bne 0x0805a31e
0805A2FE: 201c         add r0,r4,#0x0
0805A300: 7430         add r0,#0x74
0805A302: 0e49         ldr r1,[0x0805a33c]
0805A304: abf73efa     bl 0x08005784
0805A308: 0d49         ldr r1,[0x0805a340]
0805A30A: 201c         add r0,r4,#0x0
0805A30C: c2f7f8fd     bl 0x0801cf00
0805A310: 211c         add r1,r4,#0x0
0805A312: bd31         add r1,#0xbd
0805A314: 0120         mov r0,#0x1
0805A316: 0870         strb r0,[r1,#0x0]
0805A318: e07b         ldrb r0,[r4,#0xf]
0805A31A: 0130         add r0,#0x1
0805A31C: e073         strb r0,[r4,#0xf]
0805A31E: 201c         add r0,r4,#0x0
0805A320: c2f766fe     bl 0x0801cff0
0805A324: 201c         add r0,r4,#0x0
0805A326: 7330         add r0,#0x73
0805A328: 0078         ldrb r0,[r0,#0x0]
0805A32A: 0328         cmp r0,#0x3
0805A32C: 03d1         bne 0x0805a336
0805A32E: 0021         mov r1,#0x0
0805A330: 0120         mov r0,#0x1
0805A332: a073         strb r0,[r4,#0xe]
0805A334: e173         strb r1,[r4,#0xf]
0805A336: 10bc         pop {r4}
0805A338: 01bc         pop {r0}
0805A33A: 0047         bx r0
