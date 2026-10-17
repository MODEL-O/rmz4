; undefined FUN_080f47bc(void)
; entry 0x80f47bc  size 32 bytes

080F47BC: 30b5         push {r4,r5,lr}
080F47BE: 8ab0         sub sp,#0x28
080F47C0: 051c         add r5,r0,#0x0
080F47C2: 687b         ldrb r0,[r5,#0xd]
080F47C4: 0428         cmp r0,#0x4
080F47C6: 00d9         bls 0x080f47ca
080F47C8: c0e0         b 0x080f494c
080F47CA: 8000         lsl r0,r0,#0x2
080F47CC: 0149         ldr r1,[0x080f47d4]
080F47CE: 4018         add r0,r0,r1
080F47D0: 0068         ldr r0,[r0,#0x0]
080F47D2: 8746         mov pc,r0
080F494C: 0ab0         add sp,#0x28
080F494E: 30bc         pop {r4,r5}
080F4950: 01bc         pop {r0}
080F4952: 0047         bx r0
