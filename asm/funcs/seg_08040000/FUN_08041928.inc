@ FUN_08041928  entry 0x08041928  size 96
.thumb
.org 0x41928
FUN_08041928:
	push {r4, r5, r6, lr}	@ 00041928 70b5
.org 0x4192a
	adds r4, r0, #0	@ 0004192a 041c
.org 0x4192c
	ldr r6, [r4, #40]	@ 0004192c a66a
.org 0x4192e
	ldr r1, [pc, #88]	@ 0004192e 1649
.org 0x41930
	bl 0x1cf00	@ 00041930 dbf7e6fa
.org 0x41934
	ldrb r1, [r4, #10]	@ 00041934 a17a
.org 0x41936
	movs r0, #4	@ 00041936 0420
.org 0x41938
	orrs r0, r1	@ 00041938 0843
.org 0x4193a
	strb r0, [r4, #10]	@ 0004193a a072
.org 0x4193c
	adds r5, r4, #0	@ 0004193c 251c
.org 0x4193e
	adds r5, #116	@ 0004193e 7435
.org 0x41940
	ldr r1, [pc, #72]	@ 00041940 1249
.org 0x41942
	adds r2, r4, #0	@ 00041942 221c
.org 0x41944
	adds r2, #84	@ 00041944 5432
.org 0x41946
	adds r0, r5, #0	@ 00041946 281c
.org 0x41948
	movs r3, #8	@ 00041948 0823
.org 0x4194a
	bl 0x5760	@ 0004194a c3f709ff
.org 0x4194e
	str r4, [r5, #44]	@ 0004194e ec62
.org 0x41950
	ldr r0, [pc, #60]	@ 00041950 0f48
.org 0x41952
	str r0, [r5, #36]	@ 00041952 6862
.org 0x41954
	adds r0, r6, #0	@ 00041954 301c
.org 0x41956
	adds r1, r4, #0	@ 00041956 211c
.org 0x41958
	movs r2, #0	@ 00041958 0022
.org 0x4195a
	bl 0x41778	@ 0004195a fff70dff
.org 0x4195e
	adds r0, r6, #0	@ 0004195e 301c
.org 0x41960
	adds r1, r4, #0	@ 00041960 211c
.org 0x41962
	movs r2, #1	@ 00041962 0122
.org 0x41964
	bl 0x41778	@ 00041964 fff708ff
.org 0x41968
	adds r0, r6, #0	@ 00041968 301c
.org 0x4196a
	adds r1, r4, #0	@ 0004196a 211c
.org 0x4196c
	movs r2, #2	@ 0004196c 0222
.org 0x4196e
	bl 0x41778	@ 0004196e fff703ff
.org 0x41972
	adds r0, r6, #0	@ 00041972 301c
.org 0x41974
	adds r1, r4, #0	@ 00041974 211c
.org 0x41976
	movs r2, #3	@ 00041976 0322
.org 0x41978
	bl 0x41778	@ 00041978 fff7fefe
.org 0x4197c
	movs r0, #192	@ 0004197c c020
.org 0x4197e
	lsls r0, r0, #4	@ 0004197e 0001
.org 0x41980
	str r0, [r4, #92]	@ 00041980 e065
.org 0x41982
	pop {r4, r5, r6}	@ 00041982 70bc
.org 0x41984
	pop {r0}	@ 00041984 01bc
.org 0x41986
	bx r0	@ 00041986 0047
