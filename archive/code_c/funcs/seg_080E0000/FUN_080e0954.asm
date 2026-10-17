; undefined FUN_080e0954(void)
; entry 0x80e0954  size 72 bytes

080E0954: 10b5         push {r4,lr}
080E0956: 041c         add r4,r0,#0x0
080E0958: 3cf7a0f9     bl 0x0801cc9c
080E095C: a17a         ldrb r1,[r4,#0xa]
080E095E: 0120         mov r0,#0x1
080E0960: 0843         orr r0,r1
080E0962: 0221         mov r1,#0x2
080E0964: 0843         orr r0,r1
080E0966: a072         strb r0,[r4,#0xa]
080E0968: 0c49         ldr r1,[0x080e099c]
080E096A: 607a         ldrb r0,[r4,#0x9]
080E096C: 8000         lsl r0,r0,#0x2
080E096E: 4018         add r0,r0,r1
080E0970: 0121         mov r1,#0x1
080E0972: e160         str r1,[r4,#0xc]
080E0974: 0068         ldr r0,[r0,#0x0]
080E0976: 4068         ldr r0,[r0,#0x4]
080E0978: 6061         str r0,[r4,#0x14]
080E097A: 207c         ldrb r0,[r4,#0x10]
080E097C: 0228         cmp r0,#0x2
080E097E: 07d8         bhi 0x080e0990
080E0980: 0748         ldr r0,[0x080e09a0]
080E0982: 217c         ldrb r1,[r4,#0x10]
080E0984: 8900         lsl r1,r1,#0x2
080E0986: 0918         add r1,r1,r0
080E0988: 0968         ldr r1,[r1,#0x0]
080E098A: 201c         add r0,r4,#0x0
080E098C: 48f0f8fa     bl 0x08128f80
080E0990: 201c         add r0,r4,#0x0
080E0992: 00f097f8     bl 0x080e0ac4
080E0996: 10bc         pop {r4}
080E0998: 01bc         pop {r0}
080E099A: 0047         bx r0
