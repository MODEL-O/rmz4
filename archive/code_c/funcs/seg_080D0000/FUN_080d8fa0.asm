; undefined FUN_080d8fa0(void)
; entry 0x80d8fa0  size 66 bytes

080D8FA0: 10b5         push {r4,lr}
080D8FA2: 041c         add r4,r0,#0x0
080D8FA4: 43f77afe     bl 0x0801cc9c
080D8FA8: a17a         ldrb r1,[r4,#0xa]
080D8FAA: 0120         mov r0,#0x1
080D8FAC: 0843         orr r0,r1
080D8FAE: 0221         mov r1,#0x2
080D8FB0: 0843         orr r0,r1
080D8FB2: a072         strb r0,[r4,#0xa]
080D8FB4: 0b49         ldr r1,[0x080d8fe4]
080D8FB6: 607c         ldrb r0,[r4,#0x11]
080D8FB8: 8000         lsl r0,r0,#0x2
080D8FBA: 4018         add r0,r0,r1
080D8FBC: 0168         ldr r1,[r0,#0x0]
080D8FBE: 201c         add r0,r4,#0x0
080D8FC0: 4ff0deff     bl 0x08128f80
080D8FC4: 0849         ldr r1,[0x080d8fe8]
080D8FC6: 607a         ldrb r0,[r4,#0x9]
080D8FC8: 8000         lsl r0,r0,#0x2
080D8FCA: 4018         add r0,r0,r1
080D8FCC: 0121         mov r1,#0x1
080D8FCE: e160         str r1,[r4,#0xc]
080D8FD0: 0068         ldr r0,[r0,#0x0]
080D8FD2: 4068         ldr r0,[r0,#0x4]
080D8FD4: 6061         str r0,[r4,#0x14]
080D8FD6: 201c         add r0,r4,#0x0
080D8FD8: 00f008f8     bl 0x080d8fec
080D8FDC: 10bc         pop {r4}
080D8FDE: 01bc         pop {r0}
080D8FE0: 0047         bx r0
