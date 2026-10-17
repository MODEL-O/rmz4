; undefined FUN_080cb4f4(void)
; entry 0x80cb4f4  size 72 bytes

080CB4F4: 70b5         push {r4,r5,r6,lr}
080CB4F6: 061c         add r6,r0,#0x0
080CB4F8: 0906         lsl r1,r1,#0x18
080CB4FA: 0d0e         lsr r5,r1,#0x18
080CB4FC: 1206         lsl r2,r2,#0x18
080CB4FE: 140e         lsr r4,r2,#0x18
080CB500: 0e48         ldr r0,[0x080cb53c]
080CB502: 0068         ldr r0,[r0,#0x0]
080CB504: 39f7fcff     bl 0x08005500
080CB508: 031c         add r3,r0,#0x0
080CB50A: 002b         cmp r3,#0x0
080CB50C: 13d0         beq 0x080cb536
080CB50E: 191c         add r1,r3,#0x0
080CB510: 2531         add r1,#0x25
080CB512: 0022         mov r2,#0x0
080CB514: 0820         mov r0,#0x8
080CB516: 0870         strb r0,[r1,#0x0]
080CB518: 0948         ldr r0,[0x080cb540]
080CB51A: 2821         mov r1,#0x28
080CB51C: 5972         strb r1,[r3,#0x9]
080CB51E: a030         add r0,#0xa0
080CB520: 0068         ldr r0,[r0,#0x0]
080CB522: 0068         ldr r0,[r0,#0x0]
080CB524: 5861         str r0,[r3,#0x14]
080CB526: 0020         mov r0,#0x0
080CB528: 1a84         strh r2,[r3,#0x20]
080CB52A: 191c         add r1,r3,#0x0
080CB52C: 2231         add r1,#0x22
080CB52E: 0870         strb r0,[r1,#0x0]
080CB530: 9e62         str r6,[r3,#0x28]
080CB532: 1d74         strb r5,[r3,#0x10]
080CB534: 5c74         strb r4,[r3,#0x11]
080CB536: 70bc         pop {r4,r5,r6}
080CB538: 01bc         pop {r0}
080CB53A: 0047         bx r0
