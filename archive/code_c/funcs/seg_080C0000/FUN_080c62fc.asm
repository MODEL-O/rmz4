; undefined FUN_080c62fc(void)
; entry 0x80c62fc  size 70 bytes

080C62FC: 30b5         push {r4,r5,lr}
080C62FE: 041c         add r4,r0,#0x0
080C6300: 0906         lsl r1,r1,#0x18
080C6302: 0d0e         lsr r5,r1,#0x18
080C6304: 0f48         ldr r0,[0x080c6344]
080C6306: 0068         ldr r0,[r0,#0x0]
080C6308: 3ff7faf8     bl 0x08005500
080C630C: 031c         add r3,r0,#0x0
080C630E: 002b         cmp r3,#0x0
080C6310: 13d0         beq 0x080c633a
080C6312: 191c         add r1,r3,#0x0
080C6314: 2531         add r1,#0x25
080C6316: 0022         mov r2,#0x0
080C6318: 0820         mov r0,#0x8
080C631A: 0870         strb r0,[r1,#0x0]
080C631C: 0a49         ldr r1,[0x080c6348]
080C631E: 1a20         mov r0,#0x1a
080C6320: 5872         strb r0,[r3,#0x9]
080C6322: 886e         ldr r0,[r1,#0x68]
080C6324: 0068         ldr r0,[r0,#0x0]
080C6326: 5861         str r0,[r3,#0x14]
080C6328: 0020         mov r0,#0x0
080C632A: 1a84         strh r2,[r3,#0x20]
080C632C: 191c         add r1,r3,#0x0
080C632E: 2231         add r1,#0x22
080C6330: 0870         strb r0,[r1,#0x0]
080C6332: 9c62         str r4,[r3,#0x28]
080C6334: 0120         mov r0,#0x1
080C6336: 1874         strb r0,[r3,#0x10]
080C6338: 5d74         strb r5,[r3,#0x11]
080C633A: 181c         add r0,r3,#0x0
080C633C: 30bc         pop {r4,r5}
080C633E: 02bc         pop {r1}
080C6340: 0847         bx r1
