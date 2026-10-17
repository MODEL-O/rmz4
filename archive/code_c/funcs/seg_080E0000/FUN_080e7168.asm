; undefined FUN_080e7168(void)
; entry 0x80e7168  size 66 bytes

080E7168: 10b5         push {r4,lr}
080E716A: 041c         add r4,r0,#0x0
080E716C: 35f796fd     bl 0x0801cc9c
080E7170: a17a         ldrb r1,[r4,#0xa]
080E7172: 0120         mov r0,#0x1
080E7174: 0843         orr r0,r1
080E7176: 0221         mov r1,#0x2
080E7178: 0843         orr r0,r1
080E717A: a072         strb r0,[r4,#0xa]
080E717C: 0b49         ldr r1,[0x080e71ac]
080E717E: 607a         ldrb r0,[r4,#0x9]
080E7180: 8000         lsl r0,r0,#0x2
080E7182: 4018         add r0,r0,r1
080E7184: 0121         mov r1,#0x1
080E7186: e160         str r1,[r4,#0xc]
080E7188: 0068         ldr r0,[r0,#0x0]
080E718A: 4068         ldr r0,[r0,#0x4]
080E718C: 6061         str r0,[r4,#0x14]
080E718E: 0849         ldr r1,[0x080e71b0]
080E7190: 207c         ldrb r0,[r4,#0x10]
080E7192: 8000         lsl r0,r0,#0x2
080E7194: 4018         add r0,r0,r1
080E7196: 0168         ldr r1,[r0,#0x0]
080E7198: 201c         add r0,r4,#0x0
080E719A: 41f0f1fe     bl 0x08128f80
080E719E: 201c         add r0,r4,#0x0
080E71A0: 00f008f8     bl 0x080e71b4
080E71A4: 10bc         pop {r4}
080E71A6: 01bc         pop {r0}
080E71A8: 0047         bx r0
