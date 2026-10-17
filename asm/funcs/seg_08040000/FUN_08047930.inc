@ FUN_08047930  entry 0x08047930  size 76
.thumb
.org 0x47930
FUN_08047930:
	push {r4, r5, r6, lr}	@ 00047930 70b5
.org 0x47932
	adds r4, r0, #0	@ 00047932 041c
.org 0x47934
	bl 0x1cc9c	@ 00047934 d5f7b2f9
.org 0x47938
	adds r0, r4, #0	@ 00047938 201c
.org 0x4793a
	bl 0x1ceec	@ 0004793a d5f7d7fa
.org 0x4793e
	ldrb r1, [r4, #10]	@ 0004793e a17a
.org 0x47940
	movs r0, #1	@ 00047940 0120
.org 0x47942
	movs r6, #0	@ 00047942 0026
.org 0x47944
	orrs r0, r1	@ 00047944 0843
.org 0x47946
	movs r1, #2	@ 00047946 0221
.org 0x47948
	orrs r0, r1	@ 00047948 0843
.org 0x4794a
	strb r0, [r4, #10]	@ 0004794a a072
.org 0x4794c
	ldr r1, [pc, #44]	@ 0004794c 0b49
.org 0x4794e
	adds r0, r4, #0	@ 0004794e 201c
.org 0x47950
	bl 0x1cf00	@ 00047950 d5f7d6fa
.org 0x47954
	ldrb r1, [r4, #10]	@ 00047954 a17a
.org 0x47956
	movs r0, #4	@ 00047956 0420
.org 0x47958
	orrs r0, r1	@ 00047958 0843
.org 0x4795a
	strb r0, [r4, #10]	@ 0004795a a072
.org 0x4795c
	adds r5, r4, #0	@ 0004795c 251c
.org 0x4795e
	adds r5, #116	@ 0004795e 7435
.org 0x47960
	ldr r1, [pc, #28]	@ 00047960 0749
.org 0x47962
	adds r2, r4, #0	@ 00047962 221c
.org 0x47964
	adds r2, #84	@ 00047964 5432
.org 0x47966
	adds r0, r5, #0	@ 00047966 281c
.org 0x47968
	movs r3, #8	@ 00047968 0823
.org 0x4796a
	bl 0x5760	@ 0004796a bdf7f9fe
.org 0x4796e
	str r4, [r5, #44]	@ 0004796e ec62
.org 0x47970
	str r6, [r5, #36]	@ 00047970 6e62
.org 0x47972
	movs r0, #64	@ 00047972 4020
.org 0x47974
	strb r0, [r4, #18]	@ 00047974 a074
.org 0x47976
	pop {r4, r5, r6}	@ 00047976 70bc
.org 0x47978
	pop {r0}	@ 00047978 01bc
.org 0x4797a
	bx r0	@ 0004797a 0047
