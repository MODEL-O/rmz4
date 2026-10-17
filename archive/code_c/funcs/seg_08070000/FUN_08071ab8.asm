; undefined FUN_08071ab8(void)
; entry 0x8071ab8  size 30 bytes

08071AB8: 10b5         push {r4,lr}
08071ABA: 041c         add r4,r0,#0x0
08071ABC: 02f086f8     bl 0x08073bcc
08071AC0: 0549         ldr r1,[0x08071ad8]
08071AC2: 607b         ldrb r0,[r4,#0xd]
08071AC4: 8000         lsl r0,r0,#0x2
08071AC6: 4018         add r0,r0,r1
08071AC8: 0168         ldr r1,[r0,#0x0]
08071ACA: 201c         add r0,r4,#0x0
08071ACC: b7f058fa     bl 0x08128f80
08071AD0: 10bc         pop {r4}
08071AD2: 01bc         pop {r0}
08071AD4: 0047         bx r0
