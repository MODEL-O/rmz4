@ FUN_08053850  entry 0x08053850  size 56
.thumb
.org 0x53850
FUN_08053850:
	push {r4, lr}	@ 00053850 10b5
.org 0x53852
	adds r4, r0, #0	@ 00053852 041c
.org 0x53854
	ldrb r0, [r4, #15]	@ 00053854 e07b
.org 0x53856
	cmp r0, #0	@ 00053856 0028
.org 0x53858
	bne.n 0x5386a	@ 00053858 07d1
.org 0x5385a
	movs r1, #182	@ 0005385a b621
.org 0x5385c
	lsls r1, r1, #8	@ 0005385c 0902
.org 0x5385e
	adds r0, r4, #0	@ 0005385e 201c
.org 0x53860
	bl 0x1cf00	@ 00053860 c9f74efb
.org 0x53864
	ldrb r0, [r4, #15]	@ 00053864 e07b
.org 0x53866
	adds r0, #1	@ 00053866 0130
.org 0x53868
	strb r0, [r4, #15]	@ 00053868 e073
.org 0x5386a
	adds r0, r4, #0	@ 0005386a 201c
.org 0x5386c
	bl 0x1cff0	@ 0005386c c9f7c0fb
.org 0x53870
	ldr r0, [pc, #20]	@ 00053870 0548
.org 0x53872
	ldrb r1, [r0, #18]	@ 00053872 817c
.org 0x53874
	movs r0, #1	@ 00053874 0120
.org 0x53876
	ands r0, r1	@ 00053876 0840
.org 0x53878
	cmp r0, #0	@ 00053878 0028
.org 0x5387a
	bne.n 0x53882	@ 0005387a 02d1
.org 0x5387c
	adds r0, r4, #0	@ 0005387c 201c
.org 0x5387e
	bl 0x539e8	@ 0005387e 00f0b3f8
.org 0x53882
	pop {r4}	@ 00053882 10bc
.org 0x53884
	pop {r0}	@ 00053884 01bc
.org 0x53886
	bx r0	@ 00053886 0047
