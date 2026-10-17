@ FUN_080545b4  entry 0x080545b4  size 110
.thumb
.org 0x545b4
FUN_080545b4:
	push {r4, lr}	@ 000545b4 10b5
.org 0x545b6
	adds r4, r0, #0	@ 000545b6 041c
.org 0x545b8
	ldrb r0, [r4, #15]	@ 000545b8 e07b
.org 0x545ba
	cmp r0, #0	@ 000545ba 0028
.org 0x545bc
	bne.n 0x545f0	@ 000545bc 18d1
.org 0x545be
	adds r1, r4, #0	@ 000545be 211c
.org 0x545c0
	adds r1, #196	@ 000545c0 c431
.org 0x545c2
	ldr r0, [r1, #0]	@ 000545c2 0868
.org 0x545c4
	adds r0, #184	@ 000545c4 b830
.org 0x545c6
	movs r3, #8	@ 000545c6 0823
.org 0x545c8
	strb r3, [r0, #0]	@ 000545c8 0370
.org 0x545ca
	ldr r0, [r1, #0]	@ 000545ca 0868
.org 0x545cc
	adds r0, #188	@ 000545cc bc30
.org 0x545ce
	movs r2, #32	@ 000545ce 2022
.org 0x545d0
	strh r2, [r0, #0]	@ 000545d0 0280
.org 0x545d2
	adds r1, #4	@ 000545d2 0431
.org 0x545d4
	ldr r0, [r1, #0]	@ 000545d4 0868
.org 0x545d6
	adds r0, #184	@ 000545d6 b830
.org 0x545d8
	strb r3, [r0, #0]	@ 000545d8 0370
.org 0x545da
	ldr r0, [r1, #0]	@ 000545da 0868
.org 0x545dc
	adds r0, #188	@ 000545dc bc30
.org 0x545de
	strh r2, [r0, #0]	@ 000545de 0280
.org 0x545e0
	movs r1, #176	@ 000545e0 b021
.org 0x545e2
	lsls r1, r1, #6	@ 000545e2 8901
.org 0x545e4
	adds r0, r4, #0	@ 000545e4 201c
.org 0x545e6
	bl 0x1cf00	@ 000545e6 c8f78bfc
.org 0x545ea
	ldrb r0, [r4, #15]	@ 000545ea e07b
.org 0x545ec
	adds r0, #1	@ 000545ec 0130
.org 0x545ee
	strb r0, [r4, #15]	@ 000545ee e073
.org 0x545f0
	adds r0, r4, #0	@ 000545f0 201c
.org 0x545f2
	bl 0x1cff0	@ 000545f2 c8f7fdfc
.org 0x545f6
	adds r0, r4, #0	@ 000545f6 201c
.org 0x545f8
	adds r0, #196	@ 000545f8 c430
.org 0x545fa
	ldr r0, [r0, #0]	@ 000545fa 0068
.org 0x545fc
	adds r0, #188	@ 000545fc bc30
.org 0x545fe
	movs r1, #0	@ 000545fe 0021
.org 0x54600
	ldrsh r0, [r0, r1]	@ 00054600 405e
.org 0x54602
	cmp r0, #0	@ 00054602 0028
.org 0x54604
	bne.n 0x5461c	@ 00054604 0ad1
.org 0x54606
	adds r0, r4, #0	@ 00054606 201c
.org 0x54608
	adds r0, #200	@ 00054608 c830
.org 0x5460a
	ldr r0, [r0, #0]	@ 0005460a 0068
.org 0x5460c
	adds r0, #188	@ 0005460c bc30
.org 0x5460e
	movs r2, #0	@ 0005460e 0022
.org 0x54610
	ldrsh r1, [r0, r2]	@ 00054610 815e
.org 0x54612
	cmp r1, #0	@ 00054612 0029
.org 0x54614
	bne.n 0x5461c	@ 00054614 02d1
.org 0x54616
	movs r0, #1	@ 00054616 0120
.org 0x54618
	strb r0, [r4, #14]	@ 00054618 a073
.org 0x5461a
	strb r1, [r4, #15]	@ 0005461a e173
.org 0x5461c
	pop {r4}	@ 0005461c 10bc
.org 0x5461e
	pop {r0}	@ 0005461e 01bc
.org 0x54620
	bx r0	@ 00054620 0047
