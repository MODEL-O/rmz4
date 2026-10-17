; undefined FUN_080d0fa4(void)
; entry 0x80d0fa4  size 42 bytes

080D0FA4: 10b5         push {r4,lr}
080D0FA6: 041c         add r4,r0,#0x0
080D0FA8: 4cf722f8     bl 0x0801cff0
080D0FAC: 201c         add r0,r4,#0x0
080D0FAE: 7330         add r0,#0x73
080D0FB0: 0078         ldrb r0,[r0,#0x0]
080D0FB2: 0328         cmp r0,#0x3
080D0FB4: 08d1         bne 0x080d0fc8
080D0FB6: 0649         ldr r1,[0x080d0fd0]
080D0FB8: 607a         ldrb r0,[r4,#0x9]
080D0FBA: 8000         lsl r0,r0,#0x2
080D0FBC: 4018         add r0,r0,r1
080D0FBE: 0221         mov r1,#0x2
080D0FC0: e160         str r1,[r4,#0xc]
080D0FC2: 0068         ldr r0,[r0,#0x0]
080D0FC4: 8068         ldr r0,[r0,#0x8]
080D0FC6: 6061         str r0,[r4,#0x14]
080D0FC8: 10bc         pop {r4}
080D0FCA: 01bc         pop {r0}
080D0FCC: 0047         bx r0
