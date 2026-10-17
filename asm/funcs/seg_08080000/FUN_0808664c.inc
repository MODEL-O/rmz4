@ FUN_0808664c  entry 0x0808664c  size 126
.thumb
.org 0x8664c
FUN_0808664c:
	push {r4, r5, r6, lr}	@ 0008664c 70b5
.org 0x8664e
	sub sp, #8	@ 0008664e 82b0
.org 0x86650
	adds r4, r0, #0	@ 00086650 041c
.org 0x86652
	ldrb r5, [r4, #15]	@ 00086652 e57b
.org 0x86654
	cmp r5, #0	@ 00086654 002d
.org 0x86656
	bne.n 0x86670	@ 00086656 0bd1
.org 0x86658
	adds r0, #116	@ 00086658 7430
.org 0x8665a
	ldr r1, [pc, #80]	@ 0008665a 1449
.org 0x8665c
	bl 0x5784	@ 0008665c 7ff792f8
.org 0x86660
	adds r0, r4, #0	@ 00086660 201c
.org 0x86662
	movs r1, #0	@ 00086662 0021
.org 0x86664
	bl 0x86a14	@ 00086664 00f0d6f9
.org 0x86668
	str r5, [r4, #96]	@ 00086668 2566
.org 0x8666a
	ldrb r0, [r4, #15]	@ 0008666a e07b
.org 0x8666c
	adds r0, #1	@ 0008666c 0130
.org 0x8666e
	strb r0, [r4, #15]	@ 0008666e e073
.org 0x86670
	adds r0, r4, #0	@ 00086670 201c
.org 0x86672
	bl 0x86a48	@ 00086672 00f0e9f9
.org 0x86676
	ldr r6, [r4, #84]	@ 00086676 666d
.org 0x86678
	str r6, [sp, #0]	@ 00086678 0096
.org 0x8667a
	ldr r1, [r4, #88]	@ 0008667a a16d
.org 0x8667c
	ldr r0, [r4, #96]	@ 0008667c 206e
.org 0x8667e
	adds r5, r1, r0	@ 0008667e 0d18
.org 0x86680
	str r5, [sp, #4]	@ 00086680 0195
.org 0x86682
	adds r0, r6, #0	@ 00086682 301c
.org 0x86684
	adds r1, r5, #0	@ 00086684 291c
.org 0x86686
	bl 0x7c7c	@ 00086686 81f7f9fa
.org 0x8668a
	lsls r0, r0, #16	@ 0008668a 0004
.org 0x8668c
	cmp r0, #0	@ 0008668c 0028
.org 0x8668e
	beq.n 0x866b0	@ 0008668e 0fd0
.org 0x86690
	adds r0, r6, #0	@ 00086690 301c
.org 0x86692
	adds r1, r5, #0	@ 00086692 291c
.org 0x86694
	bl 0x7c7c	@ 00086694 81f7f2fa
.org 0x86698
	movs r1, #15	@ 00086698 0f21
.org 0x8669a
	ands r1, r0	@ 0008669a 0140
.org 0x8669c
	cmp r1, #15	@ 0008669c 0f29
.org 0x8669e
	beq.n 0x866b0	@ 0008669e 07d0
.org 0x866a0
	adds r1, r4, #0	@ 000866a0 211c
.org 0x866a2
	adds r1, #183	@ 000866a2 b731
.org 0x866a4
	movs r0, #1	@ 000866a4 0120
.org 0x866a6
	strb r0, [r1, #0]	@ 000866a6 0870
.org 0x866a8
	b.n 0x866c8	@ 000866a8 0ee0
.org 0x866aa
	.byte 0x00	@ 000866aa data
.org 0x866ab
	.byte 0x00	@ 000866ab data
.org 0x866ac
	.byte 0x94,0xed,0x85,0x08	@ 000866ac data
.org 0x866b0
	ldr r0, [sp, #0]	@ 000866b0 0098
.org 0x866b2
	ldr r1, [sp, #4]	@ 000866b2 0199
.org 0x866b4
	str r0, [r4, #84]	@ 000866b4 6065
.org 0x866b6
	str r1, [r4, #88]	@ 000866b6 a165
.org 0x866b8
	ldr r0, [r4, #96]	@ 000866b8 206e
.org 0x866ba
	adds r0, #64	@ 000866ba 4030
.org 0x866bc
	str r0, [r4, #96]	@ 000866bc 2066
.org 0x866be
	movs r1, #224	@ 000866be e021
.org 0x866c0
	lsls r1, r1, #3	@ 000866c0 c900
.org 0x866c2
	cmp r0, r1	@ 000866c2 8842
.org 0x866c4
	ble.n 0x866c8	@ 000866c4 00dd
.org 0x866c6
	str r1, [r4, #96]	@ 000866c6 2166
.org 0x866c8
	add sp, #8	@ 000866c8 02b0
