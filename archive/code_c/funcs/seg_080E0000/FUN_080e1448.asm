; undefined FUN_080e1448(void)
; entry 0x80e1448  size 54 bytes

080E1448: 10b5         push {r4,lr}
080E144A: 041c         add r4,r0,#0x0
080E144C: 7830         add r0,#0x78
080E144E: 0278         ldrb r2,[r0,#0x0]
080E1450: 002a         cmp r2,#0x0
080E1452: 08d0         beq 0x080e1466
080E1454: 606f         ldr r0,[r4,#0x74]
080E1456: 0178         ldrb r1,[r0,#0x0]
080E1458: 5140         eor r1,r2
080E145A: 0170         strb r1,[r0,#0x0]
080E145C: 211c         add r1,r4,#0x0
080E145E: 5431         add r1,#0x54
080E1460: 0320         mov r0,#0x3
080E1462: eff711fc     bl 0x080d0c88
080E1466: 0649         ldr r1,[0x080e1480]
080E1468: 607a         ldrb r0,[r4,#0x9]
080E146A: 8000         lsl r0,r0,#0x2
080E146C: 4018         add r0,r0,r1
080E146E: 0421         mov r1,#0x4
080E1470: e160         str r1,[r4,#0xc]
080E1472: 0068         ldr r0,[r0,#0x0]
080E1474: 0069         ldr r0,[r0,#0x10]
080E1476: 6061         str r0,[r4,#0x14]
080E1478: 10bc         pop {r4}
080E147A: 01bc         pop {r0}
080E147C: 0047         bx r0
