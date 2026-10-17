; undefined FUN_080f05cc(void)
; entry 0x80f05cc  size 32 bytes

080F05CC: f0b5         push {r4,r5,r6,r7,lr}
080F05CE: 84b0         sub sp,#0x10
080F05D0: 051c         add r5,r0,#0x0
080F05D2: 687b         ldrb r0,[r5,#0xd]
080F05D4: 0528         cmp r0,#0x5
080F05D6: 00d9         bls 0x080f05da
080F05D8: 2be1         b 0x080f0832
080F05DA: 8000         lsl r0,r0,#0x2
080F05DC: 0149         ldr r1,[0x080f05e4]
080F05DE: 4018         add r0,r0,r1
080F05E0: 0068         ldr r0,[r0,#0x0]
080F05E2: 8746         mov pc,r0
080F0832: 04b0         add sp,#0x10
080F0834: f0bc         pop {r4,r5,r6,r7}
080F0836: 01bc         pop {r0}
080F0838: 0047         bx r0
