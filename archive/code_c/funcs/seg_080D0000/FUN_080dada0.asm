; undefined FUN_080dada0(void)
; entry 0x80dada0  size 68 bytes

080DADA0: 10b5         push {r4,lr}
080DADA2: 041c         add r4,r0,#0x0
080DADA4: 3430         add r0,#0x34
080DADA6: 0f49         ldr r1,[0x080dade4]
080DADA8: 27f774ff     bl 0x08002c94
080DADAC: e463         str r4,[r4,#0x3c]
080DADAE: a17a         ldrb r1,[r4,#0xa]
080DADB0: f720         mov r0,#0xf7
080DADB2: 0840         and r0,r1
080DADB4: 0022         mov r2,#0x0
080DADB6: 0121         mov r1,#0x1
080DADB8: 0843         orr r0,r1
080DADBA: 0221         mov r1,#0x2
080DADBC: 0843         orr r0,r1
080DADBE: a072         strb r0,[r4,#0xa]
080DADC0: 201c         add r0,r4,#0x0
080DADC2: 7730         add r0,#0x77
080DADC4: 0270         strb r2,[r0,#0x0]
080DADC6: 0849         ldr r1,[0x080dade8]
080DADC8: 607a         ldrb r0,[r4,#0x9]
080DADCA: 8000         lsl r0,r0,#0x2
080DADCC: 4018         add r0,r0,r1
080DADCE: 0121         mov r1,#0x1
080DADD0: e160         str r1,[r4,#0xc]
080DADD2: 0068         ldr r0,[r0,#0x0]
080DADD4: 4068         ldr r0,[r0,#0x4]
080DADD6: 6061         str r0,[r4,#0x14]
080DADD8: 201c         add r0,r4,#0x0
080DADDA: 00f007f8     bl 0x080dadec
080DADDE: 10bc         pop {r4}
080DADE0: 01bc         pop {r0}
080DADE2: 0047         bx r0
