; undefined FUN_080707f8(void)
; entry 0x80707f8  size 30 bytes

080707F8: 10b5         push {r4,lr}
080707FA: 041c         add r4,r0,#0x0
080707FC: 03f0e6f9     bl 0x08073bcc
08070800: 0549         ldr r1,[0x08070818]
08070802: 607b         ldrb r0,[r4,#0xd]
08070804: 8000         lsl r0,r0,#0x2
08070806: 4018         add r0,r0,r1
08070808: 0168         ldr r1,[r0,#0x0]
0807080A: 201c         add r0,r4,#0x0
0807080C: b8f0b8fb     bl 0x08128f80
08070810: 10bc         pop {r4}
08070812: 01bc         pop {r0}
08070814: 0047         bx r0
