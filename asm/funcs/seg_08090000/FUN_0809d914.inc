@ FUN_0809d914  entry 0x0809d914  size 130
.thumb
.org 0x9d914
FUN_0809d914:
	push {r4, lr}	@ 0009d914 10b5
.org 0x9d916
	adds r4, r0, #0	@ 0009d916 041c
.org 0x9d918
	ldrb r0, [r4, #14]	@ 0009d918 a07b
.org 0x9d91a
	cmp r0, #0	@ 0009d91a 0028
.org 0x9d91c
	bne.n 0x9d940	@ 0009d91c 10d1
.org 0x9d91e
	ldrb r0, [r4, #17]	@ 0009d91e 607c
.org 0x9d920
	cmp r0, #0	@ 0009d920 0028
.org 0x9d922
	beq.n 0x9d92c	@ 0009d922 03d0
.org 0x9d924
	ldr r0, [pc, #0]	@ 0009d924 0048
.org 0x9d926
	b.n 0x9d930	@ 0009d926 03e0
.org 0x9d928
	.byte 0x80,0xfe,0xff,0xff	@ 0009d928 data
.org 0x9d92c
	movs r0, #192	@ 0009d92c c020
.org 0x9d92e
	lsls r0, r0, #1	@ 0009d92e 4000
.org 0x9d930
	str r0, [r4, #92]	@ 0009d930 e065
.org 0x9d932
	ldr r0, [pc, #56]	@ 0009d932 0e48
.org 0x9d934
	str r0, [r4, #96]	@ 0009d934 2066
.org 0x9d936
	movs r0, #255	@ 0009d936 ff20
.org 0x9d938
	strb r0, [r4, #18]	@ 0009d938 a074
.org 0x9d93a
	ldrb r0, [r4, #14]	@ 0009d93a a07b
.org 0x9d93c
	adds r0, #1	@ 0009d93c 0130
.org 0x9d93e
	strb r0, [r4, #14]	@ 0009d93e a073
.org 0x9d940
	adds r0, r4, #0	@ 0009d940 201c
.org 0x9d942
	bl 0x1cff0	@ 0009d942 7ff755fb
.org 0x9d946
	ldr r0, [r4, #84]	@ 0009d946 606d
.org 0x9d948
	ldr r1, [r4, #92]	@ 0009d948 e16d
.org 0x9d94a
	adds r0, r0, r1	@ 0009d94a 4018
.org 0x9d94c
	str r0, [r4, #84]	@ 0009d94c 6065
.org 0x9d94e
	ldr r0, [r4, #88]	@ 0009d94e a06d
.org 0x9d950
	ldr r1, [r4, #96]	@ 0009d950 216e
.org 0x9d952
	adds r0, r0, r1	@ 0009d952 4018
.org 0x9d954
	str r0, [r4, #88]	@ 0009d954 a065
.org 0x9d956
	adds r1, #64	@ 0009d956 4031
.org 0x9d958
	str r1, [r4, #96]	@ 0009d958 2166
.org 0x9d95a
	ldrb r1, [r4, #18]	@ 0009d95a a17c
.org 0x9d95c
	movs r0, #1	@ 0009d95c 0120
.org 0x9d95e
	ands r0, r1	@ 0009d95e 0840
.org 0x9d960
	cmp r0, #0	@ 0009d960 0028
.org 0x9d962
	beq.n 0x9d970	@ 0009d962 05d0
.org 0x9d964
	ldrb r1, [r4, #10]	@ 0009d964 a17a
.org 0x9d966
	movs r0, #1	@ 0009d966 0120
.org 0x9d968
	orrs r0, r1	@ 0009d968 0843
.org 0x9d96a
	b.n 0x9d976	@ 0009d96a 04e0
.org 0x9d96c
	.byte 0x00,0xfc,0xff,0xff	@ 0009d96c data
.org 0x9d970
	ldrb r1, [r4, #10]	@ 0009d970 a17a
.org 0x9d972
	movs r0, #254	@ 0009d972 fe20
.org 0x9d974
	ands r0, r1	@ 0009d974 0840
.org 0x9d976
	strb r0, [r4, #10]	@ 0009d976 a072
.org 0x9d978
	ldrb r0, [r4, #18]	@ 0009d978 a07c
.org 0x9d97a
	subs r0, #1	@ 0009d97a 0138
.org 0x9d97c
	strb r0, [r4, #18]	@ 0009d97c a074
.org 0x9d97e
	lsls r0, r0, #24	@ 0009d97e 0006
.org 0x9d980
	lsrs r0, r0, #24	@ 0009d980 000e
.org 0x9d982
	cmp r0, #255	@ 0009d982 ff28
.org 0x9d984
	bne.n 0x9d998	@ 0009d984 08d1
.org 0x9d986
	ldr r1, [pc, #24]	@ 0009d986 0649
.org 0x9d988
	ldrb r0, [r4, #9]	@ 0009d988 607a
.org 0x9d98a
	lsls r0, r0, #2	@ 0009d98a 8000
.org 0x9d98c
	adds r0, r0, r1	@ 0009d98c 4018
.org 0x9d98e
	movs r1, #4	@ 0009d98e 0421
.org 0x9d990
	str r1, [r4, #12]	@ 0009d990 e160
.org 0x9d992
	ldr r0, [r0, #0]	@ 0009d992 0068
.org 0x9d994
	ldr r0, [r0, #16]	@ 0009d994 0069
