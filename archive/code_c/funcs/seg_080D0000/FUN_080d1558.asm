; undefined FUN_080d1558(void)
; entry 0x80d1558  size 72 bytes

080D1558: 70b5         push {r4,r5,r6,lr}
080D155A: 051c         add r5,r0,#0x0
080D155C: 0e1c         add r6,r1,#0x0
080D155E: 1206         lsl r2,r2,#0x18
080D1560: 140e         lsr r4,r2,#0x18
080D1562: 0f48         ldr r0,[0x080d15a0]
080D1564: 0068         ldr r0,[r0,#0x0]
080D1566: 33f7cbff     bl 0x08005500
080D156A: 031c         add r3,r0,#0x0
080D156C: 002b         cmp r3,#0x0
080D156E: 13d0         beq 0x080d1598
080D1570: 191c         add r1,r3,#0x0
080D1572: 2531         add r1,#0x25
080D1574: 0022         mov r2,#0x0
080D1576: 0120         mov r0,#0x1
080D1578: 0870         strb r0,[r1,#0x0]
080D157A: 0a49         ldr r1,[0x080d15a4]
080D157C: 0220         mov r0,#0x2
080D157E: 5872         strb r0,[r3,#0x9]
080D1580: 8868         ldr r0,[r1,#0x8]
080D1582: 0068         ldr r0,[r0,#0x0]
080D1584: 5861         str r0,[r3,#0x14]
080D1586: 0020         mov r0,#0x0
080D1588: 1a84         strh r2,[r3,#0x20]
080D158A: 191c         add r1,r3,#0x0
080D158C: 2231         add r1,#0x22
080D158E: 0870         strb r0,[r1,#0x0]
080D1590: 9d62         str r5,[r3,#0x28]
080D1592: de62         str r6,[r3,#0x2c]
080D1594: 1c74         strb r4,[r3,#0x10]
080D1596: 5874         strb r0,[r3,#0x11]
080D1598: 181c         add r0,r3,#0x0
080D159A: 70bc         pop {r4,r5,r6}
080D159C: 02bc         pop {r1}
080D159E: 0847         bx r1
