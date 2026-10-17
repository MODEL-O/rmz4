; undefined FUN_081091c8(void)
; entry 0x81091c8  size 50 bytes

081091C8: 70b5         push {r4,r5,r6,lr}
081091CA: 061c         add r6,r0,#0x0
081091CC: 0b48         ldr r0,[0x081091fc]
081091CE: 0468         ldr r4,[r0,#0x0]
081091D0: 201c         add r0,r4,#0x0
081091D2: fcf677f9     bl 0x080054c4
081091D6: e068         ldr r0,[r4,#0xc]
081091D8: 4068         ldr r0,[r0,#0x4]
081091DA: e060         str r0,[r4,#0xc]
081091DC: 211c         add r1,r4,#0x0
081091DE: 1431         add r1,#0x14
081091E0: 8842         cmp r0,r1
081091E2: 07d0         beq 0x081091f4
081091E4: 0d1c         add r5,r1,#0x0
081091E6: 1ff0d5fe     bl 0x08128f94
081091EA: e068         ldr r0,[r4,#0xc]
081091EC: 4068         ldr r0,[r0,#0x4]
081091EE: e060         str r0,[r4,#0xc]
081091F0: a842         cmp r0,r5
081091F2: f8d1         bne 0x081091e6
081091F4: 70bc         pop {r4,r5,r6}
081091F6: 01bc         pop {r0}
081091F8: 0047         bx r0
