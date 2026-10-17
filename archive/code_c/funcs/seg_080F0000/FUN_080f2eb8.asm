; undefined FUN_080f2eb8(void)
; entry 0x80f2eb8  size 40 bytes

080F2EB8: f0b5         push {r4,r5,r6,r7,lr}
080F2EBA: 4f46         mov r7,r9
080F2EBC: 4646         mov r6,r8
080F2EBE: c0b4         push {r6,r7}
080F2EC0: 061c         add r6,r0,#0x0
080F2EC2: 707b         ldrb r0,[r6,#0xd]
080F2EC4: 2228         cmp r0,#0x22
080F2EC6: 00d9         bls 0x080f2eca
080F2EC8: 74e3         b 0x080f35b4
080F2ECA: 8000         lsl r0,r0,#0x2
080F2ECC: 0149         ldr r1,[0x080f2ed4]
080F2ECE: 4018         add r0,r0,r1
080F2ED0: 0068         ldr r0,[r0,#0x0]
080F2ED2: 8746         mov pc,r0
080F35B4: 18bc         pop {r3,r4}
080F35B6: 9846         mov r8,r3
080F35B8: a146         mov r9,r4
080F35BA: f0bc         pop {r4,r5,r6,r7}
080F35BC: 01bc         pop {r0}
080F35BE: 0047         bx r0
