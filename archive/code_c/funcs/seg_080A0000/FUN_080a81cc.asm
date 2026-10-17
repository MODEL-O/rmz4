; undefined FUN_080a81cc(void)
; entry 0x80a81cc  size 48 bytes

080A81CC: f0b5         push {r4,r5,r6,r7,lr}
080A81CE: 4f46         mov r7,r9
080A81D0: 4646         mov r6,r8
080A81D2: c0b4         push {r6,r7}
080A81D4: 071c         add r7,r0,#0x0
080A81D6: bc6a         ldr r4,[r7,#0x28]
080A81D8: b87b         ldrb r0,[r7,#0xe]
080A81DA: 0628         cmp r0,#0x6
080A81DC: 00d9         bls 0x080a81e0
080A81DE: 91e1         b 0x080a8504
080A81E0: 8000         lsl r0,r0,#0x2
080A81E2: 0249         ldr r1,[0x080a81ec]
080A81E4: 4018         add r0,r0,r1
080A81E6: 0068         ldr r0,[r0,#0x0]
080A81E8: 8746         mov pc,r0
080A8504: 381c         add r0,r7,#0x0
080A8506: 74f773fd     bl 0x0801cff0
080A850A: 18bc         pop {r3,r4}
080A850C: 9846         mov r8,r3
080A850E: a146         mov r9,r4
080A8510: f0bc         pop {r4,r5,r6,r7}
080A8512: 01bc         pop {r0}
080A8514: 0047         bx r0
