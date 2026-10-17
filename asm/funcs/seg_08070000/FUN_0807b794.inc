@ FUN_0807b794  entry 0x0807b794  size 166
.thumb
.org 0x7b794
FUN_0807b794:
	push {r4, r5, lr}	@ 0007b794 30b5
.org 0x7b796
	adds r5, r0, #0	@ 0007b796 051c
.org 0x7b798
	ldrb r0, [r5, #15]	@ 0007b798 e87b
.org 0x7b79a
	cmp r0, #0	@ 0007b79a 0028
.org 0x7b79c
	bne.n 0x7b7e0	@ 0007b79c 20d1
.org 0x7b79e
	ldrb r0, [r5, #17]	@ 0007b79e 687c
.org 0x7b7a0
	cmp r0, #1	@ 0007b7a0 0128
.org 0x7b7a2
	bne.n 0x7b7aa	@ 0007b7a2 02d1
.org 0x7b7a4
	ldr r0, [pc, #148]	@ 0007b7a4 2548
.org 0x7b7a6
	bl 0x2b10	@ 0007b7a6 87f7b3f9
.org 0x7b7aa
	adds r2, r5, #0	@ 0007b7aa 2a1c
.org 0x7b7ac
	adds r2, #180	@ 0007b7ac b432
.org 0x7b7ae
	ldr r1, [pc, #144]	@ 0007b7ae 2449
.org 0x7b7b0
	ldr r0, [r1, #56]	@ 0007b7b0 886b
.org 0x7b7b2
	ldr r3, [pc, #144]	@ 0007b7b2 244b
.org 0x7b7b4
	adds r0, r0, r3	@ 0007b7b4 c018
.org 0x7b7b6
	str r0, [r2, #0]	@ 0007b7b6 1060
.org 0x7b7b8
	adds r4, r5, #0	@ 0007b7b8 2c1c
.org 0x7b7ba
	adds r4, #184	@ 0007b7ba b834
.org 0x7b7bc
	ldr r0, [r1, #60]	@ 0007b7bc c86b
.org 0x7b7be
	ldr r1, [pc, #136]	@ 0007b7be 2249
.org 0x7b7c0
	adds r0, r0, r1	@ 0007b7c0 4018
.org 0x7b7c2
	str r0, [r4, #0]	@ 0007b7c2 2060
.org 0x7b7c4
	adds r0, r5, #0	@ 0007b7c4 281c
.org 0x7b7c6
	movs r1, #1	@ 0007b7c6 0121
.org 0x7b7c8
	bl 0x7e8c8	@ 0007b7c8 03f07ef8
.org 0x7b7cc
	ldr r0, [pc, #124]	@ 0007b7cc 1f48
.org 0x7b7ce
	str r0, [r5, #96]	@ 0007b7ce 2866
.org 0x7b7d0
	ldr r0, [r4, #0]	@ 0007b7d0 2068
.org 0x7b7d2
	movs r3, #224	@ 0007b7d2 e023
.org 0x7b7d4
	lsls r3, r3, #6	@ 0007b7d4 9b01
.org 0x7b7d6
	adds r0, r0, r3	@ 0007b7d6 c018
.org 0x7b7d8
	str r0, [r5, #104]	@ 0007b7d8 a866
.org 0x7b7da
	ldrb r0, [r5, #15]	@ 0007b7da e87b
.org 0x7b7dc
	adds r0, #1	@ 0007b7dc 0130
.org 0x7b7de
	strb r0, [r5, #15]	@ 0007b7de e873
.org 0x7b7e0
	adds r4, r5, #0	@ 0007b7e0 2c1c
.org 0x7b7e2
	adds r4, #188	@ 0007b7e2 bc34
.org 0x7b7e4
	ldrb r0, [r4, #0]	@ 0007b7e4 2078
.org 0x7b7e6
	cmp r0, #0	@ 0007b7e6 0028
.org 0x7b7e8
	beq.n 0x7b7f0	@ 0007b7e8 02d0
.org 0x7b7ea
	adds r0, r5, #0	@ 0007b7ea 281c
.org 0x7b7ec
	bl 0x1cff0	@ 0007b7ec a1f700fc
.org 0x7b7f0
	adds r0, r5, #0	@ 0007b7f0 281c
.org 0x7b7f2
	adds r0, #116	@ 0007b7f2 7430
.org 0x7b7f4
	ldr r3, [pc, #88]	@ 0007b7f4 164b
.org 0x7b7f6
	ldr r2, [pc, #92]	@ 0007b7f6 174a
.org 0x7b7f8
	ldrb r1, [r4, #0]	@ 0007b7f8 2178
.org 0x7b7fa
	lsls r1, r1, #1	@ 0007b7fa 4900
.org 0x7b7fc
	adds r1, r1, r2	@ 0007b7fc 8918
.org 0x7b7fe
	ldrh r2, [r1, #0]	@ 0007b7fe 0a88
.org 0x7b800
	lsls r2, r2, #2	@ 0007b800 9200
.org 0x7b802
	adds r2, r2, r3	@ 0007b802 d218
.org 0x7b804
	adds r1, r5, #0	@ 0007b804 291c
.org 0x7b806
	adds r1, #113	@ 0007b806 7131
.org 0x7b808
	ldrb r1, [r1, #0]	@ 0007b808 0978
.org 0x7b80a
	lsls r1, r1, #24	@ 0007b80a 0906
.org 0x7b80c
	asrs r1, r1, #24	@ 0007b80c 0916
.org 0x7b80e
	ldr r2, [r2, #0]	@ 0007b80e 1268
.org 0x7b810
	lsls r1, r1, #2	@ 0007b810 8900
.org 0x7b812
	adds r1, r1, r2	@ 0007b812 8918
.org 0x7b814
	ldr r1, [r1, #0]	@ 0007b814 0968
.org 0x7b816
	bl 0x5784	@ 0007b816 89f7b5ff
.org 0x7b81a
	ldr r0, [r5, #88]	@ 0007b81a a86d
.org 0x7b81c
	ldr r1, [r5, #96]	@ 0007b81c 296e
.org 0x7b81e
	adds r0, r0, r1	@ 0007b81e 4018
.org 0x7b820
	str r0, [r5, #88]	@ 0007b820 a865
.org 0x7b822
	ldr r1, [r5, #104]	@ 0007b822 a96e
.org 0x7b824
	cmp r0, r1	@ 0007b824 8842
.org 0x7b826
	bgt.n 0x7b834	@ 0007b826 05dc
.org 0x7b828
	str r1, [r5, #88]	@ 0007b828 a965
.org 0x7b82a
	ldrb r0, [r5, #14]	@ 0007b82a a87b
.org 0x7b82c
	adds r0, #1	@ 0007b82c 0130
.org 0x7b82e
	movs r1, #0	@ 0007b82e 0021
.org 0x7b830
	strb r0, [r5, #14]	@ 0007b830 a873
.org 0x7b832
	strb r1, [r5, #15]	@ 0007b832 e973
.org 0x7b834
	pop {r4, r5}	@ 0007b834 30bc
.org 0x7b836
	pop {r0}	@ 0007b836 01bc
.org 0x7b838
	bx r0	@ 0007b838 0047
