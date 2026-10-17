; undefined FUN_080fd330(void)
; entry 0x80fd330  size 32 bytes

080FD330: f0b5         push {r4,r5,r6,r7,lr}
080FD332: 82b0         sub sp,#0x8
080FD334: 051c         add r5,r0,#0x0
080FD336: 687b         ldrb r0,[r5,#0xd]
080FD338: 4128         cmp r0,#0x41
080FD33A: 00d9         bls 0x080fd33e
080FD33C: 5ce3         b 0x080fd9f8
080FD33E: 8000         lsl r0,r0,#0x2
080FD340: 0149         ldr r1,[0x080fd348]
080FD342: 4018         add r0,r0,r1
080FD344: 0068         ldr r0,[r0,#0x0]
080FD346: 8746         mov pc,r0
080FD9F8: 02b0         add sp,#0x8
080FD9FA: f0bc         pop {r4,r5,r6,r7}
080FD9FC: 01bc         pop {r0}
080FD9FE: 0047         bx r0
