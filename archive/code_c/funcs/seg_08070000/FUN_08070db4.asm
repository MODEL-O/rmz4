; undefined FUN_08070db4(void)
; entry 0x8070db4  size 30 bytes

08070DB4: 10b5         push {r4,lr}
08070DB6: 041c         add r4,r0,#0x0
08070DB8: 02f008ff     bl 0x08073bcc
08070DBC: 0549         ldr r1,[0x08070dd4]
08070DBE: 607b         ldrb r0,[r4,#0xd]
08070DC0: 8000         lsl r0,r0,#0x2
08070DC2: 4018         add r0,r0,r1
08070DC4: 0168         ldr r1,[r0,#0x0]
08070DC6: 201c         add r0,r4,#0x0
08070DC8: b8f0daf8     bl 0x08128f80
08070DCC: 10bc         pop {r4}
08070DCE: 01bc         pop {r0}
08070DD0: 0047         bx r0
