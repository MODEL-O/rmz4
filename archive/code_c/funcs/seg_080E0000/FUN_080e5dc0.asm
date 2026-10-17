; undefined FUN_080e5dc0(void)
; entry 0x80e5dc0  size 66 bytes

080E5DC0: 10b5         push {r4,lr}
080E5DC2: 041c         add r4,r0,#0x0
080E5DC4: 36f76aff     bl 0x0801cc9c
080E5DC8: a17a         ldrb r1,[r4,#0xa]
080E5DCA: 0120         mov r0,#0x1
080E5DCC: 0843         orr r0,r1
080E5DCE: 0221         mov r1,#0x2
080E5DD0: 0843         orr r0,r1
080E5DD2: a072         strb r0,[r4,#0xa]
080E5DD4: 0b49         ldr r1,[0x080e5e04]
080E5DD6: 607a         ldrb r0,[r4,#0x9]
080E5DD8: 8000         lsl r0,r0,#0x2
080E5DDA: 4018         add r0,r0,r1
080E5DDC: 0121         mov r1,#0x1
080E5DDE: e160         str r1,[r4,#0xc]
080E5DE0: 0068         ldr r0,[r0,#0x0]
080E5DE2: 4068         ldr r0,[r0,#0x4]
080E5DE4: 6061         str r0,[r4,#0x14]
080E5DE6: 0849         ldr r1,[0x080e5e08]
080E5DE8: 207c         ldrb r0,[r4,#0x10]
080E5DEA: 8000         lsl r0,r0,#0x2
080E5DEC: 4018         add r0,r0,r1
080E5DEE: 0168         ldr r1,[r0,#0x0]
080E5DF0: 201c         add r0,r4,#0x0
080E5DF2: 43f0c5f8     bl 0x08128f80
080E5DF6: 201c         add r0,r4,#0x0
080E5DF8: 00f008f8     bl 0x080e5e0c
080E5DFC: 10bc         pop {r4}
080E5DFE: 01bc         pop {r0}
080E5E00: 0047         bx r0
