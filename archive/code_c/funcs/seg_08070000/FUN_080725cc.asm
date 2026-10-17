; undefined FUN_080725cc(void)
; entry 0x80725cc  size 30 bytes

080725CC: 10b5         push {r4,lr}
080725CE: 041c         add r4,r0,#0x0
080725D0: 01f0fcfa     bl 0x08073bcc
080725D4: 0549         ldr r1,[0x080725ec]
080725D6: 607b         ldrb r0,[r4,#0xd]
080725D8: 8000         lsl r0,r0,#0x2
080725DA: 4018         add r0,r0,r1
080725DC: 0168         ldr r1,[r0,#0x0]
080725DE: 201c         add r0,r4,#0x0
080725E0: b6f0cefc     bl 0x08128f80
080725E4: 10bc         pop {r4}
080725E6: 01bc         pop {r0}
080725E8: 0047         bx r0
