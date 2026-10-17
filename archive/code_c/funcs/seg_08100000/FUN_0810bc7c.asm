; undefined FUN_0810bc7c(void)
; entry 0x810bc7c  size 72 bytes

0810BC7C: 70b5         push {r4,r5,r6,lr}
0810BC7E: 061c         add r6,r0,#0x0
0810BC80: 0906         lsl r1,r1,#0x18
0810BC82: 0d0e         lsr r5,r1,#0x18
0810BC84: 1206         lsl r2,r2,#0x18
0810BC86: 140e         lsr r4,r2,#0x18
0810BC88: 0e48         ldr r0,[0x0810bcc4]
0810BC8A: 0068         ldr r0,[r0,#0x0]
0810BC8C: f9f638fc     bl 0x08005500
0810BC90: 031c         add r3,r0,#0x0
0810BC92: 002b         cmp r3,#0x0
0810BC94: 12d0         beq 0x0810bcbc
0810BC96: 191c         add r1,r3,#0x0
0810BC98: 2531         add r1,#0x25
0810BC9A: 0022         mov r2,#0x0
0810BC9C: 1020         mov r0,#0x10
0810BC9E: 0870         strb r0,[r1,#0x0]
0810BCA0: 0949         ldr r1,[0x0810bcc8]
0810BCA2: 0720         mov r0,#0x7
0810BCA4: 5872         strb r0,[r3,#0x9]
0810BCA6: c869         ldr r0,[r1,#0x1c]
0810BCA8: 0068         ldr r0,[r0,#0x0]
0810BCAA: 5861         str r0,[r3,#0x14]
0810BCAC: 0020         mov r0,#0x0
0810BCAE: 1a84         strh r2,[r3,#0x20]
0810BCB0: 191c         add r1,r3,#0x0
0810BCB2: 2231         add r1,#0x22
0810BCB4: 0870         strb r0,[r1,#0x0]
0810BCB6: 9e62         str r6,[r3,#0x28]
0810BCB8: 1d74         strb r5,[r3,#0x10]
0810BCBA: 5c74         strb r4,[r3,#0x11]
0810BCBC: 181c         add r0,r3,#0x0
0810BCBE: 70bc         pop {r4,r5,r6}
0810BCC0: 02bc         pop {r1}
0810BCC2: 0847         bx r1
