; undefined FUN_080db758(void)
; entry 0x80db758  size 44 bytes

080DB758: 10b5         push {r4,lr}
080DB75A: 041c         add r4,r0,#0x0
080DB75C: 211c         add r1,r4,#0x0
080DB75E: 5431         add r1,#0x54
080DB760: 0120         mov r0,#0x1
080DB762: f5f791fa     bl 0x080d0c88
080DB766: 2a20         mov r0,#0x2a
080DB768: 27f7d2f9     bl 0x08002b10
080DB76C: 0549         ldr r1,[0x080db784]
080DB76E: 607a         ldrb r0,[r4,#0x9]
080DB770: 8000         lsl r0,r0,#0x2
080DB772: 4018         add r0,r0,r1
080DB774: 0421         mov r1,#0x4
080DB776: e160         str r1,[r4,#0xc]
080DB778: 0068         ldr r0,[r0,#0x0]
080DB77A: 0069         ldr r0,[r0,#0x10]
080DB77C: 6061         str r0,[r4,#0x14]
080DB77E: 10bc         pop {r4}
080DB780: 01bc         pop {r0}
080DB782: 0047         bx r0
