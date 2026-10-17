; undefined FUN_080f74c4(void)
; entry 0x80f74c4  size 66 bytes

080F74C4: 10b5         push {r4,lr}
080F74C6: 041c         add r4,r0,#0x0
080F74C8: a06a         ldr r0,[r4,#0x28]
080F74CA: 836a         ldr r3,[r0,#0x28]
080F74CC: 201c         add r0,r4,#0x0
080F74CE: b830         add r0,#0xb8
080F74D0: 0268         ldr r2,[r0,#0x0]
080F74D2: 002a         cmp r2,#0x0
080F74D4: 0ad0         beq 0x080f74ec
080F74D6: 101c         add r0,r2,#0x0
080F74D8: 8c30         add r0,#0x8c
080F74DA: 0068         ldr r0,[r0,#0x0]
080F74DC: 8021         mov r1,#0x80
080F74DE: 0901         lsl r1,r1,#0x4
080F74E0: 0840         and r0,r1
080F74E2: 0028         cmp r0,#0x0
080F74E4: 00d0         beq 0x080f74e8
080F74E6: 0022         mov r2,#0x0
080F74E8: 002a         cmp r2,#0x0
080F74EA: 06d1         bne 0x080f74fa
080F74EC: 221c         add r2,r4,#0x0
080F74EE: 5432         add r2,#0x54
080F74F0: 181c         add r0,r3,#0x0
080F74F2: 211c         add r1,r4,#0x0
080F74F4: a6f77cfe     bl 0x0809e1f0
080F74F8: 021c         add r2,r0,#0x0
080F74FA: 201c         add r0,r4,#0x0
080F74FC: b830         add r0,#0xb8
080F74FE: 0260         str r2,[r0,#0x0]
080F7500: 10bc         pop {r4}
080F7502: 01bc         pop {r0}
080F7504: 0047         bx r0
