; undefined FUN_08046c38(void)
; entry 0x8046c38  size 78 bytes

08046C38: 30b5         push {r4,r5,lr}
08046C3A: 041c         add r4,r0,#0x0
08046C3C: 1249         ldr r1,[0x08046c88]
08046C3E: 607a         ldrb r0,[r4,#0x9]
08046C40: 8000         lsl r0,r0,#0x2
08046C42: 4018         add r0,r0,r1
08046C44: 0121         mov r1,#0x1
08046C46: e160         str r1,[r4,#0xc]
08046C48: 0068         ldr r0,[r0,#0x0]
08046C4A: 4068         ldr r0,[r0,#0x4]
08046C4C: 6061         str r0,[r4,#0x14]
08046C4E: 201c         add r0,r4,#0x0
08046C50: d6f76af8     bl 0x0801cd28
08046C54: 201c         add r0,r4,#0x0
08046C56: d6f749f9     bl 0x0801ceec
08046C5A: a17a         ldrb r1,[r4,#0xa]
08046C5C: fe20         mov r0,#0xfe
08046C5E: 0840         and r0,r1
08046C60: 0025         mov r5,#0x0
08046C62: 0221         mov r1,#0x2
08046C64: 0843         orr r0,r1
08046C66: a072         strb r0,[r4,#0xa]
08046C68: 0849         ldr r1,[0x08046c8c]
08046C6A: 201c         add r0,r4,#0x0
08046C6C: d6f748f9     bl 0x0801cf00
08046C70: 0820         mov r0,#0x8
08046C72: a074         strb r0,[r4,#0x12]
08046C74: 201c         add r0,r4,#0x0
08046C76: bd30         add r0,#0xbd
08046C78: 0570         strb r5,[r0,#0x0]
08046C7A: 201c         add r0,r4,#0x0
08046C7C: 00f008f8     bl 0x08046c90
08046C80: 30bc         pop {r4,r5}
08046C82: 01bc         pop {r0}
08046C84: 0047         bx r0
