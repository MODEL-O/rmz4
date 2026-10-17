@ FUN_080877ec  entry 0x080877ec  size 84
.thumb
.org 0x877ec
FUN_080877ec:
	push {r4, r5, lr}	@ 000877ec 30b5
.org 0x877ee
	adds r5, r0, #0	@ 000877ee 051c
.org 0x877f0
	ldrb r0, [r5, #15]	@ 000877f0 e87b
.org 0x877f2
	cmp r0, #0	@ 000877f2 0028
.org 0x877f4
	bne.n 0x87822	@ 000877f4 15d1
.org 0x877f6
	ldrb r4, [r5, #10]	@ 000877f6 ac7a
.org 0x877f8
	lsrs r4, r4, #4	@ 000877f8 2409
.org 0x877fa
	movs r0, #1	@ 000877fa 0120
.org 0x877fc
	ands r4, r0	@ 000877fc 0440
.org 0x877fe
	adds r0, r5, #0	@ 000877fe 281c
.org 0x87800
	adds r0, #116	@ 00087800 7430
.org 0x87802
	ldr r1, [pc, #60]	@ 00087802 0f49
.org 0x87804
	bl 0x5784	@ 00087804 7df7beff
.org 0x87808
	ldr r1, [pc, #56]	@ 00087808 0e49
.org 0x8780a
	adds r0, r5, #0	@ 0008780a 281c
.org 0x8780c
	bl 0x1cf00	@ 0008780c 95f778fb
.org 0x87810
	lsls r4, r4, #1	@ 00087810 6400
.org 0x87812
	subs r4, #1	@ 00087812 013c
.org 0x87814
	lsls r4, r4, #8	@ 00087814 2402
.org 0x87816
	str r4, [r5, #92]	@ 00087816 ec65
.org 0x87818
	ldr r0, [pc, #44]	@ 00087818 0b48
.org 0x8781a
	str r0, [r5, #96]	@ 0008781a 2866
.org 0x8781c
	ldrb r0, [r5, #15]	@ 0008781c e87b
.org 0x8781e
	adds r0, #1	@ 0008781e 0130
.org 0x87820
	strb r0, [r5, #15]	@ 00087820 e873
.org 0x87822
	adds r0, r5, #0	@ 00087822 281c
.org 0x87824
	bl 0x1cff0	@ 00087824 95f7e4fb
.org 0x87828
	adds r0, r5, #0	@ 00087828 281c
.org 0x8782a
	bl 0x88c9c	@ 0008782a 01f037fa
.org 0x8782e
	cmp r0, #0	@ 0008782e 0028
.org 0x87830
	beq.n 0x8783a	@ 00087830 03d0
.org 0x87832
	movs r1, #0	@ 00087832 0021
.org 0x87834
	movs r0, #3	@ 00087834 0320
.org 0x87836
	strb r0, [r5, #14]	@ 00087836 a873
.org 0x87838
	strb r1, [r5, #15]	@ 00087838 e973
.org 0x8783a
	pop {r4, r5}	@ 0008783a 30bc
.org 0x8783c
	pop {r0}	@ 0008783c 01bc
.org 0x8783e
	bx r0	@ 0008783e 0047
