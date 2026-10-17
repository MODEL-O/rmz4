; undefined FUN_080cae34(void)
; entry 0x80cae34  size 38 bytes

080CAE34: 10b5         push {r4,lr}
080CAE36: 041c         add r4,r0,#0x0
080CAE38: 211c         add r1,r4,#0x0
080CAE3A: 5431         add r1,#0x54
080CAE3C: 0320         mov r0,#0x3
080CAE3E: 05f023ff     bl 0x080d0c88
080CAE42: 0649         ldr r1,[0x080cae5c]
080CAE44: 607a         ldrb r0,[r4,#0x9]
080CAE46: 8000         lsl r0,r0,#0x2
080CAE48: 4018         add r0,r0,r1
080CAE4A: 0421         mov r1,#0x4
080CAE4C: e160         str r1,[r4,#0xc]
080CAE4E: 0068         ldr r0,[r0,#0x0]
080CAE50: 0069         ldr r0,[r0,#0x10]
080CAE52: 6061         str r0,[r4,#0x14]
080CAE54: 10bc         pop {r4}
080CAE56: 01bc         pop {r0}
080CAE58: 0047         bx r0
