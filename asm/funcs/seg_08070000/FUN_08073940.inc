@ FUN_08073940  entry 0x08073940  size 128
.thumb
.org 0x73940
FUN_08073940:
	push {r4, r5, r6, r7, lr}	@ 00073940 f0b5
.org 0x73942
	mov r7, r9	@ 00073942 4f46
.org 0x73944
	mov r6, r8	@ 00073944 4646
.org 0x73946
	push {r6, r7}	@ 00073946 c0b4
.org 0x73948
	sub sp, #16	@ 00073948 84b0
.org 0x7394a
	mov r8, r0	@ 0007394a 8046
.org 0x7394c
	movs r0, #160	@ 0007394c a020
.org 0x7394e
	lsls r0, r0, #4	@ 0007394e 0001
.org 0x73950
	mov r9, r0	@ 00073950 8146
.org 0x73952
	mov r1, r8	@ 00073952 4146
.org 0x73954
	ldr r0, [r1, #84]	@ 00073954 486d
.org 0x73956
	str r0, [sp, #0]	@ 00073956 0090
.org 0x73958
	ldr r1, [r1, #88]	@ 00073958 896d
.org 0x7395a
	ldr r2, [pc, #100]	@ 0007395a 194a
.org 0x7395c
	adds r2, r1, r2	@ 0007395c 8a18
.org 0x7395e
	str r2, [sp, #4]	@ 0007395e 0192
.org 0x73960
	ldr r4, [pc, #96]	@ 00073960 184c
.org 0x73962
	adds r6, r0, #0	@ 00073962 061c
.org 0x73964
	add r6, r9	@ 00073964 4e44
.org 0x73966
	ldr r0, [pc, #96]	@ 00073966 1848
.org 0x73968
	adds r2, r1, r0	@ 00073968 0a18
.org 0x7396a
	movs r3, #1	@ 0007396a 0123
.org 0x7396c
	adds r7, r2, #0	@ 0007396c 171c
.org 0x7396e
	adds r0, r6, #0	@ 0007396e 301c
.org 0x73970
	adds r1, r2, #0	@ 00073970 111c
.org 0x73972
	str r2, [sp, #8]	@ 00073972 0292
.org 0x73974
	str r3, [sp, #12]	@ 00073974 0393
.org 0x73976
	bl 0x8868	@ 00073976 94f777ff
.org 0x7397a
	mov r1, r9	@ 0007397a 4946
.org 0x7397c
	subs r0, r0, r1	@ 0007397c 401a
.org 0x7397e
	ldr r2, [sp, #8]	@ 0007397e 029a
.org 0x73980
	ldr r3, [sp, #12]	@ 00073980 039b
.org 0x73982
	cmp r0, r4	@ 00073982 a042
.org 0x73984
	bge.n 0x73988	@ 00073984 00da
.org 0x73986
	adds r4, r0, #0	@ 00073986 041c
.org 0x73988
	movs r0, #128	@ 00073988 8020
.org 0x7398a
	lsls r0, r0, #5	@ 0007398a 4001
.org 0x7398c
	adds r2, r2, r0	@ 0007398c 1218
.org 0x7398e
	subs r3, #1	@ 0007398e 013b
.org 0x73990
	cmp r3, #0	@ 00073990 002b
.org 0x73992
	bge.n 0x7396c	@ 00073992 ebda
.org 0x73994
	ldr r2, [sp, #4]	@ 00073994 019a
.org 0x73996
	movs r0, #224	@ 00073996 e020
.org 0x73998
	lsls r0, r0, #4	@ 00073998 0001
.org 0x7399a
	adds r1, r2, r0	@ 0007399a 1118
.org 0x7399c
	adds r7, r1, #0	@ 0007399c 0f1c
.org 0x7399e
	adds r0, r6, #0	@ 0007399e 301c
.org 0x739a0
	bl 0x8868	@ 000739a0 94f762ff
.org 0x739a4
	mov r1, r9	@ 000739a4 4946
.org 0x739a6
	subs r0, r0, r1	@ 000739a6 401a
.org 0x739a8
	cmp r0, r4	@ 000739a8 a042
.org 0x739aa
	bge.n 0x739ae	@ 000739aa 00da
.org 0x739ac
	adds r4, r0, #0	@ 000739ac 041c
.org 0x739ae
	mov r2, r8	@ 000739ae 4246
.org 0x739b0
	str r4, [r2, #84]	@ 000739b0 5465
.org 0x739b2
	add sp, #16	@ 000739b2 04b0
.org 0x739b4
	pop {r3, r4}	@ 000739b4 18bc
.org 0x739b6
	mov r8, r3	@ 000739b6 9846
.org 0x739b8
	mov r9, r4	@ 000739b8 a146
.org 0x739ba
	pop {r4, r5, r6, r7}	@ 000739ba f0bc
.org 0x739bc
	pop {r0}	@ 000739bc 01bc
.org 0x739be
	bx r0	@ 000739be 0047
