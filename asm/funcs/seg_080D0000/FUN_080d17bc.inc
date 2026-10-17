@ FUN_080d17bc  entry 0x080d17bc  size 62
.thumb
.org 0xd17bc
FUN_080d17bc:
	push {r4, lr}	@ 000d17bc 10b5
.org 0xd17be
	lsls r0, r0, #24	@ 000d17be 0006
.org 0xd17c0
	lsrs r4, r0, #24	@ 000d17c0 040e
.org 0xd17c2
	ldr r0, [pc, #56]	@ 000d17c2 0e48
.org 0xd17c4
	ldr r0, [r0, #0]	@ 000d17c4 0068
.org 0xd17c6
	bl 0x5500	@ 000d17c6 33f79bfe
.org 0xd17ca
	adds r3, r0, #0	@ 000d17ca 031c
.org 0xd17cc
	cmp r3, #0	@ 000d17cc 002b
.org 0xd17ce
	beq.n 0xd17f2	@ 000d17ce 10d0
.org 0xd17d0
	adds r1, r3, #0	@ 000d17d0 191c
.org 0xd17d2
	adds r1, #37	@ 000d17d2 2531
.org 0xd17d4
	movs r2, #0	@ 000d17d4 0022
.org 0xd17d6
	movs r0, #1	@ 000d17d6 0120
.org 0xd17d8
	strb r0, [r1, #0]	@ 000d17d8 0870
.org 0xd17da
	ldr r1, [pc, #36]	@ 000d17da 0949
.org 0xd17dc
	movs r0, #3	@ 000d17dc 0320
.org 0xd17de
	strb r0, [r3, #9]	@ 000d17de 5872
.org 0xd17e0
	ldr r0, [r1, #12]	@ 000d17e0 c868
.org 0xd17e2
	ldr r0, [r0, #0]	@ 000d17e2 0068
.org 0xd17e4
	str r0, [r3, #20]	@ 000d17e4 5861
.org 0xd17e6
	movs r0, #0	@ 000d17e6 0020
.org 0xd17e8
	strh r2, [r3, #32]	@ 000d17e8 1a84
.org 0xd17ea
	adds r1, r3, #0	@ 000d17ea 191c
.org 0xd17ec
	adds r1, #34	@ 000d17ec 2231
.org 0xd17ee
	strb r0, [r1, #0]	@ 000d17ee 0870
.org 0xd17f0
	strb r4, [r3, #16]	@ 000d17f0 1c74
.org 0xd17f2
	adds r0, r3, #0	@ 000d17f2 181c
.org 0xd17f4
	pop {r4}	@ 000d17f4 10bc
.org 0xd17f6
	pop {r1}	@ 000d17f6 02bc
.org 0xd17f8
	bx r1	@ 000d17f8 0847
