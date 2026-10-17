; undefined FUN_0810c778(void)
; entry 0x810c778  size 70 bytes

0810C778: 70b5         push {r4,r5,r6,lr}
0810C77A: 061c         add r6,r0,#0x0
0810C77C: 0906         lsl r1,r1,#0x18
0810C77E: 0d0e         lsr r5,r1,#0x18
0810C780: 1206         lsl r2,r2,#0x18
0810C782: 140e         lsr r4,r2,#0x18
0810C784: 0e48         ldr r0,[0x0810c7c0]
0810C786: 0068         ldr r0,[r0,#0x0]
0810C788: f8f6bafe     bl 0x08005500
0810C78C: 031c         add r3,r0,#0x0
0810C78E: 002b         cmp r3,#0x0
0810C790: 12d0         beq 0x0810c7b8
0810C792: 191c         add r1,r3,#0x0
0810C794: 2531         add r1,#0x25
0810C796: 0022         mov r2,#0x0
0810C798: 1020         mov r0,#0x10
0810C79A: 0870         strb r0,[r1,#0x0]
0810C79C: 0949         ldr r1,[0x0810c7c4]
0810C79E: 0a20         mov r0,#0xa
0810C7A0: 5872         strb r0,[r3,#0x9]
0810C7A2: 886a         ldr r0,[r1,#0x28]
0810C7A4: 0068         ldr r0,[r0,#0x0]
0810C7A6: 5861         str r0,[r3,#0x14]
0810C7A8: 0020         mov r0,#0x0
0810C7AA: 1a84         strh r2,[r3,#0x20]
0810C7AC: 191c         add r1,r3,#0x0
0810C7AE: 2231         add r1,#0x22
0810C7B0: 0870         strb r0,[r1,#0x0]
0810C7B2: 9e62         str r6,[r3,#0x28]
0810C7B4: 1d74         strb r5,[r3,#0x10]
0810C7B6: 5c74         strb r4,[r3,#0x11]
0810C7B8: 70bc         pop {r4,r5,r6}
0810C7BA: 01bc         pop {r0}
0810C7BC: 0047         bx r0
