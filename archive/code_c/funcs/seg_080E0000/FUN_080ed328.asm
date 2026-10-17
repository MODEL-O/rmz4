; undefined FUN_080ed328(void)
; entry 0x80ed328  size 70 bytes

080ED328: 10b5         push {r4,lr}
080ED32A: 041c         add r4,r0,#0x0
080ED32C: 2ff7b6fc     bl 0x0801cc9c
080ED330: a17a         ldrb r1,[r4,#0xa]
080ED332: 0120         mov r0,#0x1
080ED334: 0843         orr r0,r1
080ED336: 0221         mov r1,#0x2
080ED338: 0843         orr r0,r1
080ED33A: a072         strb r0,[r4,#0xa]
080ED33C: e021         mov r1,#0xe0
080ED33E: 8901         lsl r1,r1,#0x6
080ED340: 201c         add r0,r4,#0x0
080ED342: 2ff7ddfd     bl 0x0801cf00
080ED346: 211c         add r1,r4,#0x0
080ED348: 5431         add r1,#0x54
080ED34A: 201c         add r0,r4,#0x0
080ED34C: 00f03af8     bl 0x080ed3c4
080ED350: 0749         ldr r1,[0x080ed370]
080ED352: 607a         ldrb r0,[r4,#0x9]
080ED354: 8000         lsl r0,r0,#0x2
080ED356: 4018         add r0,r0,r1
080ED358: 0121         mov r1,#0x1
080ED35A: e160         str r1,[r4,#0xc]
080ED35C: 0068         ldr r0,[r0,#0x0]
080ED35E: 4068         ldr r0,[r0,#0x4]
080ED360: 6061         str r0,[r4,#0x14]
080ED362: 201c         add r0,r4,#0x0
080ED364: 00f006f8     bl 0x080ed374
080ED368: 10bc         pop {r4}
080ED36A: 01bc         pop {r0}
080ED36C: 0047         bx r0
