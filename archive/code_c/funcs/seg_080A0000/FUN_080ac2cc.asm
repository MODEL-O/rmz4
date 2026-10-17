; undefined FUN_080ac2cc(void)
; entry 0x80ac2cc  size 44 bytes

080AC2CC: 10b5         push {r4,lr}
080AC2CE: 041c         add r4,r0,#0x0
080AC2D0: 7430         add r0,#0x74
080AC2D2: 0949         ldr r1,[0x080ac2f8]
080AC2D4: 59f756fa     bl 0x08005784
080AC2D8: 231c         add r3,r4,#0x0
080AC2DA: b433         add r3,#0xb4
080AC2DC: 0748         ldr r0,[0x080ac2fc]
080AC2DE: 0268         ldr r2,[r0,#0x0]
080AC2E0: 506d         ldr r0,[r2,#0x54]
080AC2E2: 616d         ldr r1,[r4,#0x54]
080AC2E4: 401a         sub r0,r0,r1
080AC2E6: 1860         str r0,[r3,#0x0]
080AC2E8: 0433         add r3,#0x4
080AC2EA: 906d         ldr r0,[r2,#0x58]
080AC2EC: a16d         ldr r1,[r4,#0x58]
080AC2EE: 401a         sub r0,r0,r1
080AC2F0: 1860         str r0,[r3,#0x0]
080AC2F2: 10bc         pop {r4}
080AC2F4: 01bc         pop {r0}
080AC2F6: 0047         bx r0
