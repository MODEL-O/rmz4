; undefined FUN_0810e480(void)
; entry 0x810e480  size 54 bytes

0810E480: 10b5         push {r4,lr}
0810E482: 0d4a         ldr r2,[0x0810e4b8]
0810E484: b323         mov r3,#0xb3
0810E486: db00         lsl r3,r3,#0x3
0810E488: d118         add r1,r2,r3
0810E48A: 0024         mov r4,#0x0
0810E48C: 0c70         strb r4,[r1,#0x0]
0810E48E: 0b49         ldr r1,[0x0810e4bc]
0810E490: 5318         add r3,r2,r1
0810E492: 1e21         mov r1,#0x1e
0810E494: 1970         strb r1,[r3,#0x0]
0810E496: 0a4b         ldr r3,[0x0810e4c0]
0810E498: d118         add r1,r2,r3
0810E49A: 0c70         strb r4,[r1,#0x0]
0810E49C: 0949         ldr r1,[0x0810e4c4]
0810E49E: 5218         add r2,r2,r1
0810E4A0: 1621         mov r1,#0x16
0810E4A2: 1170         strb r1,[r2,#0x0]
0810E4A4: 0849         ldr r1,[0x0810e4c8]
0810E4A6: 0c60         str r4,[r1,#0x0]
0810E4A8: 4860         str r0,[r1,#0x4]
0810E4AA: 4c61         str r4,[r1,#0x14]
0810E4AC: 0831         add r1,#0x8
0810E4AE: 4c80         strh r4,[r1,#0x2]
0810E4B0: 10bc         pop {r4}
0810E4B2: 01bc         pop {r0}
0810E4B4: 0047         bx r0
