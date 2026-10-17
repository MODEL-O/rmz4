; undefined FUN_080da0b8(void)
; entry 0x80da0b8  size 66 bytes

080DA0B8: 10b5         push {r4,lr}
080DA0BA: 041c         add r4,r0,#0x0
080DA0BC: 42f7eefd     bl 0x0801cc9c
080DA0C0: a17a         ldrb r1,[r4,#0xa]
080DA0C2: 0120         mov r0,#0x1
080DA0C4: 0843         orr r0,r1
080DA0C6: 0221         mov r1,#0x2
080DA0C8: 0843         orr r0,r1
080DA0CA: a072         strb r0,[r4,#0xa]
080DA0CC: 0b49         ldr r1,[0x080da0fc]
080DA0CE: 607c         ldrb r0,[r4,#0x11]
080DA0D0: 8000         lsl r0,r0,#0x2
080DA0D2: 4018         add r0,r0,r1
080DA0D4: 0168         ldr r1,[r0,#0x0]
080DA0D6: 201c         add r0,r4,#0x0
080DA0D8: 4ef052ff     bl 0x08128f80
080DA0DC: 0849         ldr r1,[0x080da100]
080DA0DE: 607a         ldrb r0,[r4,#0x9]
080DA0E0: 8000         lsl r0,r0,#0x2
080DA0E2: 4018         add r0,r0,r1
080DA0E4: 0121         mov r1,#0x1
080DA0E6: e160         str r1,[r4,#0xc]
080DA0E8: 0068         ldr r0,[r0,#0x0]
080DA0EA: 4068         ldr r0,[r0,#0x4]
080DA0EC: 6061         str r0,[r4,#0x14]
080DA0EE: 201c         add r0,r4,#0x0
080DA0F0: 00f008f8     bl 0x080da104
080DA0F4: 10bc         pop {r4}
080DA0F6: 01bc         pop {r0}
080DA0F8: 0047         bx r0
