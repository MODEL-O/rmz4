@ FUN_080016ac  entry 0x080016ac  size 62
.thumb
.org 0x16ac
FUN_080016ac:
	push {r4, r5, lr}	@ 000016ac 30b5
.org 0x16ae
	adds r5, r1, #0	@ 000016ae 0d1c
.org 0x16b0
	adds r4, r2, #0	@ 000016b0 141c
.org 0x16b2
	lsls r0, r0, #24	@ 000016b2 0006
.org 0x16b4
	lsrs r0, r0, #24	@ 000016b4 000e
.org 0x16b6
	adds r2, r0, #0	@ 000016b6 021c
.org 0x16b8
	cmp r2, #5	@ 000016b8 052a
.org 0x16ba
	bhi.n 0x16e4	@ 000016ba 13d8
.org 0x16bc
	ldr r3, [pc, #32]	@ 000016bc 084b
.org 0x16be
	ldrb r1, [r3, #0]	@ 000016be 1978
.org 0x16c0
	cmp r1, #0	@ 000016c0 0029
.org 0x16c2
	bne.n 0x16e4	@ 000016c2 0fd1
.org 0x16c4
	movs r0, #166	@ 000016c4 a620
.org 0x16c6
	lsls r0, r0, #2	@ 000016c6 8000
.org 0x16c8
	cmp r4, r0	@ 000016c8 8442
.org 0x16ca
	bhi.n 0x16e4	@ 000016ca 0bd8
.org 0x16cc
	strb r2, [r3, #1]	@ 000016cc 5a70
.org 0x16ce
	str r5, [r3, #8]	@ 000016ce 9d60
.org 0x16d0
	str r4, [r3, #20]	@ 000016d0 5c61
.org 0x16d2
	strh r1, [r3, #28]	@ 000016d2 9983
.org 0x16d4
	movs r0, #2	@ 000016d4 0220
.org 0x16d6
	strb r0, [r3, #0]	@ 000016d6 1870
.org 0x16d8
	movs r0, #1	@ 000016d8 0120
.org 0x16da
	strh r0, [r3, #2]	@ 000016da 5880
.org 0x16dc
	movs r0, #0	@ 000016dc 0020
.org 0x16de
	b.n 0x16e8	@ 000016de 03e0
.org 0x16e0
	.byte 0x90,0x07,0x00,0x02	@ 000016e0 data
.org 0x16e4
	movs r0, #1	@ 000016e4 0120
.org 0x16e6
	negs r0, r0	@ 000016e6 4042
.org 0x16e8
	pop {r4, r5}	@ 000016e8 30bc
