@ FUN_080027b8  entry 0x080027b8  size 98
.thumb
.org 0x27b8
FUN_080027b8:
	push {r4, r5, r6, r7, lr}	@ 000027b8 f0b5
.org 0x27ba
	mov r7, r9	@ 000027ba 4f46
.org 0x27bc
	mov r6, r8	@ 000027bc 4646
.org 0x27be
	push {r6, r7}	@ 000027be c0b4
.org 0x27c0
	ldr r4, [sp, #28]	@ 000027c0 079c
.org 0x27c2
	lsls r2, r2, #24	@ 000027c2 1206
.org 0x27c4
	lsls r4, r4, #24	@ 000027c4 2406
.org 0x27c6
	asrs r4, r4, #19	@ 000027c6 e414
.org 0x27c8
	lsls r3, r3, #24	@ 000027c8 1b06
.org 0x27ca
	asrs r3, r3, #24	@ 000027ca 1b16
.org 0x27cc
	adds r4, r4, r3	@ 000027cc e418
.org 0x27ce
	lsls r4, r4, #1	@ 000027ce 6400
.org 0x27d0
	adds r7, r0, r4	@ 000027d0 0719
.org 0x27d2
	lsrs r2, r2, #22	@ 000027d2 920d
.org 0x27d4
	adds r0, r2, r1	@ 000027d4 5018
.org 0x27d6
	ldr r0, [r0, #0]	@ 000027d6 0068
.org 0x27d8
	adds r1, r1, r0	@ 000027d8 0918
.org 0x27da
	adds r1, r1, r2	@ 000027da 8918
.org 0x27dc
	ldrh r0, [r1, #4]	@ 000027dc 8888
.org 0x27de
	ldrh r4, [r1, #6]	@ 000027de cc88
.org 0x27e0
	adds r5, r1, #0	@ 000027e0 0d1c
.org 0x27e2
	adds r5, #8	@ 000027e2 0835
.org 0x27e4
	cmp r4, #0	@ 000027e4 002c
.org 0x27e6
	beq.n 0x280e	@ 000027e6 12d0
.org 0x27e8
	lsls r6, r0, #1	@ 000027e8 4600
.org 0x27ea
	lsrs r0, r6, #1	@ 000027ea 7008
.org 0x27ec
	mov r8, r0	@ 000027ec 8046
.org 0x27ee
	ldr r3, [pc, #44]	@ 000027ee 0b4b
.org 0x27f0
	mov r9, r3	@ 000027f0 9946
.org 0x27f2
	adds r0, r5, #0	@ 000027f2 281c
.org 0x27f4
	adds r1, r7, #0	@ 000027f4 391c
.org 0x27f6
	mov r2, r8	@ 000027f6 4246
.org 0x27f8
	mov r3, r9	@ 000027f8 4b46
.org 0x27fa
	ands r2, r3	@ 000027fa 1a40
.org 0x27fc
	bl 0x128be4	@ 000027fc 26f1f2f9
.org 0x2800
	subs r0, r4, #1	@ 00002800 601e
.org 0x2802
	lsls r0, r0, #16	@ 00002802 0004
.org 0x2804
	lsrs r4, r0, #16	@ 00002804 040c
.org 0x2806
	adds r5, r5, r6	@ 00002806 ad19
.org 0x2808
	adds r7, #64	@ 00002808 4037
.org 0x280a
	cmp r4, #0	@ 0000280a 002c
.org 0x280c
	bne.n 0x27f2	@ 0000280c f1d1
.org 0x280e
	pop {r3, r4}	@ 0000280e 18bc
.org 0x2810
	mov r8, r3	@ 00002810 9846
.org 0x2812
	mov r9, r4	@ 00002812 a146
.org 0x2814
	pop {r4, r5, r6, r7}	@ 00002814 f0bc
.org 0x2816
	pop {r0}	@ 00002816 01bc
.org 0x2818
	bx r0	@ 00002818 0047
