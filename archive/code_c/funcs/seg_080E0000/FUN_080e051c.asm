; undefined FUN_080e051c(void)
; entry 0x80e051c  size 58 bytes

080E051C: 10b5         push {r4,lr}
080E051E: 041c         add r4,r0,#0x0
080E0520: 3cf766fd     bl 0x0801cff0
080E0524: a06d         ldr r0,[r4,#0x58]
080E0526: 216e         ldr r1,[r4,#0x60]
080E0528: 4018         add r0,r0,r1
080E052A: a065         str r0,[r4,#0x58]
080E052C: a07c         ldrb r0,[r4,#0x12]
080E052E: 0138         sub r0,#0x1
080E0530: a074         strb r0,[r4,#0x12]
080E0532: 0006         lsl r0,r0,#0x18
080E0534: 0028         cmp r0,#0x0
080E0536: 0bd1         bne 0x080e0550
080E0538: 0749         ldr r1,[0x080e0558]
080E053A: 607a         ldrb r0,[r4,#0x9]
080E053C: 8000         lsl r0,r0,#0x2
080E053E: 4018         add r0,r0,r1
080E0540: 0221         mov r1,#0x2
080E0542: e160         str r1,[r4,#0xc]
080E0544: 0068         ldr r0,[r0,#0x0]
080E0546: 8068         ldr r0,[r0,#0x8]
080E0548: 6061         str r0,[r4,#0x14]
080E054A: 201c         add r0,r4,#0x0
080E054C: 00f006f8     bl 0x080e055c
080E0550: 10bc         pop {r4}
080E0552: 01bc         pop {r0}
080E0554: 0047         bx r0
