; undefined FUN_0810c0ec(void)
; entry 0x810c0ec  size 72 bytes

0810C0EC: 70b5         push {r4,r5,r6,lr}
0810C0EE: 061c         add r6,r0,#0x0
0810C0F0: 0906         lsl r1,r1,#0x18
0810C0F2: 0d0e         lsr r5,r1,#0x18
0810C0F4: 1206         lsl r2,r2,#0x18
0810C0F6: 140e         lsr r4,r2,#0x18
0810C0F8: 0e48         ldr r0,[0x0810c134]
0810C0FA: 0068         ldr r0,[r0,#0x0]
0810C0FC: f9f600fa     bl 0x08005500
0810C100: 031c         add r3,r0,#0x0
0810C102: 002b         cmp r3,#0x0
0810C104: 12d0         beq 0x0810c12c
0810C106: 191c         add r1,r3,#0x0
0810C108: 2531         add r1,#0x25
0810C10A: 0022         mov r2,#0x0
0810C10C: 1020         mov r0,#0x10
0810C10E: 0870         strb r0,[r1,#0x0]
0810C110: 0949         ldr r1,[0x0810c138]
0810C112: 0820         mov r0,#0x8
0810C114: 5872         strb r0,[r3,#0x9]
0810C116: 086a         ldr r0,[r1,#0x20]
0810C118: 0068         ldr r0,[r0,#0x0]
0810C11A: 5861         str r0,[r3,#0x14]
0810C11C: 0020         mov r0,#0x0
0810C11E: 1a84         strh r2,[r3,#0x20]
0810C120: 191c         add r1,r3,#0x0
0810C122: 2231         add r1,#0x22
0810C124: 0870         strb r0,[r1,#0x0]
0810C126: 9e62         str r6,[r3,#0x28]
0810C128: 1d74         strb r5,[r3,#0x10]
0810C12A: 5c74         strb r4,[r3,#0x11]
0810C12C: 181c         add r0,r3,#0x0
0810C12E: 70bc         pop {r4,r5,r6}
0810C130: 02bc         pop {r1}
0810C132: 0847         bx r1
