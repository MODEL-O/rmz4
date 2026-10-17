@ FUN_08088830  entry 0x08088830  size 148
.thumb
.org 0x88830
FUN_08088830:
	push {r4, r5, lr}	@ 00088830 30b5
.org 0x88832
	sub sp, #8	@ 00088832 82b0
.org 0x88834
	adds r4, r0, #0	@ 00088834 041c
.org 0x88836
	ldrb r1, [r4, #10]	@ 00088836 a17a
.org 0x88838
	lsrs r5, r1, #4	@ 00088838 0d09
.org 0x8883a
	movs r0, #1	@ 0008883a 0120
.org 0x8883c
	ands r5, r0	@ 0008883c 0540
.org 0x8883e
	ldrb r0, [r4, #15]	@ 0008883e e07b
.org 0x88840
	cmp r0, #0	@ 00088840 0028
.org 0x88842
	bne.n 0x8888a	@ 00088842 22d1
.org 0x88844
	ldr r0, [r4, #84]	@ 00088844 606d
.org 0x88846
	str r0, [sp, #0]	@ 00088846 0090
.org 0x88848
	ldr r0, [r4, #88]	@ 00088848 a06d
.org 0x8884a
	str r0, [sp, #4]	@ 0008884a 0190
.org 0x8884c
	movs r0, #32	@ 0008884c 2020
.org 0x8884e
	ands r0, r1	@ 0008884e 0840
.org 0x88850
	cmp r0, #0	@ 00088850 0028
.org 0x88852
	beq.n 0x8885a	@ 00088852 02d0
.org 0x88854
	adds r0, r5, #2	@ 00088854 a81c
.org 0x88856
	adds r2, r0, #0	@ 00088856 021c
.org 0x88858
	b.n 0x8885c	@ 00088858 00e0
.org 0x8885a
	adds r2, r5, #0	@ 0008885a 2a1c
.org 0x8885c
	mov r0, sp	@ 0008885c 6846
.org 0x8885e
	movs r1, #2	@ 0008885e 0221
.org 0x88860
	bl 0xd83f8	@ 00088860 4ff0cafd
.org 0x88864
	ldr r1, [pc, #92]	@ 00088864 1749
.org 0x88866
	adds r0, r4, #0	@ 00088866 201c
.org 0x88868
	bl 0x1cf00	@ 00088868 94f74afb
.org 0x8886c
	lsls r2, r5, #1	@ 0008886c 6a00
.org 0x8886e
	subs r1, r2, #1	@ 0008886e 511e
.org 0x88870
	lsls r0, r1, #1	@ 00088870 4800
.org 0x88872
	adds r0, r0, r1	@ 00088872 4018
.org 0x88874
	lsls r0, r0, #5	@ 00088874 4001
.org 0x88876
	str r0, [r4, #92]	@ 00088876 e065
.org 0x88878
	movs r0, #1	@ 00088878 0120
.org 0x8887a
	subs r0, r0, r2	@ 0008887a 801a
.org 0x8887c
	lsls r0, r0, #2	@ 0008887c 8000
.org 0x8887e
	str r0, [r4, #100]	@ 0008887e 6066
.org 0x88880
	movs r0, #24	@ 00088880 1820
.org 0x88882
	strb r0, [r4, #18]	@ 00088882 a074
.org 0x88884
	ldrb r0, [r4, #15]	@ 00088884 e07b
.org 0x88886
	adds r0, #1	@ 00088886 0130
.org 0x88888
	strb r0, [r4, #15]	@ 00088888 e073
.org 0x8888a
	adds r0, r4, #0	@ 0008888a 201c
.org 0x8888c
	bl 0x1cff0	@ 0008888c 94f7b0fb
.org 0x88890
	ldr r0, [r4, #84]	@ 00088890 606d
.org 0x88892
	ldr r1, [r4, #92]	@ 00088892 e16d
.org 0x88894
	adds r0, r0, r1	@ 00088894 4018
.org 0x88896
	str r0, [r4, #84]	@ 00088896 6065
.org 0x88898
	ldr r0, [r4, #100]	@ 00088898 606e
.org 0x8889a
	adds r1, r1, r0	@ 0008889a 0918
.org 0x8889c
	str r1, [r4, #92]	@ 0008889c e165
.org 0x8889e
	ldrb r0, [r4, #18]	@ 0008889e a07c
.org 0x888a0
	subs r0, #1	@ 000888a0 0138
.org 0x888a2
	strb r0, [r4, #18]	@ 000888a2 a074
.org 0x888a4
	lsls r0, r0, #24	@ 000888a4 0006
.org 0x888a6
	lsrs r1, r0, #24	@ 000888a6 010e
.org 0x888a8
	cmp r1, #0	@ 000888a8 0029
.org 0x888aa
	bne.n 0x888bc	@ 000888aa 07d1
.org 0x888ac
	movs r0, #3	@ 000888ac 0320
.org 0x888ae
	strb r0, [r4, #14]	@ 000888ae a073
.org 0x888b0
	strb r1, [r4, #15]	@ 000888b0 e173
.org 0x888b2
	ldr r0, [pc, #20]	@ 000888b2 0548
.org 0x888b4
	ldr r1, [r0, #12]	@ 000888b4 c168
.org 0x888b6
	adds r0, r4, #0	@ 000888b6 201c
.org 0x888b8
	bl 0x128f80	@ 000888b8 a0f062fb
.org 0x888bc
	add sp, #8	@ 000888bc 02b0
.org 0x888be
	pop {r4, r5}	@ 000888be 30bc
.org 0x888c0
	pop {r0}	@ 000888c0 01bc
.org 0x888c2
	bx r0	@ 000888c2 0047
