@ FUN_080b772c  entry 0x080b772c  size 72
.thumb
.org 0xb772c
FUN_080b772c:
	push {r4, r5, r6, lr}	@ 000b772c 70b5
.org 0xb772e
	adds r4, r0, #0	@ 000b772e 041c
.org 0xb7730
	ldr r0, [r4, #20]	@ 000b7730 6069
.org 0xb7732
	movs r6, #1	@ 000b7732 0126
.org 0xb7734
	ands r0, r6	@ 000b7734 3040
.org 0xb7736
	cmp r0, #0	@ 000b7736 0028
.org 0xb7738
	beq.n 0xb776e	@ 000b7738 19d0
.org 0xb773a
	ldr r5, [r4, #44]	@ 000b773a e56a
.org 0xb773c
	movs r0, #10	@ 000b773c 0a20
.org 0xb773e
	bl 0x6984	@ 000b773e 4ff721f9
.org 0xb7742
	ldr r1, [r4, #20]	@ 000b7742 6169
.org 0xb7744
	movs r0, #128	@ 000b7744 8020
.org 0xb7746
	lsls r0, r0, #2	@ 000b7746 8000
.org 0xb7748
	ands r0, r1	@ 000b7748 0840
.org 0xb774a
	cmp r0, #0	@ 000b774a 0028
.org 0xb774c
	beq.n 0xb776e	@ 000b774c 0fd0
.org 0xb774e
	movs r0, #128	@ 000b774e 8020
.org 0xb7750
	lsls r0, r0, #10	@ 000b7750 8002
.org 0xb7752
	ands r1, r0	@ 000b7752 0140
.org 0xb7754
	cmp r1, #0	@ 000b7754 0029
.org 0xb7756
	beq.n 0xb776e	@ 000b7756 0ad0
.org 0xb7758
	adds r0, r5, #0	@ 000b7758 281c
.org 0xb775a
	adds r0, #182	@ 000b775a b630
.org 0xb775c
	strb r6, [r0, #0]	@ 000b775c 0670
.org 0xb775e
	ldr r0, [pc, #20]	@ 000b775e 0548
.org 0xb7760
	ldr r0, [r0, #0]	@ 000b7760 0068
.org 0xb7762
	cmp r0, #0	@ 000b7762 0028
.org 0xb7764
	beq.n 0xb776e	@ 000b7764 03d0
.org 0xb7766
	movs r1, #6	@ 000b7766 0621
.org 0xb7768
	movs r2, #7	@ 000b7768 0722
.org 0xb776a
	bl 0x3a578	@ 000b776a 82f705ff
.org 0xb776e
	pop {r4, r5, r6}	@ 000b776e 70bc
.org 0xb7770
	pop {r0}	@ 000b7770 01bc
.org 0xb7772
	bx r0	@ 000b7772 0047
