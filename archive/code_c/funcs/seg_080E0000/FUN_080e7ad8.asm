; undefined FUN_080e7ad8(void)
; entry 0x80e7ad8  size 66 bytes

080E7AD8: 10b5         push {r4,lr}
080E7ADA: 041c         add r4,r0,#0x0
080E7ADC: 35f7def8     bl 0x0801cc9c
080E7AE0: a17a         ldrb r1,[r4,#0xa]
080E7AE2: 0120         mov r0,#0x1
080E7AE4: 0843         orr r0,r1
080E7AE6: 0221         mov r1,#0x2
080E7AE8: 0843         orr r0,r1
080E7AEA: a072         strb r0,[r4,#0xa]
080E7AEC: 0b49         ldr r1,[0x080e7b1c]
080E7AEE: 607a         ldrb r0,[r4,#0x9]
080E7AF0: 8000         lsl r0,r0,#0x2
080E7AF2: 4018         add r0,r0,r1
080E7AF4: 0121         mov r1,#0x1
080E7AF6: e160         str r1,[r4,#0xc]
080E7AF8: 0068         ldr r0,[r0,#0x0]
080E7AFA: 4068         ldr r0,[r0,#0x4]
080E7AFC: 6061         str r0,[r4,#0x14]
080E7AFE: 0849         ldr r1,[0x080e7b20]
080E7B00: 207c         ldrb r0,[r4,#0x10]
080E7B02: 8000         lsl r0,r0,#0x2
080E7B04: 4018         add r0,r0,r1
080E7B06: 0168         ldr r1,[r0,#0x0]
080E7B08: 201c         add r0,r4,#0x0
080E7B0A: 41f039fa     bl 0x08128f80
080E7B0E: 201c         add r0,r4,#0x0
080E7B10: 00f008f8     bl 0x080e7b24
080E7B14: 10bc         pop {r4}
080E7B16: 01bc         pop {r0}
080E7B18: 0047         bx r0
