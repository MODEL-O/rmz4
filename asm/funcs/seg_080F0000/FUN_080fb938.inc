@ FUN_080fb938  entry 0x080fb938  size 188
.thumb
.org 0xfb938
FUN_080fb938:
	push {r4, r5, r6, lr}	@ 000fb938 70b5
.org 0xfb93a
	mov r6, r8	@ 000fb93a 4646
.org 0xfb93c
	push {r6}	@ 000fb93c 40b4
.org 0xfb93e
	adds r4, r0, #0	@ 000fb93e 041c
.org 0xfb940
	bl 0x1cc9c	@ 000fb940 21f7acf9
.org 0xfb944
	ldrb r1, [r4, #10]	@ 000fb944 a17a
.org 0xfb946
	movs r0, #1	@ 000fb946 0120
.org 0xfb948
	orrs r0, r1	@ 000fb948 0843
.org 0xfb94a
	movs r1, #2	@ 000fb94a 0221
.org 0xfb94c
	orrs r0, r1	@ 000fb94c 0843
.org 0xfb94e
	strb r0, [r4, #10]	@ 000fb94e a072
.org 0xfb950
	adds r0, r4, #0	@ 000fb950 201c
.org 0xfb952
	bl 0x1ceec	@ 000fb952 21f7cbfa
.org 0xfb956
	movs r1, #196	@ 000fb956 c421
.org 0xfb958
	lsls r1, r1, #8	@ 000fb958 0902
.org 0xfb95a
	adds r0, r4, #0	@ 000fb95a 201c
.org 0xfb95c
	bl 0x1cf00	@ 000fb95c 21f7d0fa
.org 0xfb960
	adds r0, r4, #0	@ 000fb960 201c
.org 0xfb962
	bl 0x1cff0	@ 000fb962 21f745fb
.org 0xfb966
	movs r6, #0	@ 000fb966 0026
.org 0xfb968
	ldrb r1, [r4, #10]	@ 000fb968 a17a
.org 0xfb96a
	movs r0, #239	@ 000fb96a ef20
.org 0xfb96c
	ands r0, r1	@ 000fb96c 0840
.org 0xfb96e
	strb r0, [r4, #10]	@ 000fb96e a072
.org 0xfb970
	movs r0, #1	@ 000fb970 0120
.org 0xfb972
	mov r8, r0	@ 000fb972 8046
.org 0xfb974
	adds r0, r4, #0	@ 000fb974 201c
.org 0xfb976
	adds r0, #76	@ 000fb976 4c30
.org 0xfb978
	strb r6, [r0, #0]	@ 000fb978 0670
.org 0xfb97a
	adds r2, r4, #0	@ 000fb97a 221c
.org 0xfb97c
	adds r2, #74	@ 000fb97c 4a32
.org 0xfb97e
	ldrb r1, [r2, #0]	@ 000fb97e 1178
.org 0xfb980
	movs r0, #17	@ 000fb980 1120
.org 0xfb982
	negs r0, r0	@ 000fb982 4042
.org 0xfb984
	ands r0, r1	@ 000fb984 0840
.org 0xfb986
	strb r0, [r2, #0]	@ 000fb986 1070
.org 0xfb988
	ldrb r1, [r4, #10]	@ 000fb988 a17a
.org 0xfb98a
	movs r0, #4	@ 000fb98a 0420
.org 0xfb98c
	orrs r0, r1	@ 000fb98c 0843
.org 0xfb98e
	strb r0, [r4, #10]	@ 000fb98e a072
.org 0xfb990
	adds r5, r4, #0	@ 000fb990 251c
.org 0xfb992
	adds r5, #116	@ 000fb992 7435
.org 0xfb994
	ldr r1, [pc, #92]	@ 000fb994 1749
.org 0xfb996
	adds r2, #10	@ 000fb996 0a32
.org 0xfb998
	adds r0, r5, #0	@ 000fb998 281c
.org 0xfb99a
	movs r3, #8	@ 000fb99a 0823
.org 0xfb99c
	bl 0x5760	@ 000fb99c 09f7e0fe
.org 0xfb9a0
	str r4, [r5, #44]	@ 000fb9a0 ec62
.org 0xfb9a2
	str r6, [r5, #36]	@ 000fb9a2 6e62
.org 0xfb9a4
	ldr r0, [r4, #84]	@ 000fb9a4 606d
.org 0xfb9a6
	ldr r1, [r4, #88]	@ 000fb9a6 a16d
.org 0xfb9a8
	bl 0x8534	@ 000fb9a8 0cf7c4fd
.org 0xfb9ac
	movs r1, #128	@ 000fb9ac 8021
.org 0xfb9ae
	lsls r1, r1, #1	@ 000fb9ae 4900
.org 0xfb9b0
	adds r0, r0, r1	@ 000fb9b0 4018
.org 0xfb9b2
	str r0, [r4, #88]	@ 000fb9b2 a065
.org 0xfb9b4
	adds r1, r4, #0	@ 000fb9b4 211c
.org 0xfb9b6
	adds r1, #180	@ 000fb9b6 b431
.org 0xfb9b8
	ldr r0, [r4, #84]	@ 000fb9b8 606d
.org 0xfb9ba
	str r0, [r1, #0]	@ 000fb9ba 0860
.org 0xfb9bc
	adds r1, #4	@ 000fb9bc 0431
.org 0xfb9be
	ldr r0, [r4, #88]	@ 000fb9be a06d
.org 0xfb9c0
	str r0, [r1, #0]	@ 000fb9c0 0860
.org 0xfb9c2
	adds r0, r4, #0	@ 000fb9c2 201c
.org 0xfb9c4
	adds r0, #189	@ 000fb9c4 bd30
.org 0xfb9c6
	mov r1, r8	@ 000fb9c6 4146
.org 0xfb9c8
	strb r1, [r0, #0]	@ 000fb9c8 0170
.org 0xfb9ca
	movs r0, #54	@ 000fb9ca 3620
.org 0xfb9cc
	movs r1, #0	@ 000fb9cc 0021
.org 0xfb9ce
	bl 0x249c	@ 000fb9ce 06f765fd
.org 0xfb9d2
	ldr r1, [pc, #36]	@ 000fb9d2 0949
.org 0xfb9d4
	ldrb r0, [r4, #9]	@ 000fb9d4 607a
.org 0xfb9d6
	lsls r0, r0, #2	@ 000fb9d6 8000
.org 0xfb9d8
	adds r0, r0, r1	@ 000fb9d8 4018
.org 0xfb9da
	mov r1, r8	@ 000fb9da 4146
.org 0xfb9dc
	str r1, [r4, #12]	@ 000fb9dc e160
.org 0xfb9de
	ldr r0, [r0, #0]	@ 000fb9de 0068
.org 0xfb9e0
	ldr r0, [r0, #4]	@ 000fb9e0 4068
.org 0xfb9e2
	str r0, [r4, #20]	@ 000fb9e2 6061
.org 0xfb9e4
	adds r0, r4, #0	@ 000fb9e4 201c
.org 0xfb9e6
	bl 0xfb9fc	@ 000fb9e6 00f009f8
.org 0xfb9ea
	pop {r3}	@ 000fb9ea 08bc
.org 0xfb9ec
	mov r8, r3	@ 000fb9ec 9846
.org 0xfb9ee
	pop {r4, r5, r6}	@ 000fb9ee 70bc
.org 0xfb9f0
	pop {r0}	@ 000fb9f0 01bc
.org 0xfb9f2
	bx r0	@ 000fb9f2 0047
