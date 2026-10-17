; undefined FUN_080d42c8(void)
; entry 0x80d42c8  size 68 bytes

080D42C8: 10b5         push {r4,lr}
080D42CA: 041c         add r4,r0,#0x0
080D42CC: 3430         add r0,#0x34
080D42CE: 0f49         ldr r1,[0x080d430c]
080D42D0: 2ef7e0fc     bl 0x08002c94
080D42D4: e463         str r4,[r4,#0x3c]
080D42D6: a17a         ldrb r1,[r4,#0xa]
080D42D8: f720         mov r0,#0xf7
080D42DA: 0840         and r0,r1
080D42DC: 0022         mov r2,#0x0
080D42DE: 0121         mov r1,#0x1
080D42E0: 0843         orr r0,r1
080D42E2: 0221         mov r1,#0x2
080D42E4: 0843         orr r0,r1
080D42E6: a072         strb r0,[r4,#0xa]
080D42E8: a274         strb r2,[r4,#0x12]
080D42EA: 2266         str r2,[r4,#0x60]
080D42EC: 0849         ldr r1,[0x080d4310]
080D42EE: 607a         ldrb r0,[r4,#0x9]
080D42F0: 8000         lsl r0,r0,#0x2
080D42F2: 4018         add r0,r0,r1
080D42F4: 0121         mov r1,#0x1
080D42F6: e160         str r1,[r4,#0xc]
080D42F8: 0068         ldr r0,[r0,#0x0]
080D42FA: 4068         ldr r0,[r0,#0x4]
080D42FC: 6061         str r0,[r4,#0x14]
080D42FE: a273         strb r2,[r4,#0xe]
080D4300: 201c         add r0,r4,#0x0
080D4302: fff70dfe     bl 0x080d3f20
080D4306: 10bc         pop {r4}
080D4308: 01bc         pop {r0}
080D430A: 0047         bx r0
