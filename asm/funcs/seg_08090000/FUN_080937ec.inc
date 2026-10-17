@ FUN_080937ec  entry 0x080937ec  size 112
.thumb
.org 0x937ec
FUN_080937ec:
	push {r4, r5, lr}	@ 000937ec 30b5
.org 0x937ee
	sub sp, #12	@ 000937ee 83b0
.org 0x937f0
	adds r4, r0, #0	@ 000937f0 041c
.org 0x937f2
	mov r0, sp	@ 000937f2 6846
.org 0x937f4
	ldr r1, [pc, #100]	@ 000937f4 1949
.org 0x937f6
	ldmia r1!, {r2, r3, r5}	@ 000937f6 2cc9
.org 0x937f8
	stmia r0!, {r2, r3, r5}	@ 000937f8 2cc0
.org 0x937fa
	ldrb r0, [r4, #15]	@ 000937fa e07b
.org 0x937fc
	cmp r0, #0	@ 000937fc 0028
.org 0x937fe
	bne.n 0x93826	@ 000937fe 12d1
.org 0x93800
	adds r0, r4, #0	@ 00093800 201c
.org 0x93802
	adds r0, #116	@ 00093802 7430
.org 0x93804
	ldr r1, [pc, #88]	@ 00093804 1649
.org 0x93806
	bl 0x5784	@ 00093806 71f7bdff
.org 0x9380a
	adds r0, r4, #0	@ 0009380a 201c
.org 0x9380c
	adds r0, #184	@ 0009380c b830
.org 0x9380e
	ldrb r0, [r0, #0]	@ 0009380e 0078
.org 0x93810
	lsls r0, r0, #2	@ 00093810 8000
.org 0x93812
	add r0, sp	@ 00093812 6844
.org 0x93814
	ldrh r1, [r0, #0]	@ 00093814 0188
.org 0x93816
	adds r0, r4, #0	@ 00093816 201c
.org 0x93818
	bl 0x1cf00	@ 00093818 89f772fb
.org 0x9381c
	movs r0, #64	@ 0009381c 4020
.org 0x9381e
	strb r0, [r4, #18]	@ 0009381e a074
.org 0x93820
	ldrb r0, [r4, #15]	@ 00093820 e07b
.org 0x93822
	adds r0, #1	@ 00093822 0130
.org 0x93824
	strb r0, [r4, #15]	@ 00093824 e073
.org 0x93826
	adds r0, r4, #0	@ 00093826 201c
.org 0x93828
	bl 0x1cff0	@ 00093828 89f7e2fb
.org 0x9382c
	ldrb r0, [r4, #18]	@ 0009382c a07c
.org 0x9382e
	cmp r0, #0	@ 0009382e 0028
.org 0x93830
	beq.n 0x93836	@ 00093830 01d0
.org 0x93832
	subs r0, #1	@ 00093832 0138
.org 0x93834
	strb r0, [r4, #18]	@ 00093834 a074
.org 0x93836
	adds r0, r4, #0	@ 00093836 201c
.org 0x93838
	bl 0x94a38	@ 00093838 01f0fef8
.org 0x9383c
	adds r0, r4, #0	@ 0009383c 201c
.org 0x9383e
	adds r0, #115	@ 0009383e 7330
.org 0x93840
	ldrb r0, [r0, #0]	@ 00093840 0078
.org 0x93842
	cmp r0, #3	@ 00093842 0328
.org 0x93844
	bne.n 0x93854	@ 00093844 06d1
.org 0x93846
	ldrb r0, [r4, #18]	@ 00093846 a07c
.org 0x93848
	cmp r0, #31	@ 00093848 1f28
.org 0x9384a
	bhi.n 0x93854	@ 0009384a 03d8
.org 0x9384c
	movs r1, #0	@ 0009384c 0021
.org 0x9384e
	movs r0, #2	@ 0009384e 0220
.org 0x93850
	strb r0, [r4, #14]	@ 00093850 a073
.org 0x93852
	strb r1, [r4, #15]	@ 00093852 e173
.org 0x93854
	add sp, #12	@ 00093854 03b0
.org 0x93856
	pop {r4, r5}	@ 00093856 30bc
.org 0x93858
	pop {r0}	@ 00093858 01bc
.org 0x9385a
	bx r0	@ 0009385a 0047
