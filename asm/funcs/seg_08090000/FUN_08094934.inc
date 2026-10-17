@ FUN_08094934  entry 0x08094934  size 250
.thumb
.org 0x94934
FUN_08094934:
	push {r4, r5, r6, r7, lr}	@ 00094934 f0b5
.org 0x94936
	mov r7, r9	@ 00094936 4f46
.org 0x94938
	mov r6, r8	@ 00094938 4646
.org 0x9493a
	push {r6, r7}	@ 0009493a c0b4
.org 0x9493c
	sub sp, #8	@ 0009493c 82b0
.org 0x9493e
	movs r2, #224	@ 0009493e e022
.org 0x94940
	lsls r2, r2, #3	@ 00094940 d200
.org 0x94942
	adds r6, r1, r2	@ 00094942 8e18
.org 0x94944
	str r6, [sp, #0]	@ 00094944 0096
.org 0x94946
	ldr r1, [r0, #88]	@ 00094946 816d
.org 0x94948
	ldr r2, [pc, #100]	@ 00094948 194a
.org 0x9494a
	adds r2, r2, r1	@ 0009494a 5218
.org 0x9494c
	mov r8, r2	@ 0009494c 9046
.org 0x9494e
	str r2, [sp, #4]	@ 0009494e 0192
.org 0x94950
	movs r2, #1	@ 00094950 0122
.org 0x94952
	mov r9, r2	@ 00094952 9146
.org 0x94954
	ldr r0, [r0, #84]	@ 00094954 406d
.org 0x94956
	bl 0x7020	@ 00094956 72f763fb
.org 0x9495a
	lsls r0, r0, #16	@ 0009495a 0004
.org 0x9495c
	lsrs r2, r0, #16	@ 0009495c 020c
.org 0x9495e
	movs r0, #15	@ 0009495e 0f20
.org 0x94960
	ands r2, r0	@ 00094960 0240
.org 0x94962
	subs r0, r2, #2	@ 00094962 901e
.org 0x94964
	lsls r0, r0, #16	@ 00094964 0004
.org 0x94966
	lsrs r0, r0, #16	@ 00094966 000c
.org 0x94968
	cmp r0, #5	@ 00094968 0528
.org 0x9496a
	bhi.n 0x949b4	@ 0009496a 23d8
.org 0x9496c
	adds r4, r6, #0	@ 0009496c 341c
.org 0x9496e
	movs r7, #0	@ 0009496e 0027
.org 0x94970
	mov r6, r8	@ 00094970 4646
.org 0x94972
	adds r0, r4, #0	@ 00094972 201c
.org 0x94974
	adds r1, r6, #0	@ 00094974 311c
.org 0x94976
	bl 0x7020	@ 00094976 72f753fb
.org 0x9497a
	lsls r0, r0, #16	@ 0009497a 0004
.org 0x9497c
	lsrs r2, r0, #16	@ 0009497c 020c
.org 0x9497e
	cmp r2, #0	@ 0009497e 002a
.org 0x94980
	beq.n 0x949a2	@ 00094980 0fd0
.org 0x94982
	movs r0, #128	@ 00094982 8020
.org 0x94984
	lsls r0, r0, #8	@ 00094984 0002
.org 0x94986
	adds r1, r0, #0	@ 00094986 011c
.org 0x94988
	adds r0, r2, #0	@ 00094988 101c
.org 0x9498a
	ands r0, r1	@ 0009498a 0840
.org 0x9498c
	cmp r0, #0	@ 0009498c 0028
.org 0x9498e
	bne.n 0x949a2	@ 0009498e 08d1
.org 0x94990
	movs r0, #15	@ 00094990 0f20
.org 0x94992
	ands r0, r2	@ 00094992 1040
.org 0x94994
	cmp r0, #15	@ 00094994 0f28
.org 0x94996
	beq.n 0x949a2	@ 00094996 04d0
.org 0x94998
	subs r0, #2	@ 00094998 0238
.org 0x9499a
	lsls r0, r0, #16	@ 0009499a 0004
.org 0x9499c
	lsrs r0, r0, #16	@ 0009499c 000c
.org 0x9499e
	cmp r0, #5	@ 0009499e 0528
.org 0x949a0
	bhi.n 0x94a1e	@ 000949a0 3dd8
.org 0x949a2
	movs r1, #128	@ 000949a2 8021
.org 0x949a4
	lsls r1, r1, #5	@ 000949a4 4901
.org 0x949a6
	adds r6, r6, r1	@ 000949a6 7618
.org 0x949a8
	adds r7, #1	@ 000949a8 0137
.org 0x949aa
	cmp r7, r9	@ 000949aa 4f45
.org 0x949ac
	ble.n 0x94972	@ 000949ac e1dd
.org 0x949ae
	b.n 0x94a28	@ 000949ae 3be0
.org 0x949b0
	.byte 0x00,0xe0,0xff,0xff	@ 000949b0 data
.org 0x949b4
	adds r4, r6, #0	@ 000949b4 341c
.org 0x949b6
	movs r7, #0	@ 000949b6 0027
.org 0x949b8
	mov r6, r8	@ 000949b8 4646
.org 0x949ba
	movs r2, #128	@ 000949ba 8022
.org 0x949bc
	lsls r2, r2, #8	@ 000949bc 1202
.org 0x949be
	mov r8, r2	@ 000949be 9046
.org 0x949c0
	adds r0, r4, #0	@ 000949c0 201c
.org 0x949c2
	adds r1, r6, #0	@ 000949c2 311c
.org 0x949c4
	bl 0x7020	@ 000949c4 72f72cfb
.org 0x949c8
	lsls r0, r0, #16	@ 000949c8 0004
.org 0x949ca
	lsrs r2, r0, #16	@ 000949ca 020c
.org 0x949cc
	cmp r2, #0	@ 000949cc 002a
.org 0x949ce
	beq.n 0x949e2	@ 000949ce 08d0
.org 0x949d0
	adds r0, r2, #0	@ 000949d0 101c
.org 0x949d2
	mov r1, r8	@ 000949d2 4146
.org 0x949d4
	ands r0, r1	@ 000949d4 0840
.org 0x949d6
	cmp r0, #0	@ 000949d6 0028
.org 0x949d8
	bne.n 0x949e2	@ 000949d8 03d1
.org 0x949da
	movs r0, #15	@ 000949da 0f20
.org 0x949dc
	ands r2, r0	@ 000949dc 0240
.org 0x949de
	cmp r2, #15	@ 000949de 0f2a
.org 0x949e0
	bne.n 0x94a1e	@ 000949e0 1dd1
.org 0x949e2
	movs r2, #128	@ 000949e2 8022
.org 0x949e4
	lsls r2, r2, #5	@ 000949e4 5201
.org 0x949e6
	adds r6, r6, r2	@ 000949e6 b618
.org 0x949e8
	adds r7, #1	@ 000949e8 0137
.org 0x949ea
	cmp r7, r9	@ 000949ea 4f45
.org 0x949ec
	ble.n 0x949c0	@ 000949ec e8dd
.org 0x949ee
	ldr r0, [sp, #4]	@ 000949ee 0198
.org 0x949f0
	ldr r2, [pc, #48]	@ 000949f0 0c4a
.org 0x949f2
	adds r1, r0, r2	@ 000949f2 8118
.org 0x949f4
	ldr r0, [sp, #0]	@ 000949f4 0098
.org 0x949f6
	bl 0x7c7c	@ 000949f6 73f741f9
.org 0x949fa
	lsls r0, r0, #16	@ 000949fa 0004
.org 0x949fc
	lsrs r2, r0, #16	@ 000949fc 020c
.org 0x949fe
	cmp r2, #0	@ 000949fe 002a
.org 0x94a00
	beq.n 0x94a28	@ 00094a00 12d0
.org 0x94a02
	movs r0, #128	@ 00094a02 8020
.org 0x94a04
	lsls r0, r0, #8	@ 00094a04 0002
.org 0x94a06
	ands r0, r2	@ 00094a06 1040
.org 0x94a08
	cmp r0, #0	@ 00094a08 0028
.org 0x94a0a
	bne.n 0x94a28	@ 00094a0a 0dd1
.org 0x94a0c
	movs r0, #15	@ 00094a0c 0f20
.org 0x94a0e
	ands r0, r2	@ 00094a0e 1040
.org 0x94a10
	cmp r0, #15	@ 00094a10 0f28
.org 0x94a12
	beq.n 0x94a28	@ 00094a12 09d0
.org 0x94a14
	subs r0, #2	@ 00094a14 0238
.org 0x94a16
	lsls r0, r0, #16	@ 00094a16 0004
.org 0x94a18
	lsrs r0, r0, #16	@ 00094a18 000c
.org 0x94a1a
	cmp r0, #5	@ 00094a1a 0528
.org 0x94a1c
	bls.n 0x94a28	@ 00094a1c 04d9
.org 0x94a1e
	movs r0, #1	@ 00094a1e 0120
.org 0x94a20
	b.n 0x94a2a	@ 00094a20 03e0
.org 0x94a22
	.byte 0x00	@ 00094a22 data
.org 0x94a23
	.byte 0x00	@ 00094a23 data
.org 0x94a24
	.byte 0xff,0x1f,0x00,0x00	@ 00094a24 data
.org 0x94a28
	movs r0, #0	@ 00094a28 0020
.org 0x94a2a
	add sp, #8	@ 00094a2a 02b0
.org 0x94a2c
	pop {r3, r4}	@ 00094a2c 18bc
