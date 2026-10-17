@ FUN_080de19c  entry 0x080de19c  size 102
.thumb
.org 0xde19c
FUN_080de19c:
	push {r4, r5, r6, lr}	@ 000de19c 70b5
.org 0xde19e
	mov r6, r8	@ 000de19e 4646
.org 0xde1a0
	push {r6}	@ 000de1a0 40b4
.org 0xde1a2
	adds r6, r0, #0	@ 000de1a2 061c
.org 0xde1a4
	movs r0, #84	@ 000de1a4 5420
.org 0xde1a6
	adds r0, r0, r6	@ 000de1a6 8019
.org 0xde1a8
	mov r8, r0	@ 000de1a8 8046
.org 0xde1aa
	ldr r5, [pc, #88]	@ 000de1aa 164d
.org 0xde1ac
	ldrb r0, [r6, #10]	@ 000de1ac b07a
.org 0xde1ae
	movs r4, #16	@ 000de1ae 1024
.org 0xde1b0
	adds r3, r4, #0	@ 000de1b0 231c
.org 0xde1b2
	ands r3, r0	@ 000de1b2 0340
.org 0xde1b4
	lsls r3, r3, #24	@ 000de1b4 1b06
.org 0xde1b6
	lsrs r3, r3, #24	@ 000de1b6 1b0e
.org 0xde1b8
	mov r0, r8	@ 000de1b8 4046
.org 0xde1ba
	adds r1, r5, #0	@ 000de1ba 291c
.org 0xde1bc
	movs r2, #0	@ 000de1bc 0022
.org 0xde1be
	bl 0xd4c8c	@ 000de1be f6f765fd
.org 0xde1c2
	adds r5, #28	@ 000de1c2 1c35
.org 0xde1c4
	ldrb r0, [r6, #10]	@ 000de1c4 b07a
.org 0xde1c6
	ands r4, r0	@ 000de1c6 0440
.org 0xde1c8
	lsls r4, r4, #24	@ 000de1c8 2406
.org 0xde1ca
	lsrs r4, r4, #24	@ 000de1ca 240e
.org 0xde1cc
	mov r0, r8	@ 000de1cc 4046
.org 0xde1ce
	adds r1, r5, #0	@ 000de1ce 291c
.org 0xde1d0
	movs r2, #0	@ 000de1d0 0022
.org 0xde1d2
	adds r3, r4, #0	@ 000de1d2 231c
.org 0xde1d4
	bl 0xd4c8c	@ 000de1d4 f6f75afd
.org 0xde1d8
	movs r0, #1	@ 000de1d8 0120
.org 0xde1da
	mov r1, r8	@ 000de1da 4146
.org 0xde1dc
	bl 0xd0c88	@ 000de1dc f2f754fd
.org 0xde1e0
	movs r0, #42	@ 000de1e0 2a20
.org 0xde1e2
	bl 0x2b10	@ 000de1e2 24f795fc
.org 0xde1e6
	ldr r1, [pc, #32]	@ 000de1e6 0849
.org 0xde1e8
	ldrb r0, [r6, #9]	@ 000de1e8 707a
.org 0xde1ea
	lsls r0, r0, #2	@ 000de1ea 8000
.org 0xde1ec
	adds r0, r0, r1	@ 000de1ec 4018
.org 0xde1ee
	movs r1, #4	@ 000de1ee 0421
.org 0xde1f0
	str r1, [r6, #12]	@ 000de1f0 f160
.org 0xde1f2
	ldr r0, [r0, #0]	@ 000de1f2 0068
.org 0xde1f4
	ldr r0, [r0, #16]	@ 000de1f4 0069
.org 0xde1f6
	str r0, [r6, #20]	@ 000de1f6 7061
.org 0xde1f8
	pop {r3}	@ 000de1f8 08bc
.org 0xde1fa
	mov r8, r3	@ 000de1fa 9846
.org 0xde1fc
	pop {r4, r5, r6}	@ 000de1fc 70bc
.org 0xde1fe
	pop {r0}	@ 000de1fe 01bc
.org 0xde200
	bx r0	@ 000de200 0047
