; undefined FUN_08043d3c(void)
; entry 0x8043d3c  size 74 bytes

08043D3C: 10b5         push {r4,lr}
08043D3E: 041c         add r4,r0,#0x0
08043D40: 1149         ldr r1,[0x08043d88]
08043D42: 607a         ldrb r0,[r4,#0x9]
08043D44: 8000         lsl r0,r0,#0x2
08043D46: 4018         add r0,r0,r1
08043D48: 0121         mov r1,#0x1
08043D4A: e160         str r1,[r4,#0xc]
08043D4C: 0068         ldr r0,[r0,#0x0]
08043D4E: 4068         ldr r0,[r0,#0x4]
08043D50: 6061         str r0,[r4,#0x14]
08043D52: 201c         add r0,r4,#0x0
08043D54: d8f7a2ff     bl 0x0801cc9c
08043D58: 201c         add r0,r4,#0x0
08043D5A: d9f7c7f8     bl 0x0801ceec
08043D5E: a17a         ldrb r1,[r4,#0xa]
08043D60: fe20         mov r0,#0xfe
08043D62: 0840         and r0,r1
08043D64: 0221         mov r1,#0x2
08043D66: 0843         orr r0,r1
08043D68: a072         strb r0,[r4,#0xa]
08043D6A: 0849         ldr r1,[0x08043d8c]
08043D6C: 201c         add r0,r4,#0x0
08043D6E: d9f7c7f8     bl 0x0801cf00
08043D72: 0820         mov r0,#0x8
08043D74: a074         strb r0,[r4,#0x12]
08043D76: 3820         mov r0,#0x38
08043D78: e074         strb r0,[r4,#0x13]
08043D7A: 201c         add r0,r4,#0x0
08043D7C: 00f008f8     bl 0x08043d90
08043D80: 10bc         pop {r4}
08043D82: 01bc         pop {r0}
08043D84: 0047         bx r0
