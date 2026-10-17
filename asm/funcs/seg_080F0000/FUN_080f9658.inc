@ FUN_080f9658  entry 0x080f9658  size 192
.thumb
.org 0xf9658
FUN_080f9658:
	push {r4, r5, r6, r7, lr}	@ 000f9658 f0b5
.org 0xf965a
	sub sp, #12	@ 000f965a 83b0
.org 0xf965c
	adds r7, r0, #0	@ 000f965c 071c
.org 0xf965e
	mov r1, sp	@ 000f965e 6946
.org 0xf9660
	ldr r0, [pc, #180]	@ 000f9660 2d48
.org 0xf9662
	ldmia r0!, {r2, r3, r4}	@ 000f9662 1cc8
.org 0xf9664
	stmia r1!, {r2, r3, r4}	@ 000f9664 1cc1
.org 0xf9666
	adds r0, r7, #0	@ 000f9666 381c
.org 0xf9668
	adds r0, #180	@ 000f9668 b430
.org 0xf966a
	ldrb r1, [r0, #0]	@ 000f966a 0178
.org 0xf966c
	ldrb r0, [r7, #15]	@ 000f966c f87b
.org 0xf966e
	cmp r0, #0	@ 000f966e 0028
.org 0xf9670
	bne.n 0xf9688	@ 000f9670 0ad1
.org 0xf9672
	lsls r0, r1, #2	@ 000f9672 8800
.org 0xf9674
	add r0, sp	@ 000f9674 6844
.org 0xf9676
	ldrh r1, [r0, #0]	@ 000f9676 0188
.org 0xf9678
	adds r0, r7, #0	@ 000f9678 381c
.org 0xf967a
	bl 0x1cf00	@ 000f967a 23f741fc
.org 0xf967e
	movs r0, #128	@ 000f967e 8020
.org 0xf9680
	strb r0, [r7, #18]	@ 000f9680 b874
.org 0xf9682
	ldrb r0, [r7, #15]	@ 000f9682 f87b
.org 0xf9684
	adds r0, #1	@ 000f9684 0130
.org 0xf9686
	strb r0, [r7, #15]	@ 000f9686 f873
.org 0xf9688
	adds r0, r7, #0	@ 000f9688 381c
.org 0xf968a
	bl 0x1cff0	@ 000f968a 23f7b1fc
.org 0xf968e
	adds r0, r7, #0	@ 000f968e 381c
.org 0xf9690
	adds r0, #116	@ 000f9690 7430
.org 0xf9692
	ldr r4, [pc, #136]	@ 000f9692 224c
.org 0xf9694
	ldr r2, [pc, #136]	@ 000f9694 224a
.org 0xf9696
	ldrb r3, [r7, #30]	@ 000f9696 bb7f
.org 0xf9698
	lsls r3, r3, #8	@ 000f9698 1b02
.org 0xf969a
	adds r1, r7, #0	@ 000f969a 391c
.org 0xf969c
	adds r1, #112	@ 000f969c 7031
.org 0xf969e
	ldrb r1, [r1, #0]	@ 000f969e 0978
.org 0xf96a0
	orrs r3, r1	@ 000f96a0 0b43
.org 0xf96a2
	ldr r5, [pc, #128]	@ 000f96a2 204d
.org 0xf96a4
	adds r1, r3, r5	@ 000f96a4 5919
.org 0xf96a6
	lsls r1, r1, #1	@ 000f96a6 4900
.org 0xf96a8
	adds r1, r1, r2	@ 000f96a8 8918
.org 0xf96aa
	ldrh r1, [r1, #0]	@ 000f96aa 0988
.org 0xf96ac
	lsls r1, r1, #2	@ 000f96ac 8900
.org 0xf96ae
	adds r1, r1, r4	@ 000f96ae 0919
.org 0xf96b0
	adds r2, r7, #0	@ 000f96b0 3a1c
.org 0xf96b2
	adds r2, #113	@ 000f96b2 7132
.org 0xf96b4
	movs r6, #0	@ 000f96b4 0026
.org 0xf96b6
	ldrsb r6, [r2, r6]	@ 000f96b6 9657
.org 0xf96b8
	ldr r1, [r1, #0]	@ 000f96b8 0968
.org 0xf96ba
	lsls r4, r6, #2	@ 000f96ba b400
.org 0xf96bc
	adds r4, r4, r1	@ 000f96bc 6418
.org 0xf96be
	ldr r5, [pc, #104]	@ 000f96be 1a4d
.org 0xf96c0
	ldr r2, [r7, #44]	@ 000f96c0 fa6a
.org 0xf96c2
	negs r1, r2	@ 000f96c2 5142
.org 0xf96c4
	orrs r1, r2	@ 000f96c4 1143
.org 0xf96c6
	asrs r1, r1, #31	@ 000f96c6 c917
.org 0xf96c8
	movs r2, #4	@ 000f96c8 0422
.org 0xf96ca
	ands r1, r2	@ 000f96ca 1140
.org 0xf96cc
	adds r1, r1, r5	@ 000f96cc 4919
.org 0xf96ce
	ldr r1, [r1, #0]	@ 000f96ce 0968
.org 0xf96d0
	lsls r3, r3, #2	@ 000f96d0 9b00
.org 0xf96d2
	adds r3, r3, r1	@ 000f96d2 5b18
.org 0xf96d4
	ldr r1, [pc, #84]	@ 000f96d4 1549
.org 0xf96d6
	adds r3, r3, r1	@ 000f96d6 5b18
.org 0xf96d8
	ldr r1, [r3, #0]	@ 000f96d8 1968
.org 0xf96da
	adds r1, r1, r6	@ 000f96da 8919
.org 0xf96dc
	ldrb r1, [r1, #0]	@ 000f96dc 0978
.org 0xf96de
	lsls r2, r1, #1	@ 000f96de 4a00
.org 0xf96e0
	adds r2, r2, r1	@ 000f96e0 5218
.org 0xf96e2
	lsls r2, r2, #3	@ 000f96e2 d200
.org 0xf96e4
	ldr r1, [r4, #0]	@ 000f96e4 2168
.org 0xf96e6
	adds r1, r1, r2	@ 000f96e6 8918
.org 0xf96e8
	bl 0x5784	@ 000f96e8 0cf74cf8
.org 0xf96ec
	ldrb r0, [r7, #18]	@ 000f96ec b87c
.org 0xf96ee
	cmp r0, #0	@ 000f96ee 0028
.org 0xf96f0
	beq.n 0xf96fc	@ 000f96f0 04d0
.org 0xf96f2
	subs r0, #1	@ 000f96f2 0138
.org 0xf96f4
	strb r0, [r7, #18]	@ 000f96f4 b874
.org 0xf96f6
	lsls r0, r0, #24	@ 000f96f6 0006
.org 0xf96f8
	cmp r0, #0	@ 000f96f8 0028
.org 0xf96fa
	bne.n 0xf9710	@ 000f96fa 09d1
.org 0xf96fc
	ldr r0, [pc, #48]	@ 000f96fc 0c48
.org 0xf96fe
	adds r0, #38	@ 000f96fe 2630
.org 0xf9700
	ldrb r0, [r0, #0]	@ 000f9700 0078
.org 0xf9702
	cmp r0, #1	@ 000f9702 0128
.org 0xf9704
	bhi.n 0xf9710	@ 000f9704 04d8
.org 0xf9706
	movs r1, #0	@ 000f9706 0021
.org 0xf9708
	movs r0, #1	@ 000f9708 0120
.org 0xf970a
	strb r0, [r7, #13]	@ 000f970a 7873
.org 0xf970c
	strb r1, [r7, #14]	@ 000f970c b973
.org 0xf970e
	strb r1, [r7, #15]	@ 000f970e f973
.org 0xf9710
	add sp, #12	@ 000f9710 03b0
.org 0xf9712
	pop {r4, r5, r6, r7}	@ 000f9712 f0bc
.org 0xf9714
	pop {r0}	@ 000f9714 01bc
.org 0xf9716
	bx r0	@ 000f9716 0047
