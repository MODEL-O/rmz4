@ FUN_080e88dc  entry 0x080e88dc  size 300
.thumb
.org 0xe88dc
FUN_080e88dc:
	push {r4, r5, r6, r7, lr}	@ 000e88dc f0b5
.org 0xe88de
	mov r7, sl	@ 000e88de 5746
.org 0xe88e0
	mov r6, r9	@ 000e88e0 4e46
.org 0xe88e2
	mov r5, r8	@ 000e88e2 4546
.org 0xe88e4
	push {r5, r6, r7}	@ 000e88e4 e0b4
.org 0xe88e6
	sub sp, #8	@ 000e88e6 82b0
.org 0xe88e8
	str r0, [sp, #0]	@ 000e88e8 0090
.org 0xe88ea
	lsls r1, r1, #24	@ 000e88ea 0906
.org 0xe88ec
	lsrs r1, r1, #24	@ 000e88ec 090e
.org 0xe88ee
	adds r4, r1, #0	@ 000e88ee 0c1c
.org 0xe88f0
	lsls r2, r2, #24	@ 000e88f0 1206
.org 0xe88f2
	lsls r3, r3, #24	@ 000e88f2 1b06
.org 0xe88f4
	lsrs r7, r3, #24	@ 000e88f4 1f0e
.org 0xe88f6
	lsrs r2, r2, #24	@ 000e88f6 120e
.org 0xe88f8
	cmp r1, #255	@ 000e88f8 ff29
.org 0xe88fa
	bne.n 0xe88fe	@ 000e88fa 00d1
.org 0xe88fc
	b.n 0xe8a10	@ 000e88fc 88e0
.org 0xe88fe
	cmp r1, #8	@ 000e88fe 0829
.org 0xe8900
	bne.n 0xe8908	@ 000e8900 02d1
.org 0xe8902
	adds r2, #1	@ 000e8902 0132
.org 0xe8904
	movs r0, #1	@ 000e8904 0120
.org 0xe8906
	ands r2, r0	@ 000e8906 0240
.org 0xe8908
	ldr r1, [pc, #124]	@ 000e8908 1f49
.org 0xe890a
	lsls r0, r4, #1	@ 000e890a 6000
.org 0xe890c
	adds r0, r2, r0	@ 000e890c 1018
.org 0xe890e
	adds r0, r0, r1	@ 000e890e 4018
.org 0xe8910
	ldrb r0, [r0, #0]	@ 000e8910 0078
.org 0xe8912
	str r0, [sp, #4]	@ 000e8912 0190
.org 0xe8914
	cmp r2, #0	@ 000e8914 002a
.org 0xe8916
	beq.n 0xe89a0	@ 000e8916 43d0
.org 0xe8918
	movs r5, #0	@ 000e8918 0025
.org 0xe891a
	lsls r6, r7, #1	@ 000e891a 7e00
.org 0xe891c
	ldr r0, [pc, #108]	@ 000e891c 1b48
.org 0xe891e
	mov sl, r0	@ 000e891e 8246
.org 0xe8920
	ldr r2, [pc, #108]	@ 000e8920 1b4a
.org 0xe8922
	mov r9, r2	@ 000e8922 9146
.org 0xe8924
	ldr r4, [pc, #108]	@ 000e8924 1b4c
.org 0xe8926
	mov r8, r4	@ 000e8926 a046
.org 0xe8928
	ldr r0, [pc, #108]	@ 000e8928 1b48
.org 0xe892a
	adds r0, r5, r0	@ 000e892a 2818
.org 0xe892c
	ldrb r1, [r0, #0]	@ 000e892c 0178
.org 0xe892e
	ldr r0, [sp, #4]	@ 000e892e 0198
.org 0xe8930
	adds r1, r0, r1	@ 000e8930 4118
.org 0xe8932
	mov r2, sl	@ 000e8932 5246
.org 0xe8934
	ldr r0, [r2, #0]	@ 000e8934 1068
.org 0xe8936
	mov r4, r9	@ 000e8936 4c46
.org 0xe8938
	muls r4, r0	@ 000e8938 4443
.org 0xe893a
	adds r0, r4, #0	@ 000e893a 201c
.org 0xe893c
	add r0, r8	@ 000e893c 4044
.org 0xe893e
	lsls r0, r0, #1	@ 000e893e 4000
.org 0xe8940
	lsrs r4, r0, #1	@ 000e8940 4408
.org 0xe8942
	lsrs r0, r0, #17	@ 000e8942 400c
.org 0xe8944
	movs r2, #15	@ 000e8944 0f22
.org 0xe8946
	ands r0, r2	@ 000e8946 1040
.org 0xe8948
	subs r0, #8	@ 000e8948 0838
.org 0xe894a
	subs r1, r1, r0	@ 000e894a 091a
.org 0xe894c
	lsls r1, r1, #24	@ 000e894c 0906
.org 0xe894e
	lsrs r1, r1, #24	@ 000e894e 090e
.org 0xe8950
	lsls r3, r5, #1	@ 000e8950 6b00
.org 0xe8952
	adds r0, r6, r7	@ 000e8952 f019
.org 0xe8954
	lsls r0, r0, #3	@ 000e8954 c000
.org 0xe8956
	adds r3, r3, r0	@ 000e8956 1b18
.org 0xe8958
	ldr r0, [pc, #64]	@ 000e8958 1048
.org 0xe895a
	adds r3, r3, r0	@ 000e895a 1b18
.org 0xe895c
	mov r2, r9	@ 000e895c 4a46
.org 0xe895e
	muls r2, r4	@ 000e895e 6243
.org 0xe8960
	add r2, r8	@ 000e8960 4244
.org 0xe8962
	lsls r2, r2, #1	@ 000e8962 5200
.org 0xe8964
	lsrs r0, r2, #1	@ 000e8964 5008
.org 0xe8966
	mov r4, sl	@ 000e8966 5446
.org 0xe8968
	str r0, [r4, #0]	@ 000e8968 2060
.org 0xe896a
	lsls r2, r2, #6	@ 000e896a 9201
.org 0xe896c
	lsrs r2, r2, #23	@ 000e896c d20d
.org 0xe896e
	ldrh r3, [r3, #0]	@ 000e896e 1b88
.org 0xe8970
	adds r2, r2, r3	@ 000e8970 d218
.org 0xe8972
	lsls r2, r2, #16	@ 000e8972 1204
.org 0xe8974
	lsrs r2, r2, #16	@ 000e8974 120c
.org 0xe8976
	ldr r0, [sp, #0]	@ 000e8976 0098
.org 0xe8978
	bl 0xe8840	@ 000e8978 fff762ff
.org 0xe897c
	adds r0, r5, #1	@ 000e897c 681c
.org 0xe897e
	lsls r0, r0, #24	@ 000e897e 0006
.org 0xe8980
	lsrs r5, r0, #24	@ 000e8980 050e
.org 0xe8982
	cmp r5, #7	@ 000e8982 072d
.org 0xe8984
	bls.n 0xe8928	@ 000e8984 d0d9
.org 0xe8986
	b.n 0xe8a10	@ 000e8986 43e0
.org 0xe8988
	.byte 0x3c,0x92,0x86,0x08	@ 000e8988 data
.org 0xe898c
	.byte 0x38,0xdc,0x02,0x02	@ 000e898c data
.org 0xe8990
	.byte 0xfd,0x43,0x03,0x00	@ 000e8990 data
.org 0xe8994
	.byte 0xc3,0x9e,0x26,0x00	@ 000e8994 data
.org 0xe8998
	.byte 0x4e,0x92,0x86,0x08	@ 000e8998 data
.org 0xe899c
	.byte 0x0c,0x92,0x86,0x08	@ 000e899c data
.org 0xe89a0
	movs r5, #0	@ 000e89a0 0025
.org 0xe89a2
	lsls r6, r7, #1	@ 000e89a2 7e00
.org 0xe89a4
	ldr r0, [pc, #120]	@ 000e89a4 1e48
.org 0xe89a6
	mov sl, r0	@ 000e89a6 8246
.org 0xe89a8
	ldr r2, [pc, #120]	@ 000e89a8 1e4a
.org 0xe89aa
	mov r9, r2	@ 000e89aa 9146
.org 0xe89ac
	ldr r4, [pc, #120]	@ 000e89ac 1e4c
.org 0xe89ae
	mov r8, r4	@ 000e89ae a046
.org 0xe89b0
	ldr r0, [pc, #120]	@ 000e89b0 1e48
.org 0xe89b2
	adds r0, r5, r0	@ 000e89b2 2818
.org 0xe89b4
	ldrb r1, [r0, #0]	@ 000e89b4 0178
.org 0xe89b6
	ldr r0, [sp, #4]	@ 000e89b6 0198
.org 0xe89b8
	subs r1, r0, r1	@ 000e89b8 411a
.org 0xe89ba
	mov r2, sl	@ 000e89ba 5246
.org 0xe89bc
	ldr r0, [r2, #0]	@ 000e89bc 1068
.org 0xe89be
	mov r4, r9	@ 000e89be 4c46
.org 0xe89c0
	muls r4, r0	@ 000e89c0 4443
.org 0xe89c2
	adds r0, r4, #0	@ 000e89c2 201c
.org 0xe89c4
	add r0, r8	@ 000e89c4 4044
.org 0xe89c6
	lsls r0, r0, #1	@ 000e89c6 4000
.org 0xe89c8
	lsrs r4, r0, #1	@ 000e89c8 4408
.org 0xe89ca
	lsrs r0, r0, #17	@ 000e89ca 400c
.org 0xe89cc
	movs r2, #15	@ 000e89cc 0f22
.org 0xe89ce
	ands r0, r2	@ 000e89ce 1040
.org 0xe89d0
	subs r0, #8	@ 000e89d0 0838
.org 0xe89d2
	subs r1, r1, r0	@ 000e89d2 091a
.org 0xe89d4
	lsls r1, r1, #24	@ 000e89d4 0906
.org 0xe89d6
	lsrs r1, r1, #24	@ 000e89d6 090e
.org 0xe89d8
	lsls r3, r5, #1	@ 000e89d8 6b00
.org 0xe89da
	adds r0, r6, r7	@ 000e89da f019
.org 0xe89dc
	lsls r0, r0, #3	@ 000e89dc c000
.org 0xe89de
	adds r3, r3, r0	@ 000e89de 1b18
.org 0xe89e0
	ldr r0, [pc, #76]	@ 000e89e0 1348
.org 0xe89e2
	adds r3, r3, r0	@ 000e89e2 1b18
.org 0xe89e4
	mov r2, r9	@ 000e89e4 4a46
.org 0xe89e6
	muls r2, r4	@ 000e89e6 6243
.org 0xe89e8
	add r2, r8	@ 000e89e8 4244
.org 0xe89ea
	lsls r2, r2, #1	@ 000e89ea 5200
.org 0xe89ec
	lsrs r0, r2, #1	@ 000e89ec 5008
.org 0xe89ee
	mov r4, sl	@ 000e89ee 5446
.org 0xe89f0
	str r0, [r4, #0]	@ 000e89f0 2060
.org 0xe89f2
	lsrs r2, r2, #17	@ 000e89f2 520c
.org 0xe89f4
	movs r0, #255	@ 000e89f4 ff20
.org 0xe89f6
	ands r2, r0	@ 000e89f6 0240
.org 0xe89f8
	ldrh r3, [r3, #0]	@ 000e89f8 1b88
.org 0xe89fa
	adds r2, r2, r3	@ 000e89fa d218
.org 0xe89fc
	lsls r2, r2, #16	@ 000e89fc 1204
.org 0xe89fe
	lsrs r2, r2, #16	@ 000e89fe 120c
.org 0xe8a00
	ldr r0, [sp, #0]	@ 000e8a00 0098
.org 0xe8a02
	bl 0xe8840	@ 000e8a02 fff71dff
.org 0xe8a06
	adds r0, r5, #1	@ 000e8a06 681c
