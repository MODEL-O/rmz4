@ FUN_081048c8  entry 0x081048c8  size 320
.thumb
.org 0x1048c8
FUN_081048c8:
	push {r4, r5, r6, r7, lr}	@ 001048c8 f0b5
.org 0x1048ca
	mov r7, r8	@ 001048ca 4746
.org 0x1048cc
	push {r7}	@ 001048cc 80b4
.org 0x1048ce
	adds r4, r0, #0	@ 001048ce 041c
.org 0x1048d0
	adds r7, r4, #0	@ 001048d0 271c
.org 0x1048d2
	adds r7, #192	@ 001048d2 c037
.org 0x1048d4
	ldr r6, [r7, #0]	@ 001048d4 3e68
.org 0x1048d6
	ldr r0, [pc, #68]	@ 001048d6 1148
.org 0x1048d8
	mov ip, r0	@ 001048d8 8446
.org 0x1048da
	adds r2, r6, r0	@ 001048da 3218
.org 0x1048dc
	ldrb r5, [r4, #16]	@ 001048dc 257c
.org 0x1048de
	movs r3, #1	@ 001048de 0123
.org 0x1048e0
	adds r1, r3, #0	@ 001048e0 191c
.org 0x1048e2
	lsls r1, r5	@ 001048e2 a940
.org 0x1048e4
	ldr r0, [r2, #36]	@ 001048e4 506a
.org 0x1048e6
	ands r0, r1	@ 001048e6 0840
.org 0x1048e8
	cmp r0, #0	@ 001048e8 0028
.org 0x1048ea
	bne.n 0x104984	@ 001048ea 4bd1
.org 0x1048ec
	adds r0, r4, #0	@ 001048ec 201c
.org 0x1048ee
	adds r0, #180	@ 001048ee b430
.org 0x1048f0
	ldrb r1, [r0, #0]	@ 001048f0 0178
.org 0x1048f2
	mov r8, r0	@ 001048f2 8046
.org 0x1048f4
	cmp r1, #0	@ 001048f4 0029
.org 0x1048f6
	bne.n 0x104968	@ 001048f6 37d1
.org 0x1048f8
	ldr r0, [r2, #40]	@ 001048f8 906a
.org 0x1048fa
	cmp r0, #0	@ 001048fa 0028
.org 0x1048fc
	beq.n 0x104908	@ 001048fc 04d0
.org 0x1048fe
	movs r1, #10	@ 001048fe 0a21
.org 0x104900
	bl 0x129198	@ 00104900 24f04afc
.org 0x104904
	cmp r0, #0	@ 00104904 0028
.org 0x104906
	beq.n 0x104920	@ 00104906 0bd0
.org 0x104908
	adds r0, r4, #0	@ 00104908 201c
.org 0x10490a
	adds r0, #84	@ 0010490a 5430
.org 0x10490c
	lsls r1, r5, #8	@ 0010490c 2902
.org 0x10490e
	movs r3, #223	@ 0010490e df23
.org 0x104910
	lsls r3, r3, #4	@ 00104910 1b01
.org 0x104912
	adds r2, r6, r3	@ 00104912 f218
.org 0x104914
	bl 0xbc46c	@ 00104914 b7f7aafd
.org 0x104918
	b.n 0x104934	@ 00104918 0ce0
.org 0x10491a
	.byte 0x00	@ 0010491a data
.org 0x10491b
	.byte 0x00	@ 0010491b data
.org 0x10491c
	.byte 0xcc,0x0d,0x00,0x00	@ 0010491c data
.org 0x104920
	adds r0, r4, #0	@ 00104920 201c
.org 0x104922
	adds r0, #84	@ 00104922 5430
.org 0x104924
	lsls r1, r5, #8	@ 00104924 2902
.org 0x104926
	movs r2, #1	@ 00104926 0122
.org 0x104928
	orrs r1, r2	@ 00104928 1143
.org 0x10492a
	movs r3, #223	@ 0010492a df23
.org 0x10492c
	lsls r3, r3, #4	@ 0010492c 1b01
.org 0x10492e
	adds r2, r6, r3	@ 0010492e f218
.org 0x104930
	bl 0xbc46c	@ 00104930 b7f79cfd
.org 0x104934
	adds r2, r4, #0	@ 00104934 221c
.org 0x104936
	adds r2, #192	@ 00104936 c032
.org 0x104938
	ldr r1, [r2, #0]	@ 00104938 1168
.org 0x10493a
	ldr r3, [pc, #40]	@ 0010493a 0a4b
.org 0x10493c
	adds r1, r1, r3	@ 0010493c c918
.org 0x10493e
	ldr r0, [r1, #40]	@ 0010493e 886a
.org 0x104940
	adds r0, #1	@ 00104940 0130
.org 0x104942
	str r0, [r1, #40]	@ 00104942 8862
.org 0x104944
	ldr r2, [r2, #0]	@ 00104944 1268
.org 0x104946
	adds r2, r2, r3	@ 00104946 d218
.org 0x104948
	movs r3, #1	@ 00104948 0123
.org 0x10494a
	adds r1, r3, #0	@ 0010494a 191c
.org 0x10494c
	ldrb r0, [r4, #16]	@ 0010494c 207c
.org 0x10494e
	lsls r1, r0	@ 0010494e 8140
.org 0x104950
	ldr r0, [r2, #36]	@ 00104950 506a
.org 0x104952
	orrs r0, r1	@ 00104952 0843
.org 0x104954
	str r0, [r2, #36]	@ 00104954 5062
.org 0x104956
	movs r0, #0	@ 00104956 0020
.org 0x104958
	mov r1, r8	@ 00104958 4146
.org 0x10495a
	strb r3, [r1, #0]	@ 0010495a 0b70
.org 0x10495c
	adds r1, r4, #0	@ 0010495c 211c
.org 0x10495e
	adds r1, #181	@ 0010495e b531
.org 0x104960
	strb r0, [r1, #0]	@ 00104960 0870
.org 0x104962
	b.n 0x104984	@ 00104962 0fe0
.org 0x104964
	.byte 0xcc,0x0d,0x00,0x00	@ 00104964 data
.org 0x104968
	ldrb r0, [r4, #18]	@ 00104968 a07c
.org 0x10496a
	cmp r0, #0	@ 0010496a 0028
.org 0x10496c
	bne.n 0x104984	@ 0010496c 0ad1
.org 0x10496e
	adds r1, r4, #0	@ 0010496e 211c
.org 0x104970
	adds r1, #181	@ 00104970 b531
.org 0x104972
	ldrb r0, [r1, #0]	@ 00104972 0878
.org 0x104974
	cmp r0, #0	@ 00104974 0028
.org 0x104976
	bne.n 0x104984	@ 00104976 05d1
.org 0x104978
	movs r0, #20	@ 00104978 1420
.org 0x10497a
	strb r0, [r4, #18]	@ 0010497a a074
.org 0x10497c
	strb r3, [r1, #0]	@ 0010497c 0b70
.org 0x10497e
	ldr r0, [r7, #0]	@ 0010497e 3868
.org 0x104980
	add r0, ip	@ 00104980 6044
.org 0x104982
	str r3, [r0, #56]	@ 00104982 8363
.org 0x104984
	adds r3, r4, #0	@ 00104984 231c
.org 0x104986
	adds r3, #192	@ 00104986 c033
.org 0x104988
	ldr r0, [r3, #0]	@ 00104988 1868
.org 0x10498a
	ldr r5, [pc, #72]	@ 0010498a 124d
.org 0x10498c
	adds r0, r0, r5	@ 0010498c 4019
.org 0x10498e
	ldr r1, [r0, #36]	@ 0010498e 416a
.org 0x104990
	movs r0, #255	@ 00104990 ff20
.org 0x104992
	ands r1, r0	@ 00104992 0140
.org 0x104994
	cmp r1, #0	@ 00104994 0029
.org 0x104996
	bne.n 0x10499e	@ 00104996 02d1
.org 0x104998
	adds r0, r4, #0	@ 00104998 201c
.org 0x10499a
	adds r0, #180	@ 0010499a b430
.org 0x10499c
	strb r1, [r0, #0]	@ 0010499c 0170
.org 0x10499e
	ldrb r0, [r4, #18]	@ 0010499e a07c
.org 0x1049a0
	adds r2, r0, #0	@ 001049a0 021c
.org 0x1049a2
	cmp r2, #0	@ 001049a2 002a
.org 0x1049a4
	beq.n 0x104a00	@ 001049a4 2cd0
.org 0x1049a6
	subs r0, #1	@ 001049a6 0138
.org 0x1049a8
	strb r0, [r4, #18]	@ 001049a8 a074
.org 0x1049aa
	movs r1, #1	@ 001049aa 0121
.org 0x1049ac
	ands r0, r1	@ 001049ac 0840
.org 0x1049ae
	cmp r0, #0	@ 001049ae 0028
.org 0x1049b0
	beq.n 0x104a0c	@ 001049b0 2cd0
.org 0x1049b2
	adds r0, r4, #0	@ 001049b2 201c
.org 0x1049b4
	adds r0, #182	@ 001049b4 b630
.org 0x1049b6
	ldrb r1, [r0, #0]	@ 001049b6 0178
.org 0x1049b8
	adds r2, r0, #0	@ 001049b8 021c
.org 0x1049ba
	cmp r1, #0	@ 001049ba 0029
.org 0x1049bc
	beq.n 0x104a0c	@ 001049bc 26d0
.org 0x1049be
	cmp r1, #1	@ 001049be 0129
.org 0x1049c0
	bne.n 0x1049d8	@ 001049c0 0ad1
.org 0x1049c2
	ldr r0, [r3, #0]	@ 001049c2 1868
.org 0x1049c4
	adds r0, r0, r5	@ 001049c4 4019
.org 0x1049c6
	ldr r1, [r0, #0]	@ 001049c6 0168
.org 0x1049c8
	movs r3, #222	@ 001049c8 de23
.org 0x1049ca
	lsls r3, r3, #1	@ 001049ca 5b00
.org 0x1049cc
	adds r1, r1, r3	@ 001049cc c918
.org 0x1049ce
	ldr r0, [r1, #0]	@ 001049ce 0868
.org 0x1049d0
	adds r3, #68	@ 001049d0 4433
.org 0x1049d2
	b.n 0x1049e8	@ 001049d2 09e0
.org 0x1049d4
	.byte 0xcc,0x0d,0x00,0x00	@ 001049d4 data
.org 0x1049d8
	ldr r0, [r3, #0]	@ 001049d8 1868
.org 0x1049da
	adds r0, r0, r5	@ 001049da 4019
.org 0x1049dc
	ldr r1, [r0, #0]	@ 001049dc 0168
.org 0x1049de
	movs r0, #222	@ 001049de de20
.org 0x1049e0
	lsls r0, r0, #1	@ 001049e0 4000
.org 0x1049e2
	adds r1, r1, r0	@ 001049e2 0918
.org 0x1049e4
	ldr r0, [r1, #0]	@ 001049e4 0868
.org 0x1049e6
	ldr r3, [pc, #20]	@ 001049e6 054b
.org 0x1049e8
	adds r0, r0, r3	@ 001049e8 c018
.org 0x1049ea
	str r0, [r1, #0]	@ 001049ea 0860
.org 0x1049ec
	ldrb r0, [r2, #0]	@ 001049ec 1078
.org 0x1049ee
	subs r0, #1	@ 001049ee 0138
.org 0x1049f0
	movs r1, #1	@ 001049f0 0121
.org 0x1049f2
	eors r0, r1	@ 001049f2 4840
.org 0x1049f4
	adds r0, #1	@ 001049f4 0130
.org 0x1049f6
	strb r0, [r2, #0]	@ 001049f6 1070
.org 0x1049f8
	b.n 0x104a0c	@ 001049f8 08e0
.org 0x1049fa
	.byte 0x00	@ 001049fa data
.org 0x1049fb
	.byte 0x00	@ 001049fb data
.org 0x1049fc
	.byte 0x00,0xfe,0xff,0xff	@ 001049fc data
.org 0x104a00
	adds r1, r4, #0	@ 00104a00 211c
.org 0x104a02
	adds r1, #182	@ 00104a02 b631
.org 0x104a04
	ldrb r0, [r1, #0]	@ 00104a04 0878
.org 0x104a06
	cmp r0, #0	@ 00104a06 0028
