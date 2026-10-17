; undefined FUN_080d6dc4(void)
; entry 0x80d6dc4  size 42 bytes

080D6DC4: 10b5         push {r4,lr}
080D6DC6: 041c         add r4,r0,#0x0
080D6DC8: 46f712f9     bl 0x0801cff0
080D6DCC: 201c         add r0,r4,#0x0
080D6DCE: 7330         add r0,#0x73
080D6DD0: 0078         ldrb r0,[r0,#0x0]
080D6DD2: 0328         cmp r0,#0x3
080D6DD4: 08d1         bne 0x080d6de8
080D6DD6: 0649         ldr r1,[0x080d6df0]
080D6DD8: 607a         ldrb r0,[r4,#0x9]
080D6DDA: 8000         lsl r0,r0,#0x2
080D6DDC: 4018         add r0,r0,r1
080D6DDE: 0221         mov r1,#0x2
080D6DE0: e160         str r1,[r4,#0xc]
080D6DE2: 0068         ldr r0,[r0,#0x0]
080D6DE4: 8068         ldr r0,[r0,#0x8]
080D6DE6: 6061         str r0,[r4,#0x14]
080D6DE8: 10bc         pop {r4}
080D6DEA: 01bc         pop {r0}
080D6DEC: 0047         bx r0
