@ FUN_080284bc  entry 0x080284bc  size 80
.thumb
.org 0x284bc
FUN_080284bc:
	push {r4, r5, lr}	@ 000284bc 30b5
.org 0x284be
	ldr r0, [r0, #12]	@ 000284be c068
.org 0x284c0
	movs r1, #4	@ 000284c0 0421
.org 0x284c2
	ldrsh r4, [r0, r1]	@ 000284c2 445e
.org 0x284c4
	lsls r5, r4, #2	@ 000284c4 a500
.org 0x284c6
	adds r5, r5, r4	@ 000284c6 2d19
.org 0x284c8
	lsls r5, r5, #2	@ 000284c8 ad00
.org 0x284ca
	ldr r2, [pc, #64]	@ 000284ca 104a
.org 0x284cc
	adds r0, r5, r2	@ 000284cc a818
.org 0x284ce
	ldr r1, [pc, #64]	@ 000284ce 1049
.org 0x284d0
	lsls r4, r4, #1	@ 000284d0 6400
.org 0x284d2
	adds r1, r4, r1	@ 000284d2 6118
.org 0x284d4
	ldrh r1, [r1, #0]	@ 000284d4 0988
.org 0x284d6
	ldrh r2, [r0, #6]	@ 000284d6 c288
.org 0x284d8
	lsrs r2, r2, #6	@ 000284d8 9209
.org 0x284da
	subs r1, r1, r2	@ 000284da 891a
.org 0x284dc
	lsls r1, r1, #5	@ 000284dc 4901
.org 0x284de
	movs r2, #128	@ 000284de 8022
.org 0x284e0
	lsls r2, r2, #9	@ 000284e0 5202
.org 0x284e2
	adds r1, r1, r2	@ 000284e2 8918
.org 0x284e4
	bl 0x1d30	@ 000284e4 d9f724fc
.org 0x284e8
	ldr r0, [pc, #40]	@ 000284e8 0a48
.org 0x284ea
	adds r5, r5, r0	@ 000284ea 2d18
.org 0x284ec
	ldr r0, [pc, #40]	@ 000284ec 0a48
.org 0x284ee
	adds r4, r4, r0	@ 000284ee 2418
.org 0x284f0
	ldrh r1, [r4, #0]	@ 000284f0 2188
.org 0x284f2
	ldrb r0, [r5, #7]	@ 000284f2 e879
.org 0x284f4
	subs r1, r1, r0	@ 000284f4 091a
.org 0x284f6
	lsls r1, r1, #5	@ 000284f6 4901
.org 0x284f8
	movs r2, #128	@ 000284f8 8022
.org 0x284fa
	lsls r2, r2, #2	@ 000284fa 9200
.org 0x284fc
	adds r1, r1, r2	@ 000284fc 8918
.org 0x284fe
	adds r0, r5, #0	@ 000284fe 281c
.org 0x28500
	bl 0x2208	@ 00028500 d9f782fe
.org 0x28504
	movs r0, #0	@ 00028504 0020
.org 0x28506
	pop {r4, r5}	@ 00028506 30bc
.org 0x28508
	pop {r1}	@ 00028508 02bc
.org 0x2850a
	bx r1	@ 0002850a 0847
