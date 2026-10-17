@ FUN_08027814  entry 0x08027814  size 98
.thumb
.org 0x27814
FUN_08027814:
	push {r4, r5, r6, r7, lr}	@ 00027814 f0b5
.org 0x27816
	mov r7, r8	@ 00027816 4746
.org 0x27818
	push {r7}	@ 00027818 80b4
.org 0x2781a
	lsls r0, r0, #24	@ 0002781a 0006
.org 0x2781c
	lsrs r6, r0, #24	@ 0002781c 060e
.org 0x2781e
	lsls r0, r6, #4	@ 0002781e 3001
.org 0x27820
	ldr r1, [pc, #84]	@ 00027820 1549
.org 0x27822
	adds r0, r0, r1	@ 00027822 4018
.org 0x27824
	mov r8, r0	@ 00027824 8046
.org 0x27826
	ldr r7, [r0, #0]	@ 00027826 0768
.org 0x27828
	cmp r7, #0	@ 00027828 002f
.org 0x2782a
	beq.n 0x2786c	@ 0002782a 1fd0
.org 0x2782c
	adds r0, r1, #0	@ 0002782c 081c
.org 0x2782e
	subs r0, #32	@ 0002782e 2038
.org 0x27830
	ldrh r0, [r0, #0]	@ 00027830 0088
.org 0x27832
	cmp r0, #0	@ 00027832 0028
.org 0x27834
	beq.n 0x27856	@ 00027834 0fd0
.org 0x27836
	cmp r6, #0	@ 00027836 002e
.org 0x27838
	bne.n 0x27856	@ 00027838 0dd1
.org 0x2783a
	ldr r0, [pc, #64]	@ 0002783a 1048
.org 0x2783c
	str r6, [r0, #8]	@ 0002783c 8660
.org 0x2783e
	ldr r4, [pc, #64]	@ 0002783e 104c
.org 0x27840
	ldr r0, [pc, #64]	@ 00027840 1048
.org 0x27842
	adds r5, r4, r0	@ 00027842 2518
.org 0x27844
	ldr r0, [r5, #0]	@ 00027844 2868
.org 0x27846
	bl 0x2b7cc	@ 00027846 03f0c1ff
.org 0x2784a
	ldr r0, [r5, #0]	@ 0002784a 2868
.org 0x2784c
	ldr r1, [pc, #56]	@ 0002784c 0e49
.org 0x2784e
	adds r4, r4, r1	@ 0002784e 6418
.org 0x27850
	adds r1, r4, #0	@ 00027850 211c
.org 0x27852
	bl 0x382e4	@ 00027852 10f047fd
.org 0x27856
	cmp r6, #1	@ 00027856 012e
.org 0x27858
	bne.n 0x27860	@ 00027858 02d1
.org 0x2785a
	ldr r1, [pc, #32]	@ 0002785a 0849
.org 0x2785c
	movs r0, #0	@ 0002785c 0020
.org 0x2785e
	str r0, [r1, #12]	@ 0002785e c860
.org 0x27860
	adds r0, r7, #0	@ 00027860 381c
.org 0x27862
	bl 0x1df34	@ 00027862 f6f767fb
.org 0x27866
	movs r0, #0	@ 00027866 0020
.org 0x27868
	mov r1, r8	@ 00027868 4146
.org 0x2786a
	str r0, [r1, #0]	@ 0002786a 0860
.org 0x2786c
	pop {r3}	@ 0002786c 08bc
.org 0x2786e
	mov r8, r3	@ 0002786e 9846
.org 0x27870
	pop {r4, r5, r6, r7}	@ 00027870 f0bc
.org 0x27872
	pop {r0}	@ 00027872 01bc
.org 0x27874
	bx r0	@ 00027874 0047
