@ FUN_0803d854  entry 0x0803d854  size 106
.thumb
.org 0x3d854
FUN_0803d854:
	push {r4, lr}	@ 0003d854 10b5
.org 0x3d856
	adds r3, r0, #0	@ 0003d856 031c
.org 0x3d858
	adds r0, #180	@ 0003d858 b430
.org 0x3d85a
	ldr r4, [r0, #0]	@ 0003d85a 0468
.org 0x3d85c
	ldrb r0, [r4, #10]	@ 0003d85c a07a
.org 0x3d85e
	lsrs r2, r0, #4	@ 0003d85e 0209
.org 0x3d860
	movs r0, #1	@ 0003d860 0120
.org 0x3d862
	ands r2, r0	@ 0003d862 0240
.org 0x3d864
	cmp r2, #0	@ 0003d864 002a
.org 0x3d866
	beq.n 0x3d870	@ 0003d866 03d0
.org 0x3d868
	ldrb r1, [r3, #10]	@ 0003d868 997a
.org 0x3d86a
	movs r0, #16	@ 0003d86a 1020
.org 0x3d86c
	orrs r0, r1	@ 0003d86c 0843
.org 0x3d86e
	b.n 0x3d876	@ 0003d86e 02e0
.org 0x3d870
	ldrb r1, [r3, #10]	@ 0003d870 997a
.org 0x3d872
	movs r0, #239	@ 0003d872 ef20
.org 0x3d874
	ands r0, r1	@ 0003d874 0840
.org 0x3d876
	strb r0, [r3, #10]	@ 0003d876 9872
.org 0x3d878
	adds r1, r2, #0	@ 0003d878 111c
.org 0x3d87a
	adds r0, r3, #0	@ 0003d87a 181c
.org 0x3d87c
	adds r0, #76	@ 0003d87c 4c30
.org 0x3d87e
	strb r1, [r0, #0]	@ 0003d87e 0170
.org 0x3d880
	movs r0, #74	@ 0003d880 4a20
.org 0x3d882
	adds r0, r0, r3	@ 0003d882 c018
.org 0x3d884
	mov ip, r0	@ 0003d884 8446
.org 0x3d886
	lsls r1, r1, #4	@ 0003d886 0901
.org 0x3d888
	ldrb r2, [r0, #0]	@ 0003d888 0278
.org 0x3d88a
	movs r0, #17	@ 0003d88a 1120
.org 0x3d88c
	negs r0, r0	@ 0003d88c 4042
.org 0x3d88e
	ands r0, r2	@ 0003d88e 1040
.org 0x3d890
	orrs r0, r1	@ 0003d890 0843
.org 0x3d892
	mov r1, ip	@ 0003d892 6146
.org 0x3d894
	strb r0, [r1, #0]	@ 0003d894 0870
.org 0x3d896
	ldrb r1, [r3, #10]	@ 0003d896 997a
.org 0x3d898
	movs r0, #16	@ 0003d898 1020
.org 0x3d89a
	ands r0, r1	@ 0003d89a 0840
.org 0x3d89c
	cmp r0, #0	@ 0003d89c 0028
.org 0x3d89e
	beq.n 0x3d8a8	@ 0003d89e 03d0
.org 0x3d8a0
	ldr r0, [r4, #84]	@ 0003d8a0 606d
.org 0x3d8a2
	movs r1, #136	@ 0003d8a2 8821
.org 0x3d8a4
	lsls r1, r1, #5	@ 0003d8a4 4901
.org 0x3d8a6
	b.n 0x3d8ac	@ 0003d8a6 01e0
.org 0x3d8a8
	ldr r0, [r4, #84]	@ 0003d8a8 606d
.org 0x3d8aa
	ldr r1, [pc, #20]	@ 0003d8aa 0549
.org 0x3d8ac
	adds r0, r0, r1	@ 0003d8ac 4018
.org 0x3d8ae
	str r0, [r3, #84]	@ 0003d8ae 5865
.org 0x3d8b0
	ldr r0, [r4, #88]	@ 0003d8b0 a06d
.org 0x3d8b2
	ldr r1, [pc, #16]	@ 0003d8b2 0449
.org 0x3d8b4
	adds r0, r0, r1	@ 0003d8b4 4018
.org 0x3d8b6
	str r0, [r3, #88]	@ 0003d8b6 9865
.org 0x3d8b8
	pop {r4}	@ 0003d8b8 10bc
.org 0x3d8ba
	pop {r0}	@ 0003d8ba 01bc
.org 0x3d8bc
	bx r0	@ 0003d8bc 0047
