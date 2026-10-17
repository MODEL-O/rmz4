; undefined FUN_080e575c(void)
; entry 0x80e575c  size 72 bytes

080E575C: 10b5         push {r4,lr}
080E575E: 041c         add r4,r0,#0x0
080E5760: 37f79cfa     bl 0x0801cc9c
080E5764: a17a         ldrb r1,[r4,#0xa]
080E5766: 0120         mov r0,#0x1
080E5768: 0843         orr r0,r1
080E576A: 0221         mov r1,#0x2
080E576C: 0843         orr r0,r1
080E576E: a072         strb r0,[r4,#0xa]
080E5770: 0c49         ldr r1,[0x080e57a4]
080E5772: 607a         ldrb r0,[r4,#0x9]
080E5774: 8000         lsl r0,r0,#0x2
080E5776: 4018         add r0,r0,r1
080E5778: 0121         mov r1,#0x1
080E577A: e160         str r1,[r4,#0xc]
080E577C: 0068         ldr r0,[r0,#0x0]
080E577E: 4068         ldr r0,[r0,#0x4]
080E5780: 6061         str r0,[r4,#0x14]
080E5782: 201c         add r0,r4,#0x0
080E5784: 7430         add r0,#0x74
080E5786: 0170         strb r1,[r0,#0x0]
080E5788: 0749         ldr r1,[0x080e57a8]
080E578A: 207c         ldrb r0,[r4,#0x10]
080E578C: 8000         lsl r0,r0,#0x2
080E578E: 4018         add r0,r0,r1
080E5790: 0168         ldr r1,[r0,#0x0]
080E5792: 201c         add r0,r4,#0x0
080E5794: 43f0f4fb     bl 0x08128f80
080E5798: 201c         add r0,r4,#0x0
080E579A: 00f007f8     bl 0x080e57ac
080E579E: 10bc         pop {r4}
080E57A0: 01bc         pop {r0}
080E57A2: 0047         bx r0
