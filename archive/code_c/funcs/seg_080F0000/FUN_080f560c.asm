; undefined FUN_080f560c(void)
; entry 0x80f560c  size 76 bytes

080F560C: 10b5         push {r4,lr}
080F560E: 041c         add r4,r0,#0x0
080F5610: 27f744fb     bl 0x0801cc9c
080F5614: a17a         ldrb r1,[r4,#0xa]
080F5616: 0120         mov r0,#0x1
080F5618: 0843         orr r0,r1
080F561A: 0221         mov r1,#0x2
080F561C: 0843         orr r0,r1
080F561E: a072         strb r0,[r4,#0xa]
080F5620: 0d49         ldr r1,[0x080f5658]
080F5622: 207c         ldrb r0,[r4,#0x10]
080F5624: 4000         lsl r0,r0,#0x1
080F5626: 4018         add r0,r0,r1
080F5628: 0188         ldrh r1,[r0,#0x0]
080F562A: 201c         add r0,r4,#0x0
080F562C: 27f768fc     bl 0x0801cf00
080F5630: e17a         ldrb r1,[r4,#0xb]
080F5632: 0820         mov r0,#0x8
080F5634: 0843         orr r0,r1
080F5636: e072         strb r0,[r4,#0xb]
080F5638: 0848         ldr r0,[0x080f565c]
080F563A: 2063         str r0,[r4,#0x30]
080F563C: 0f20         mov r0,#0xf
080F563E: e084         strh r0,[r4,#0x26]
080F5640: 201c         add r0,r4,#0x0
080F5642: b430         add r0,#0xb4
080F5644: 0649         ldr r1,[0x080f5660]
080F5646: 0160         str r1,[r0,#0x0]
080F5648: 6038         sub r0,#0x60
080F564A: 00f0abf8     bl 0x080f57a4
080F564E: b834         add r4,#0xb8
080F5650: 2070         strb r0,[r4,#0x0]
080F5652: 10bc         pop {r4}
080F5654: 01bc         pop {r0}
080F5656: 0047         bx r0
