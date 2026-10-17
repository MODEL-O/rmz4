; undefined FUN_080e02e4(void)
; entry 0x80e02e4  size 48 bytes

080E02E4: 10b5         push {r4,lr}
080E02E6: 041c         add r4,r0,#0x0
080E02E8: 3cf782fe     bl 0x0801cff0
080E02EC: 201c         add r0,r4,#0x0
080E02EE: 7330         add r0,#0x73
080E02F0: 0078         ldrb r0,[r0,#0x0]
080E02F2: 0328         cmp r0,#0x3
080E02F4: 0bd1         bne 0x080e030e
080E02F6: 0749         ldr r1,[0x080e0314]
080E02F8: 607a         ldrb r0,[r4,#0x9]
080E02FA: 8000         lsl r0,r0,#0x2
080E02FC: 4018         add r0,r0,r1
080E02FE: 0221         mov r1,#0x2
080E0300: e160         str r1,[r4,#0xc]
080E0302: 0068         ldr r0,[r0,#0x0]
080E0304: 8068         ldr r0,[r0,#0x8]
080E0306: 6061         str r0,[r4,#0x14]
080E0308: 201c         add r0,r4,#0x0
080E030A: fff739fe     bl 0x080dff80
080E030E: 10bc         pop {r4}
080E0310: 01bc         pop {r0}
080E0312: 0047         bx r0
