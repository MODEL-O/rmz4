; undefined FUN_080f61c0(void)
; entry 0x80f61c0  size 50 bytes

080F61C0: 10b5         push {r4,lr}
080F61C2: 041c         add r4,r0,#0x0
080F61C4: 0b49         ldr r1,[0x080f61f4]
080F61C6: 207c         ldrb r0,[r4,#0x10]
080F61C8: 8000         lsl r0,r0,#0x2
080F61CA: 4018         add r0,r0,r1
080F61CC: 0168         ldr r1,[r0,#0x0]
080F61CE: 201c         add r0,r4,#0x0
080F61D0: 32f0d6fe     bl 0x08128f80
080F61D4: 0849         ldr r1,[0x080f61f8]
080F61D6: 607a         ldrb r0,[r4,#0x9]
080F61D8: 8000         lsl r0,r0,#0x2
080F61DA: 4018         add r0,r0,r1
080F61DC: 0121         mov r1,#0x1
080F61DE: e160         str r1,[r4,#0xc]
080F61E0: 0068         ldr r0,[r0,#0x0]
080F61E2: 4068         ldr r0,[r0,#0x4]
080F61E4: 6061         str r0,[r4,#0x14]
080F61E6: 201c         add r0,r4,#0x0
080F61E8: 00f008f8     bl 0x080f61fc
080F61EC: 10bc         pop {r4}
080F61EE: 01bc         pop {r0}
080F61F0: 0047         bx r0
