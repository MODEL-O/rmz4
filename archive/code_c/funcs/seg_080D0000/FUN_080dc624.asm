; undefined FUN_080dc624(void)
; entry 0x80dc624  size 62 bytes

080DC624: 10b5         push {r4,lr}
080DC626: 041c         add r4,r0,#0x0
080DC628: 0e49         ldr r1,[0x080dc664]
080DC62A: 607a         ldrb r0,[r4,#0x9]
080DC62C: 8000         lsl r0,r0,#0x2
080DC62E: 4018         add r0,r0,r1
080DC630: 0121         mov r1,#0x1
080DC632: e160         str r1,[r4,#0xc]
080DC634: 0068         ldr r0,[r0,#0x0]
080DC636: 4068         ldr r0,[r0,#0x4]
080DC638: 6061         str r0,[r4,#0x14]
080DC63A: 0b49         ldr r1,[0x080dc668]
080DC63C: 207c         ldrb r0,[r4,#0x10]
080DC63E: 4018         add r0,r0,r1
080DC640: 0078         ldrb r0,[r0,#0x0]
080DC642: 6073         strb r0,[r4,#0xd]
080DC644: a07a         ldrb r0,[r4,#0xa]
080DC646: 0221         mov r1,#0x2
080DC648: 0843         orr r0,r1
080DC64A: 0121         mov r1,#0x1
080DC64C: 0843         orr r0,r1
080DC64E: a072         strb r0,[r4,#0xa]
080DC650: 201c         add r0,r4,#0x0
080DC652: 40f723fb     bl 0x0801cc9c
080DC656: 201c         add r0,r4,#0x0
080DC658: 00f008f8     bl 0x080dc66c
080DC65C: 10bc         pop {r4}
080DC65E: 01bc         pop {r0}
080DC660: 0047         bx r0
