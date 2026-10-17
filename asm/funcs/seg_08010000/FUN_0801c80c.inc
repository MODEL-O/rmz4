@ FUN_0801c80c  entry 0x0801c80c  size 102
.thumb
.org 0x1c80c
FUN_0801c80c:
	push {r4, r5, lr}	@ 0001c80c 30b5
.org 0x1c80e
	adds r5, r0, #0	@ 0001c80e 051c
.org 0x1c810
	bl 0x54b4	@ 0001c810 e8f750fe
.org 0x1c814
	b.n 0x1c85c	@ 0001c814 22e0
.org 0x1c816
	ldrb r2, [r3, #10]	@ 0001c816 9a7a
.org 0x1c818
	movs r0, #4	@ 0001c818 0420
.org 0x1c81a
	ands r0, r2	@ 0001c81a 1040
.org 0x1c81c
	cmp r0, #0	@ 0001c81c 0028
.org 0x1c81e
	beq.n 0x1c85c	@ 0001c81e 1dd0
.org 0x1c820
	adds r4, r3, #0	@ 0001c820 1c1c
.org 0x1c822
	adds r4, #116	@ 0001c822 7434
.org 0x1c824
	movs r0, #2	@ 0001c824 0220
.org 0x1c826
	ands r0, r2	@ 0001c826 1040
.org 0x1c828
	cmp r0, #0	@ 0001c828 0028
.org 0x1c82a
	beq.n 0x1c856	@ 0001c82a 14d0
.org 0x1c82c
	movs r0, #64	@ 0001c82c 4020
.org 0x1c82e
	ands r0, r2	@ 0001c82e 1040
.org 0x1c830
	cmp r0, #0	@ 0001c830 0028
.org 0x1c832
	beq.n 0x1c848	@ 0001c832 09d0
.org 0x1c834
	movs r1, #48	@ 0001c834 3021
.org 0x1c836
	ands r1, r2	@ 0001c836 1140
.org 0x1c838
	lsrs r1, r1, #4	@ 0001c838 0909
.org 0x1c83a
	adds r0, r3, #0	@ 0001c83a 181c
.org 0x1c83c
	adds r0, #36	@ 0001c83c 2430
.org 0x1c83e
	ldrb r2, [r0, #0]	@ 0001c83e 0278
.org 0x1c840
	adds r0, r4, #0	@ 0001c840 201c
.org 0x1c842
	bl 0x59d4	@ 0001c842 e9f7c7f8
.org 0x1c846
	b.n 0x1c85c	@ 0001c846 09e0
.org 0x1c848
	movs r1, #48	@ 0001c848 3021
.org 0x1c84a
	ands r1, r2	@ 0001c84a 1140
.org 0x1c84c
	lsrs r1, r1, #4	@ 0001c84c 0909
.org 0x1c84e
	adds r0, r4, #0	@ 0001c84e 201c
.org 0x1c850
	bl 0x58cc	@ 0001c850 e9f73cf8
.org 0x1c854
	b.n 0x1c85c	@ 0001c854 02e0
.org 0x1c856
	adds r0, r4, #0	@ 0001c856 201c
.org 0x1c858
	bl 0x580c	@ 0001c858 e8f7d8ff
.org 0x1c85c
	ldr r0, [r5, #12]	@ 0001c85c e868
.org 0x1c85e
	ldr r0, [r0, #4]	@ 0001c85e 4068
.org 0x1c860
	str r0, [r5, #12]	@ 0001c860 e860
.org 0x1c862
	adds r3, r0, #0	@ 0001c862 031c
.org 0x1c864
	adds r0, r5, #0	@ 0001c864 281c
.org 0x1c866
	adds r0, #20	@ 0001c866 1430
.org 0x1c868
	cmp r3, r0	@ 0001c868 8342
.org 0x1c86a
	bne.n 0x1c816	@ 0001c86a d4d1
.org 0x1c86c
	pop {r4, r5}	@ 0001c86c 30bc
.org 0x1c86e
	pop {r0}	@ 0001c86e 01bc
.org 0x1c870
	bx r0	@ 0001c870 0047
