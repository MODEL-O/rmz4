; undefined FUN_080732b0(void)
; entry 0x80732b0  size 30 bytes

080732B0: 10b5         push {r4,lr}
080732B2: 041c         add r4,r0,#0x0
080732B4: 00f08afc     bl 0x08073bcc
080732B8: 0549         ldr r1,[0x080732d0]
080732BA: 607b         ldrb r0,[r4,#0xd]
080732BC: 8000         lsl r0,r0,#0x2
080732BE: 4018         add r0,r0,r1
080732C0: 0168         ldr r1,[r0,#0x0]
080732C2: 201c         add r0,r4,#0x0
080732C4: b5f05cfe     bl 0x08128f80
080732C8: 10bc         pop {r4}
080732CA: 01bc         pop {r0}
080732CC: 0047         bx r0
