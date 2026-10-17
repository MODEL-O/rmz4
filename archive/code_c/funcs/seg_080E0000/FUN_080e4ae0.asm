; undefined FUN_080e4ae0(void)
; entry 0x80e4ae0  size 72 bytes

080E4AE0: 30b5         push {r4,r5,lr}
080E4AE2: 041c         add r4,r0,#0x0
080E4AE4: 38f7daf8     bl 0x0801cc9c
080E4AE8: a17a         ldrb r1,[r4,#0xa]
080E4AEA: 0120         mov r0,#0x1
080E4AEC: 0843         orr r0,r1
080E4AEE: 0221         mov r1,#0x2
080E4AF0: 0843         orr r0,r1
080E4AF2: a072         strb r0,[r4,#0xa]
080E4AF4: 0c49         ldr r1,[0x080e4b28]
080E4AF6: 607a         ldrb r0,[r4,#0x9]
080E4AF8: 8000         lsl r0,r0,#0x2
080E4AFA: 4018         add r0,r0,r1
080E4AFC: 0125         mov r5,#0x1
080E4AFE: e560         str r5,[r4,#0xc]
080E4B00: 0068         ldr r0,[r0,#0x0]
080E4B02: 4068         ldr r0,[r0,#0x4]
080E4B04: 6061         str r0,[r4,#0x14]
080E4B06: 0949         ldr r1,[0x080e4b2c]
080E4B08: 207c         ldrb r0,[r4,#0x10]
080E4B0A: 8000         lsl r0,r0,#0x2
080E4B0C: 4018         add r0,r0,r1
080E4B0E: 0168         ldr r1,[r0,#0x0]
080E4B10: 201c         add r0,r4,#0x0
080E4B12: 44f035fa     bl 0x08128f80
080E4B16: 201c         add r0,r4,#0x0
080E4B18: 7430         add r0,#0x74
080E4B1A: 0570         strb r5,[r0,#0x0]
080E4B1C: 201c         add r0,r4,#0x0
080E4B1E: 00f007f8     bl 0x080e4b30
080E4B22: 30bc         pop {r4,r5}
080E4B24: 01bc         pop {r0}
080E4B26: 0047         bx r0
