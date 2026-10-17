@ FUN_0803b830  entry 0x0803b830  size 182
.thumb
.org 0x3b830
FUN_0803b830:
	push {r4, r5, r6, r7, lr}	@ 0003b830 f0b5
.org 0x3b832
	mov r7, r8	@ 0003b832 4746
.org 0x3b834
	push {r7}	@ 0003b834 80b4
.org 0x3b836
	sub sp, #8	@ 0003b836 82b0
.org 0x3b838
	adds r5, r0, #0	@ 0003b838 051c
.org 0x3b83a
	adds r0, #180	@ 0003b83a b430
.org 0x3b83c
	ldr r7, [r0, #0]	@ 0003b83c 0768
.org 0x3b83e
	adds r0, r5, #0	@ 0003b83e 281c
.org 0x3b840
	bl 0x1cc9c	@ 0003b840 e1f72cfa
.org 0x3b844
	adds r0, r5, #0	@ 0003b844 281c
.org 0x3b846
	bl 0x1ceec	@ 0003b846 e1f751fb
.org 0x3b84a
	ldrb r1, [r5, #10]	@ 0003b84a a97a
.org 0x3b84c
	movs r0, #1	@ 0003b84c 0120
.org 0x3b84e
	orrs r0, r1	@ 0003b84e 0843
.org 0x3b850
	movs r1, #2	@ 0003b850 0221
.org 0x3b852
	orrs r0, r1	@ 0003b852 0843
.org 0x3b854
	strb r0, [r5, #10]	@ 0003b854 a872
.org 0x3b856
	movs r1, #176	@ 0003b856 b021
.org 0x3b858
	lsls r1, r1, #7	@ 0003b858 c901
.org 0x3b85a
	adds r0, r5, #0	@ 0003b85a 281c
.org 0x3b85c
	bl 0x1cf00	@ 0003b85c e1f750fb
.org 0x3b860
	movs r0, #26	@ 0003b860 1a20
.org 0x3b862
	bl 0x2b10	@ 0003b862 c7f755f9
.org 0x3b866
	ldrb r1, [r5, #10]	@ 0003b866 a97a
.org 0x3b868
	movs r0, #16	@ 0003b868 1020
.org 0x3b86a
	ands r0, r1	@ 0003b86a 0840
.org 0x3b86c
	cmp r0, #0	@ 0003b86c 0028
.org 0x3b86e
	beq.n 0x3b876	@ 0003b86e 02d0
.org 0x3b870
	movs r0, #192	@ 0003b870 c020
.org 0x3b872
	lsls r0, r0, #3	@ 0003b872 c000
.org 0x3b874
	b.n 0x3b878	@ 0003b874 00e0
.org 0x3b876
	ldr r0, [pc, #112]	@ 0003b876 1c48
.org 0x3b878
	str r0, [r5, #92]	@ 0003b878 e865
.org 0x3b87a
	movs r4, #0	@ 0003b87a 0024
.org 0x3b87c
	str r4, [r5, #96]	@ 0003b87c 2c66
.org 0x3b87e
	ldrb r1, [r5, #10]	@ 0003b87e a97a
.org 0x3b880
	movs r0, #4	@ 0003b880 0420
.org 0x3b882
	orrs r0, r1	@ 0003b882 0843
.org 0x3b884
	strb r0, [r5, #10]	@ 0003b884 a872
.org 0x3b886
	adds r6, r5, #0	@ 0003b886 2e1c
.org 0x3b888
	adds r6, #116	@ 0003b888 7436
.org 0x3b88a
	ldr r0, [pc, #96]	@ 0003b88a 1848
.org 0x3b88c
	mov r8, r0	@ 0003b88c 8046
.org 0x3b88e
	adds r2, r5, #0	@ 0003b88e 2a1c
.org 0x3b890
	adds r2, #84	@ 0003b890 5432
.org 0x3b892
	adds r0, r6, #0	@ 0003b892 301c
.org 0x3b894
	mov r1, r8	@ 0003b894 4146
.org 0x3b896
	movs r3, #1	@ 0003b896 0123
.org 0x3b898
	bl 0x5760	@ 0003b898 c9f762ff
.org 0x3b89c
	str r5, [r6, #44]	@ 0003b89c f562
.org 0x3b89e
	str r4, [r6, #36]	@ 0003b89e 7462
.org 0x3b8a0
	adds r0, r7, #0	@ 0003b8a0 381c
.org 0x3b8a2
	bl 0x3a4a8	@ 0003b8a2 fef701fe
.org 0x3b8a6
	adds r0, #8	@ 0003b8a6 0830
.org 0x3b8a8
	lsls r0, r0, #24	@ 0003b8a8 0006
.org 0x3b8aa
	lsrs r4, r0, #24	@ 0003b8aa 040e
.org 0x3b8ac
	adds r0, r7, #0	@ 0003b8ac 381c
.org 0x3b8ae
	bl 0x38a78	@ 0003b8ae fdf7e3f8
.org 0x3b8b2
	lsls r0, r0, #24	@ 0003b8b2 0006
.org 0x3b8b4
	cmp r0, #0	@ 0003b8b4 0028
.org 0x3b8b6
	beq.n 0x3b8bc	@ 0003b8b6 01d0
.org 0x3b8b8
	lsls r0, r4, #25	@ 0003b8b8 6006
.org 0x3b8ba
	lsrs r4, r0, #24	@ 0003b8ba 040e
.org 0x3b8bc
	movs r3, #1	@ 0003b8bc 0123
.org 0x3b8be
	negs r3, r3	@ 0003b8be 5b42
.org 0x3b8c0
	str r3, [sp, #0]	@ 0003b8c0 0093
.org 0x3b8c2
	str r3, [sp, #4]	@ 0003b8c2 0193
.org 0x3b8c4
	adds r0, r6, #0	@ 0003b8c4 301c
.org 0x3b8c6
	mov r1, r8	@ 0003b8c6 4146
.org 0x3b8c8
	adds r2, r4, #0	@ 0003b8c8 221c
.org 0x3b8ca
	bl 0x5794	@ 0003b8ca c9f763ff
.org 0x3b8ce
	movs r0, #11	@ 0003b8ce 0b20
.org 0x3b8d0
	strb r0, [r5, #18]	@ 0003b8d0 a874
.org 0x3b8d2
	adds r1, r5, #0	@ 0003b8d2 291c
.org 0x3b8d4
	adds r1, #180	@ 0003b8d4 b431
.org 0x3b8d6
	movs r0, #4	@ 0003b8d6 0420
.org 0x3b8d8
	strb r0, [r1, #14]	@ 0003b8d8 8873
.org 0x3b8da
	add sp, #8	@ 0003b8da 02b0
.org 0x3b8dc
	pop {r3}	@ 0003b8dc 08bc
.org 0x3b8de
	mov r8, r3	@ 0003b8de 9846
.org 0x3b8e0
	pop {r4, r5, r6, r7}	@ 0003b8e0 f0bc
.org 0x3b8e2
	pop {r0}	@ 0003b8e2 01bc
.org 0x3b8e4
	bx r0	@ 0003b8e4 0047
