; undefined FUN_0810a5f0(void)
; entry 0x810a5f0  size 72 bytes

0810A5F0: 70b5         push {r4,r5,r6,lr}
0810A5F2: 061c         add r6,r0,#0x0
0810A5F4: 0906         lsl r1,r1,#0x18
0810A5F6: 0d0e         lsr r5,r1,#0x18
0810A5F8: 1206         lsl r2,r2,#0x18
0810A5FA: 140e         lsr r4,r2,#0x18
0810A5FC: 0e48         ldr r0,[0x0810a638]
0810A5FE: 0068         ldr r0,[r0,#0x0]
0810A600: faf67eff     bl 0x08005500
0810A604: 031c         add r3,r0,#0x0
0810A606: 002b         cmp r3,#0x0
0810A608: 12d0         beq 0x0810a630
0810A60A: 191c         add r1,r3,#0x0
0810A60C: 2531         add r1,#0x25
0810A60E: 0022         mov r2,#0x0
0810A610: 1020         mov r0,#0x10
0810A612: 0870         strb r0,[r1,#0x0]
0810A614: 0949         ldr r1,[0x0810a63c]
0810A616: 0220         mov r0,#0x2
0810A618: 5872         strb r0,[r3,#0x9]
0810A61A: 8868         ldr r0,[r1,#0x8]
0810A61C: 0068         ldr r0,[r0,#0x0]
0810A61E: 5861         str r0,[r3,#0x14]
0810A620: 0020         mov r0,#0x0
0810A622: 1a84         strh r2,[r3,#0x20]
0810A624: 191c         add r1,r3,#0x0
0810A626: 2231         add r1,#0x22
0810A628: 0870         strb r0,[r1,#0x0]
0810A62A: 9e62         str r6,[r3,#0x28]
0810A62C: 1d74         strb r5,[r3,#0x10]
0810A62E: 5c74         strb r4,[r3,#0x11]
0810A630: 181c         add r0,r3,#0x0
0810A632: 70bc         pop {r4,r5,r6}
0810A634: 02bc         pop {r1}
0810A636: 0847         bx r1
