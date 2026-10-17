; undefined FUN_080f43bc(void)
; entry 0x80f43bc  size 38 bytes

080F43BC: 10b5         push {r4,lr}
080F43BE: 82b0         sub sp,#0x8
080F43C0: 041c         add r4,r0,#0x0
080F43C2: 607b         ldrb r0,[r4,#0xd]
080F43C4: 0528         cmp r0,#0x5
080F43C6: 00d9         bls 0x080f43ca
080F43C8: 6ce1         b 0x080f46a4
080F43CA: 8000         lsl r0,r0,#0x2
080F43CC: 0149         ldr r1,[0x080f43d4]
080F43CE: 4018         add r0,r0,r1
080F43D0: 0068         ldr r0,[r0,#0x0]
080F43D2: 8746         mov pc,r0
080F46A4: 201c         add r0,r4,#0x0
080F46A6: 28f7a3fc     bl 0x0801cff0
080F46AA: 02b0         add sp,#0x8
080F46AC: 10bc         pop {r4}
080F46AE: 01bc         pop {r0}
080F46B0: 0047         bx r0
