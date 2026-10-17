; undefined FUN_0810ad38(void)
; entry 0x810ad38  size 70 bytes

0810AD38: 70b5         push {r4,r5,r6,lr}
0810AD3A: 061c         add r6,r0,#0x0
0810AD3C: 0906         lsl r1,r1,#0x18
0810AD3E: 0d0e         lsr r5,r1,#0x18
0810AD40: 1206         lsl r2,r2,#0x18
0810AD42: 140e         lsr r4,r2,#0x18
0810AD44: 0e48         ldr r0,[0x0810ad80]
0810AD46: 0068         ldr r0,[r0,#0x0]
0810AD48: faf6dafb     bl 0x08005500
0810AD4C: 031c         add r3,r0,#0x0
0810AD4E: 002b         cmp r3,#0x0
0810AD50: 12d0         beq 0x0810ad78
0810AD52: 191c         add r1,r3,#0x0
0810AD54: 2531         add r1,#0x25
0810AD56: 0022         mov r2,#0x0
0810AD58: 1020         mov r0,#0x10
0810AD5A: 0870         strb r0,[r1,#0x0]
0810AD5C: 0949         ldr r1,[0x0810ad84]
0810AD5E: 0420         mov r0,#0x4
0810AD60: 5872         strb r0,[r3,#0x9]
0810AD62: 0869         ldr r0,[r1,#0x10]
0810AD64: 0068         ldr r0,[r0,#0x0]
0810AD66: 5861         str r0,[r3,#0x14]
0810AD68: 0020         mov r0,#0x0
0810AD6A: 1a84         strh r2,[r3,#0x20]
0810AD6C: 191c         add r1,r3,#0x0
0810AD6E: 2231         add r1,#0x22
0810AD70: 0870         strb r0,[r1,#0x0]
0810AD72: 9e62         str r6,[r3,#0x28]
0810AD74: 1d74         strb r5,[r3,#0x10]
0810AD76: 5c74         strb r4,[r3,#0x11]
0810AD78: 70bc         pop {r4,r5,r6}
0810AD7A: 01bc         pop {r0}
0810AD7C: 0047         bx r0
