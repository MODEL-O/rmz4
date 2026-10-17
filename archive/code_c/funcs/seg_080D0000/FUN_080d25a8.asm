; undefined FUN_080d25a8(void)
; entry 0x80d25a8  size 42 bytes

080D25A8: 10b5         push {r4,lr}
080D25AA: 041c         add r4,r0,#0x0
080D25AC: 4af720fd     bl 0x0801cff0
080D25B0: 201c         add r0,r4,#0x0
080D25B2: 7330         add r0,#0x73
080D25B4: 0078         ldrb r0,[r0,#0x0]
080D25B6: 0328         cmp r0,#0x3
080D25B8: 08d1         bne 0x080d25cc
080D25BA: 0649         ldr r1,[0x080d25d4]
080D25BC: 607a         ldrb r0,[r4,#0x9]
080D25BE: 8000         lsl r0,r0,#0x2
080D25C0: 4018         add r0,r0,r1
080D25C2: 0221         mov r1,#0x2
080D25C4: e160         str r1,[r4,#0xc]
080D25C6: 0068         ldr r0,[r0,#0x0]
080D25C8: 8068         ldr r0,[r0,#0x8]
080D25CA: 6061         str r0,[r4,#0x14]
080D25CC: 10bc         pop {r4}
080D25CE: 01bc         pop {r0}
080D25D0: 0047         bx r0
