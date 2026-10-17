@ FUN_08054948  entry 0x08054948  size 110
.thumb
.org 0x54948
FUN_08054948:
	push {r4, lr}	@ 00054948 10b5
.org 0x5494a
	adds r4, r0, #0	@ 0005494a 041c
.org 0x5494c
	ldrb r0, [r4, #15]	@ 0005494c e07b
.org 0x5494e
	cmp r0, #0	@ 0005494e 0028
.org 0x54950
	bne.n 0x54984	@ 00054950 18d1
.org 0x54952
	adds r1, r4, #0	@ 00054952 211c
.org 0x54954
	adds r1, #196	@ 00054954 c431
.org 0x54956
	ldr r0, [r1, #0]	@ 00054956 0868
.org 0x54958
	adds r0, #184	@ 00054958 b830
.org 0x5495a
	movs r3, #8	@ 0005495a 0823
.org 0x5495c
	strb r3, [r0, #0]	@ 0005495c 0370
.org 0x5495e
	ldr r0, [r1, #0]	@ 0005495e 0868
.org 0x54960
	adds r0, #188	@ 00054960 bc30
.org 0x54962
	movs r2, #32	@ 00054962 2022
.org 0x54964
	strh r2, [r0, #0]	@ 00054964 0280
.org 0x54966
	adds r1, #4	@ 00054966 0431
.org 0x54968
	ldr r0, [r1, #0]	@ 00054968 0868
.org 0x5496a
	adds r0, #184	@ 0005496a b830
.org 0x5496c
	strb r3, [r0, #0]	@ 0005496c 0370
.org 0x5496e
	ldr r0, [r1, #0]	@ 0005496e 0868
.org 0x54970
	adds r0, #188	@ 00054970 bc30
.org 0x54972
	strh r2, [r0, #0]	@ 00054972 0280
.org 0x54974
	movs r1, #176	@ 00054974 b021
.org 0x54976
	lsls r1, r1, #6	@ 00054976 8901
.org 0x54978
	adds r0, r4, #0	@ 00054978 201c
.org 0x5497a
	bl 0x1cf00	@ 0005497a c8f7c1fa
.org 0x5497e
	ldrb r0, [r4, #15]	@ 0005497e e07b
.org 0x54980
	adds r0, #1	@ 00054980 0130
.org 0x54982
	strb r0, [r4, #15]	@ 00054982 e073
.org 0x54984
	adds r0, r4, #0	@ 00054984 201c
.org 0x54986
	bl 0x1cff0	@ 00054986 c8f733fb
.org 0x5498a
	adds r0, r4, #0	@ 0005498a 201c
.org 0x5498c
	adds r0, #196	@ 0005498c c430
.org 0x5498e
	ldr r0, [r0, #0]	@ 0005498e 0068
.org 0x54990
	adds r0, #188	@ 00054990 bc30
.org 0x54992
	movs r1, #0	@ 00054992 0021
.org 0x54994
	ldrsh r0, [r0, r1]	@ 00054994 405e
.org 0x54996
	cmp r0, #0	@ 00054996 0028
.org 0x54998
	bne.n 0x549b0	@ 00054998 0ad1
.org 0x5499a
	adds r0, r4, #0	@ 0005499a 201c
.org 0x5499c
	adds r0, #200	@ 0005499c c830
.org 0x5499e
	ldr r0, [r0, #0]	@ 0005499e 0068
.org 0x549a0
	adds r0, #188	@ 000549a0 bc30
.org 0x549a2
	movs r2, #0	@ 000549a2 0022
.org 0x549a4
	ldrsh r1, [r0, r2]	@ 000549a4 815e
.org 0x549a6
	cmp r1, #0	@ 000549a6 0029
.org 0x549a8
	bne.n 0x549b0	@ 000549a8 02d1
.org 0x549aa
	movs r0, #1	@ 000549aa 0120
.org 0x549ac
	strb r0, [r4, #14]	@ 000549ac a073
.org 0x549ae
	strb r1, [r4, #15]	@ 000549ae e173
.org 0x549b0
	pop {r4}	@ 000549b0 10bc
.org 0x549b2
	pop {r0}	@ 000549b2 01bc
.org 0x549b4
	bx r0	@ 000549b4 0047
