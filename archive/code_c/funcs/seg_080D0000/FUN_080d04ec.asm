; undefined FUN_080d04ec(void)
; entry 0x80d04ec  size 50 bytes

080D04EC: 10b5         push {r4,lr}
080D04EE: 041c         add r4,r0,#0x0
080D04F0: 4cf77efd     bl 0x0801cff0
080D04F4: a07c         ldrb r0,[r4,#0x12]
080D04F6: 0138         sub r0,#0x1
080D04F8: a074         strb r0,[r4,#0x12]
080D04FA: 0006         lsl r0,r0,#0x18
080D04FC: 0028         cmp r0,#0x0
080D04FE: 0bd1         bne 0x080d0518
080D0500: 0749         ldr r1,[0x080d0520]
080D0502: 607a         ldrb r0,[r4,#0x9]
080D0504: 8000         lsl r0,r0,#0x2
080D0506: 4018         add r0,r0,r1
080D0508: 0221         mov r1,#0x2
080D050A: e160         str r1,[r4,#0xc]
080D050C: 0068         ldr r0,[r0,#0x0]
080D050E: 8068         ldr r0,[r0,#0x8]
080D0510: 6061         str r0,[r4,#0x14]
080D0512: 201c         add r0,r4,#0x0
080D0514: 00f006f8     bl 0x080d0524
080D0518: 10bc         pop {r4}
080D051A: 01bc         pop {r0}
080D051C: 0047         bx r0
