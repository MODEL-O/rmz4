@ FUN_0803d93c  entry 0x0803d93c  size 68
.thumb
.org 0x3d93c
FUN_0803d93c:
	push {r4, lr}	@ 0003d93c 10b5
.org 0x3d93e
	adds r3, r0, #0	@ 0003d93e 031c
.org 0x3d940
	ldrb r4, [r3, #9]	@ 0003d940 5c7a
.org 0x3d942
	cmp r4, #3	@ 0003d942 032c
.org 0x3d944
	bne.n 0x3d97a	@ 0003d944 19d1
.org 0x3d946
	ldrb r1, [r3, #10]	@ 0003d946 997a
.org 0x3d948
	movs r0, #254	@ 0003d948 fe20
.org 0x3d94a
	ands r0, r1	@ 0003d94a 0840
.org 0x3d94c
	movs r2, #0	@ 0003d94c 0022
.org 0x3d94e
	movs r1, #253	@ 0003d94e fd21
.org 0x3d950
	ands r0, r1	@ 0003d950 0840
.org 0x3d952
	strb r0, [r3, #10]	@ 0003d952 9872
.org 0x3d954
	adds r0, r3, #0	@ 0003d954 181c
.org 0x3d956
	adds r0, #140	@ 0003d956 8c30
.org 0x3d958
	str r2, [r0, #0]	@ 0003d958 0260
.org 0x3d95a
	adds r0, #4	@ 0003d95a 0430
.org 0x3d95c
	str r2, [r0, #0]	@ 0003d95c 0260
.org 0x3d95e
	adds r0, #4	@ 0003d95e 0430
.org 0x3d960
	strb r2, [r0, #0]	@ 0003d960 0270
.org 0x3d962
	ldrb r1, [r3, #10]	@ 0003d962 997a
.org 0x3d964
	movs r0, #251	@ 0003d964 fb20
.org 0x3d966
	ands r0, r1	@ 0003d966 0840
.org 0x3d968
	strb r0, [r3, #10]	@ 0003d968 9872
.org 0x3d96a
	ldr r1, [pc, #20]	@ 0003d96a 0549
.org 0x3d96c
	ldrb r0, [r3, #9]	@ 0003d96c 587a
.org 0x3d96e
	lsls r0, r0, #2	@ 0003d96e 8000
.org 0x3d970
	adds r0, r0, r1	@ 0003d970 4018
.org 0x3d972
	str r4, [r3, #12]	@ 0003d972 dc60
.org 0x3d974
	ldr r0, [r0, #0]	@ 0003d974 0068
.org 0x3d976
	ldr r0, [r0, #12]	@ 0003d976 c068
.org 0x3d978
	str r0, [r3, #20]	@ 0003d978 5861
.org 0x3d97a
	pop {r4}	@ 0003d97a 10bc
.org 0x3d97c
	pop {r0}	@ 0003d97c 01bc
.org 0x3d97e
	bx r0	@ 0003d97e 0047
