; undefined FUN_080f1540(void)
; entry 0x80f1540  size 38 bytes

080F1540: 30b5         push {r4,r5,lr}
080F1542: 051c         add r5,r0,#0x0
080F1544: 0848         ldr r0,[0x080f1568]
080F1546: 0468         ldr r4,[r0,#0x0]
080F1548: 201c         add r0,r4,#0x0
080F154A: 47f7e7f9     bl 0x0803891c
080F154E: 011c         add r1,r0,#0x0
080F1550: 0906         lsl r1,r1,#0x18
080F1552: 090e         lsr r1,r1,#0x18
080F1554: 201c         add r0,r4,#0x0
080F1556: 39f7f1ff     bl 0x0802b53c
080F155A: 281c         add r0,r5,#0x0
080F155C: fcf7e6fa     bl 0x080edb2c
080F1560: 30bc         pop {r4,r5}
080F1562: 01bc         pop {r0}
080F1564: 0047         bx r0
