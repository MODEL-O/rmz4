; undefined FUN_080e6838(void)
; entry 0x80e6838  size 66 bytes

080E6838: 10b5         push {r4,lr}
080E683A: 041c         add r4,r0,#0x0
080E683C: 36f72efa     bl 0x0801cc9c
080E6840: a17a         ldrb r1,[r4,#0xa]
080E6842: 0120         mov r0,#0x1
080E6844: 0843         orr r0,r1
080E6846: 0221         mov r1,#0x2
080E6848: 0843         orr r0,r1
080E684A: a072         strb r0,[r4,#0xa]
080E684C: 0b49         ldr r1,[0x080e687c]
080E684E: 607a         ldrb r0,[r4,#0x9]
080E6850: 8000         lsl r0,r0,#0x2
080E6852: 4018         add r0,r0,r1
080E6854: 0121         mov r1,#0x1
080E6856: e160         str r1,[r4,#0xc]
080E6858: 0068         ldr r0,[r0,#0x0]
080E685A: 4068         ldr r0,[r0,#0x4]
080E685C: 6061         str r0,[r4,#0x14]
080E685E: 0849         ldr r1,[0x080e6880]
080E6860: 207c         ldrb r0,[r4,#0x10]
080E6862: 8000         lsl r0,r0,#0x2
080E6864: 4018         add r0,r0,r1
080E6866: 0168         ldr r1,[r0,#0x0]
080E6868: 201c         add r0,r4,#0x0
080E686A: 42f089fb     bl 0x08128f80
080E686E: 201c         add r0,r4,#0x0
080E6870: 00f008f8     bl 0x080e6884
080E6874: 10bc         pop {r4}
080E6876: 01bc         pop {r0}
080E6878: 0047         bx r0
