@ FUN_080747b0  entry 0x080747b0  size 172
.thumb
.org 0x747b0
FUN_080747b0:
	push {r4, r5, r6, r7, lr}	@ 000747b0 f0b5
.org 0x747b2
	mov r7, r8	@ 000747b2 4746
.org 0x747b4
	push {r7}	@ 000747b4 80b4
.org 0x747b6
	adds r4, r0, #0	@ 000747b6 041c
.org 0x747b8
	ldrb r0, [r4, #14]	@ 000747b8 a07b
.org 0x747ba
	cmp r0, #0	@ 000747ba 0028
.org 0x747bc
	bne.n 0x747fe	@ 000747bc 1fd1
.org 0x747be
	ldr r1, [pc, #28]	@ 000747be 0749
.org 0x747c0
	adds r0, r4, #0	@ 000747c0 201c
.org 0x747c2
	bl 0x1cf00	@ 000747c2 a8f79dfb
.org 0x747c6
	adds r1, r4, #0	@ 000747c6 211c
.org 0x747c8
	adds r1, #180	@ 000747c8 b431
.org 0x747ca
	adds r0, r4, #0	@ 000747ca 201c
.org 0x747cc
	adds r0, #226	@ 000747cc e230
.org 0x747ce
	ldrb r0, [r0, #0]	@ 000747ce 0078
.org 0x747d0
	cmp r0, #0	@ 000747d0 0028
.org 0x747d2
	bne.n 0x747e0	@ 000747d2 05d1
.org 0x747d4
	movs r0, #128	@ 000747d4 8020
.org 0x747d6
	lsls r0, r0, #2	@ 000747d6 8000
.org 0x747d8
	b.n 0x747e4	@ 000747d8 04e0
.org 0x747da
	.byte 0x00	@ 000747da data
.org 0x747db
	.byte 0x00	@ 000747db data
.org 0x747dc
	.byte 0x01,0x93,0x00,0x00	@ 000747dc data
.org 0x747e0
	movs r0, #254	@ 000747e0 fe20
.org 0x747e2
	lsls r0, r0, #8	@ 000747e2 0002
.org 0x747e4
	strh r0, [r1, #20]	@ 000747e4 8882
.org 0x747e6
	strh r0, [r1, #22]	@ 000747e6 c882
.org 0x747e8
	adds r1, r4, #0	@ 000747e8 211c
.org 0x747ea
	adds r1, #180	@ 000747ea b431
.org 0x747ec
	movs r2, #0	@ 000747ec 0022
.org 0x747ee
	movs r0, #0	@ 000747ee 0020
.org 0x747f0
	strh r0, [r1, #40]	@ 000747f0 0885
.org 0x747f2
	ldrh r0, [r1, #20]	@ 000747f2 888a
.org 0x747f4
	strh r0, [r1, #22]	@ 000747f4 c882
.org 0x747f6
	strb r2, [r4, #15]	@ 000747f6 e273
.org 0x747f8
	ldrb r0, [r4, #14]	@ 000747f8 a07b
.org 0x747fa
	adds r0, #1	@ 000747fa 0130
.org 0x747fc
	strb r0, [r4, #14]	@ 000747fc a073
.org 0x747fe
	adds r2, r4, #0	@ 000747fe 221c
.org 0x74800
	adds r2, #180	@ 00074800 b432
.org 0x74802
	ldr r1, [pc, #80]	@ 00074802 1449
.org 0x74804
	adds r3, r4, #0	@ 00074804 231c
.org 0x74806
	adds r3, #224	@ 00074806 e033
.org 0x74808
	ldrb r0, [r3, #0]	@ 00074808 1878
.org 0x7480a
	lsls r0, r0, #1	@ 0007480a 4000
.org 0x7480c
	adds r0, r0, r1	@ 0007480c 4018
.org 0x7480e
	movs r5, #0	@ 0007480e 0025
.org 0x74810
	ldrsh r1, [r0, r5]	@ 00074810 415f
.org 0x74812
	lsls r1, r1, #2	@ 00074812 8900
.org 0x74814
	ldr r0, [r2, #4]	@ 00074814 5068
.org 0x74816
	adds r0, r0, r1	@ 00074816 4018
.org 0x74818
	str r0, [r4, #88]	@ 00074818 a065
.org 0x7481a
	ldrb r0, [r3, #0]	@ 0007481a 1878
.org 0x7481c
	adds r0, #1	@ 0007481c 0130
.org 0x7481e
	strb r0, [r3, #0]	@ 0007481e 1870
.org 0x74820
	adds r1, r4, #0	@ 00074820 211c
.org 0x74822
	adds r1, #225	@ 00074822 e131
.org 0x74824
	ldrb r6, [r1, #0]	@ 00074824 0e78
.org 0x74826
	adds r3, r6, #1	@ 00074826 731c
.org 0x74828
	movs r0, #1	@ 00074828 0120
.org 0x7482a
	ands r3, r0	@ 0007482a 0340
.org 0x7482c
	ldrh r0, [r2, #20]	@ 0007482c 908a
.org 0x7482e
	ldrh r5, [r2, #16]	@ 0007482e 158a
.org 0x74830
	adds r0, r0, r5	@ 00074830 4019
.org 0x74832
	strh r0, [r2, #16]	@ 00074832 1082
.org 0x74834
	ldrh r0, [r2, #22]	@ 00074834 d08a
.org 0x74836
	ldrh r5, [r2, #18]	@ 00074836 558a
.org 0x74838
	adds r0, r0, r5	@ 00074838 4019
.org 0x7483a
	strh r0, [r2, #18]	@ 0007483a 5082
.org 0x7483c
	ldrb r0, [r4, #15]	@ 0007483c e07b
.org 0x7483e
	adds r5, r2, #0	@ 0007483e 151c
.org 0x74840
	mov r8, r1	@ 00074840 8846
.org 0x74842
	cmp r0, #4	@ 00074842 0428
.org 0x74844
	bls.n 0x74848	@ 00074844 00d9
.org 0x74846
	b.n 0x74a4e	@ 00074846 02e1
.org 0x74848
	lsls r0, r0, #2	@ 00074848 8000
.org 0x7484a
	ldr r1, [pc, #12]	@ 0007484a 0349
.org 0x7484c
	adds r0, r0, r1	@ 0007484c 4018
.org 0x7484e
	ldr r0, [r0, #0]	@ 0007484e 0068
.org 0x74850
	mov pc, r0	@ 00074850 8746
.org 0x74852
	.byte 0x00	@ 00074852 data
.org 0x74853
	.byte 0x00	@ 00074853 data
.org 0x74854
	.byte 0x0c,0x93,0x12,0x08	@ 00074854 data
.org 0x74858
	.byte 0x5c,0x48,0x07,0x08	@ 00074858 data
