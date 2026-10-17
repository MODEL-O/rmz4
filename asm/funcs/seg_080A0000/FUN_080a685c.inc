@ FUN_080a685c  entry 0x080a685c  size 182
.thumb
.org 0xa685c
FUN_080a685c:
	push {r4, r5, r6, r7, lr}	@ 000a685c f0b5
.org 0xa685e
	mov r7, r8	@ 000a685e 4746
.org 0xa6860
	push {r7}	@ 000a6860 80b4
.org 0xa6862
	adds r7, r0, #0	@ 000a6862 071c
.org 0xa6864
	ldr r0, [r7, #44]	@ 000a6864 f86a
.org 0xa6866
	cmp r0, #0	@ 000a6866 0028
.org 0xa6868
	bne.n 0xa691c	@ 000a6868 58d1
.org 0xa686a
	adds r0, r7, #0	@ 000a686a 381c
.org 0xa686c
	adds r0, #140	@ 000a686c 8c30
.org 0xa686e
	ldr r0, [r0, #0]	@ 000a686e 0068
.org 0xa6870
	movs r1, #1	@ 000a6870 0121
.org 0xa6872
	ands r0, r1	@ 000a6872 0840
.org 0xa6874
	cmp r0, #0	@ 000a6874 0028
.org 0xa6876
	beq.n 0xa691c	@ 000a6876 51d0
.org 0xa6878
	ldrb r0, [r7, #16]	@ 000a6878 387c
.org 0xa687a
	cmp r0, #0	@ 000a687a 0028
.org 0xa687c
	bne.n 0xa68f4	@ 000a687c 3ad1
.org 0xa687e
	adds r0, r7, #0	@ 000a687e 381c
.org 0xa6880
	adds r0, #151	@ 000a6880 9730
.org 0xa6882
	ldrb r1, [r0, #0]	@ 000a6882 0178
.org 0xa6884
	movs r0, #240	@ 000a6884 f020
.org 0xa6886
	ands r0, r1	@ 000a6886 0840
.org 0xa6888
	cmp r0, #32	@ 000a6888 2028
.org 0xa688a
	bne.n 0xa68f4	@ 000a688a 33d1
.org 0xa688c
	ldr r0, [r7, #84]	@ 000a688c 786d
.org 0xa688e
	ldr r4, [pc, #88]	@ 000a688e 164c
.org 0xa6890
	ldr r1, [r4, #0]	@ 000a6890 2168
.org 0xa6892
	ldr r2, [pc, #88]	@ 000a6892 164a
.org 0xa6894
	mov r8, r2	@ 000a6894 9046
.org 0xa6896
	mov r2, r8	@ 000a6896 4246
.org 0xa6898
	muls r2, r1	@ 000a6898 4a43
.org 0xa689a
	ldr r6, [pc, #84]	@ 000a689a 154e
.org 0xa689c
	adds r2, r2, r6	@ 000a689c 9219
.org 0xa689e
	lsls r2, r2, #1	@ 000a689e 5200
.org 0xa68a0
	lsrs r1, r2, #1	@ 000a68a0 5108
.org 0xa68a2
	str r1, [r4, #0]	@ 000a68a2 2160
.org 0xa68a4
	lsrs r2, r2, #17	@ 000a68a4 520c
.org 0xa68a6
	movs r5, #15	@ 000a68a6 0f25
.org 0xa68a8
	ands r2, r5	@ 000a68a8 2a40
.org 0xa68aa
	lsls r2, r2, #8	@ 000a68aa 1202
.org 0xa68ac
	ldr r1, [r7, #88]	@ 000a68ac b96d
.org 0xa68ae
	adds r1, r1, r2	@ 000a68ae 8918
.org 0xa68b0
	movs r2, #1	@ 000a68b0 0122
.org 0xa68b2
	bl 0xd0ff4	@ 000a68b2 2af09ffb
.org 0xa68b6
	ldr r0, [r7, #84]	@ 000a68b6 786d
.org 0xa68b8
	ldr r1, [r7, #88]	@ 000a68b8 b96d
.org 0xa68ba
	movs r2, #160	@ 000a68ba a022
.org 0xa68bc
	lsls r2, r2, #3	@ 000a68bc d200
.org 0xa68be
	adds r1, r1, r2	@ 000a68be 8918
.org 0xa68c0
	movs r2, #1	@ 000a68c0 0122
.org 0xa68c2
	bl 0xd0ff4	@ 000a68c2 2af097fb
.org 0xa68c6
	ldr r0, [r4, #0]	@ 000a68c6 2068
.org 0xa68c8
	mov r1, r8	@ 000a68c8 4146
.org 0xa68ca
	muls r1, r0	@ 000a68ca 4143
.org 0xa68cc
	adds r1, r1, r6	@ 000a68cc 8919
.org 0xa68ce
	lsls r1, r1, #1	@ 000a68ce 4900
.org 0xa68d0
	lsrs r0, r1, #1	@ 000a68d0 4808
.org 0xa68d2
	str r0, [r4, #0]	@ 000a68d2 2060
.org 0xa68d4
	lsrs r1, r1, #17	@ 000a68d4 490c
.org 0xa68d6
	ands r1, r5	@ 000a68d6 2940
.org 0xa68d8
	lsls r1, r1, #8	@ 000a68d8 0902
.org 0xa68da
	ldr r0, [r7, #84]	@ 000a68da 786d
.org 0xa68dc
	adds r0, r0, r1	@ 000a68dc 4018
.org 0xa68de
	ldr r1, [r7, #88]	@ 000a68de b96d
.org 0xa68e0
	movs r2, #0	@ 000a68e0 0022
.org 0xa68e2
	bl 0xd0ff4	@ 000a68e2 2af087fb
.org 0xa68e6
	b.n 0xa691c	@ 000a68e6 19e0
.org 0xa68e8
	.byte 0x38,0xdc,0x02,0x02	@ 000a68e8 data
.org 0xa68ec
	.byte 0xfd,0x43,0x03,0x00	@ 000a68ec data
.org 0xa68f0
	.byte 0xc3,0x9e,0x26,0x00	@ 000a68f0 data
.org 0xa68f4
	ldr r2, [pc, #28]	@ 000a68f4 074a
.org 0xa68f6
	movs r0, #0	@ 000a68f6 0020
.org 0xa68f8
	adds r1, r7, #0	@ 000a68f8 391c
.org 0xa68fa
	bl 0x2adac	@ 000a68fa 84f757fa
.org 0xa68fe
	str r0, [r7, #44]	@ 000a68fe f862
.org 0xa6900
	cmp r0, #0	@ 000a6900 0028
.org 0xa6902
	beq.n 0xa691c	@ 000a6902 0bd0
.org 0xa6904
	adds r0, r7, #0	@ 000a6904 381c
.org 0xa6906
	adds r0, #116	@ 000a6906 7430
.org 0xa6908
	ldr r1, [pc, #12]	@ 000a6908 0349
.org 0xa690a
	bl 0x5784	@ 000a690a 5ef73bff
.org 0xa690e
	movs r0, #1	@ 000a690e 0120
.org 0xa6910
	b.n 0xa691e	@ 000a6910 05e0
