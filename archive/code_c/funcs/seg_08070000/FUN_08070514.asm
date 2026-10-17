; undefined FUN_08070514(void)
; entry 0x8070514  size 30 bytes

08070514: 10b5         push {r4,lr}
08070516: 041c         add r4,r0,#0x0
08070518: 03f058fb     bl 0x08073bcc
0807051C: 0549         ldr r1,[0x08070534]
0807051E: 607b         ldrb r0,[r4,#0xd]
08070520: 8000         lsl r0,r0,#0x2
08070522: 4018         add r0,r0,r1
08070524: 0168         ldr r1,[r0,#0x0]
08070526: 201c         add r0,r4,#0x0
08070528: b8f02afd     bl 0x08128f80
0807052C: 10bc         pop {r4}
0807052E: 01bc         pop {r0}
08070530: 0047         bx r0
