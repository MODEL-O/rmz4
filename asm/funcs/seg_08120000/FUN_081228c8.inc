@ FUN_081228c8  entry 0x081228c8  size 136
.thumb
.org 0x1228c8
FUN_081228c8:
	push {r4, r5, r6, r7, lr}	@ 001228c8 f0b5
.org 0x1228ca
	sub sp, #12	@ 001228ca 83b0
.org 0x1228cc
	adds r6, r0, #0	@ 001228cc 061c
.org 0x1228ce
	ldr r1, [pc, #128]	@ 001228ce 2049
.org 0x1228d0
	add r0, sp, #4	@ 001228d0 01a8
.org 0x1228d2
	movs r2, #6	@ 001228d2 0622
.org 0x1228d4
	bl 0x129258	@ 001228d4 06f0c0fc
.org 0x1228d8
	ldr r0, [pc, #120]	@ 001228d8 1e48
.org 0x1228da
	adds r4, r6, r0	@ 001228da 3418
.org 0x1228dc
	ldr r1, [pc, #120]	@ 001228dc 1e49
.org 0x1228de
	movs r0, #0	@ 001228de 0020
.org 0x1228e0
	str r0, [sp, #0]	@ 001228e0 0090
.org 0x1228e2
	adds r0, r4, #0	@ 001228e2 201c
.org 0x1228e4
	movs r2, #35	@ 001228e4 2322
.org 0x1228e6
	movs r3, #0	@ 001228e6 0023
.org 0x1228e8
	bl 0x27b8	@ 001228e8 dff666ff
.org 0x1228ec
	adds r7, r4, #0	@ 001228ec 271c
.org 0x1228ee
	movs r3, #0	@ 001228ee 0023
.org 0x1228f0
	ldr r1, [pc, #104]	@ 001228f0 1a49
.org 0x1228f2
	adds r4, r6, r1	@ 001228f2 7418
.org 0x1228f4
	movs r0, #160	@ 001228f4 a020
.org 0x1228f6
	lsls r0, r0, #7	@ 001228f6 c001
.org 0x1228f8
	adds r5, r0, #0	@ 001228f8 051c
.org 0x1228fa
	lsls r1, r3, #1	@ 001228fa 5900
.org 0x1228fc
	adds r1, r1, r7	@ 001228fc c919
.org 0x1228fe
	adds r2, r1, #0	@ 001228fe 0a1c
.org 0x122900
	adds r2, #72	@ 00122900 4832
.org 0x122902
	ldrb r0, [r4, #1]	@ 00122902 6078
.org 0x122904
	lsls r0, r0, #1	@ 00122904 4000
.org 0x122906
	add r0, sp	@ 00122906 6844
.org 0x122908
	adds r0, #4	@ 00122908 0430
.org 0x12290a
	ldrh r0, [r0, #0]	@ 0012290a 0088
.org 0x12290c
	adds r0, r0, r3	@ 0012290c c018
.org 0x12290e
	adds r0, r0, r5	@ 0012290e 4019
.org 0x122910
	strh r0, [r2, #0]	@ 00122910 1080
.org 0x122912
	adds r1, #136	@ 00122912 8831
.org 0x122914
	ldrb r0, [r4, #1]	@ 00122914 6078
.org 0x122916
	lsls r0, r0, #1	@ 00122916 4000
.org 0x122918
	add r0, sp	@ 00122918 6844
.org 0x12291a
	adds r0, #4	@ 0012291a 0430
.org 0x12291c
	ldrh r0, [r0, #0]	@ 0012291c 0088
.org 0x12291e
	adds r0, #32	@ 0012291e 2030
.org 0x122920
	adds r0, r0, r3	@ 00122920 c018
.org 0x122922
	adds r0, r0, r5	@ 00122922 4019
.org 0x122924
	strh r0, [r1, #0]	@ 00122924 0880
.org 0x122926
	adds r0, r3, #1	@ 00122926 581c
.org 0x122928
	lsls r0, r0, #24	@ 00122928 0006
.org 0x12292a
	lsrs r3, r0, #24	@ 0012292a 030e
.org 0x12292c
	cmp r3, #3	@ 0012292c 032b
.org 0x12292e
	bls.n 0x1228fa	@ 0012292e e4d9
.org 0x122930
	ldr r1, [pc, #32]	@ 00122930 0849
.org 0x122932
	adds r0, r6, r1	@ 00122932 7018
.org 0x122934
	ldr r1, [pc, #40]	@ 00122934 0a49
.org 0x122936
	ldrh r2, [r1, #0]	@ 00122936 0a88
.org 0x122938
	movs r1, #248	@ 00122938 f821
.org 0x12293a
	lsls r1, r1, #5	@ 0012293a 4901
.org 0x12293c
	ands r1, r2	@ 0012293c 1140
.org 0x12293e
	lsls r1, r1, #3	@ 0012293e c900
.org 0x122940
	movs r2, #128	@ 00122940 8022
.org 0x122942
	lsls r2, r2, #5	@ 00122942 5201
.org 0x122944
	bl 0x1f1c	@ 00122944 dff6eafa
.org 0x122948
	add sp, #12	@ 00122948 03b0
.org 0x12294a
	pop {r4, r5, r6, r7}	@ 0012294a f0bc
.org 0x12294c
	pop {r0}	@ 0012294c 01bc
.org 0x12294e
	bx r0	@ 0012294e 0047
