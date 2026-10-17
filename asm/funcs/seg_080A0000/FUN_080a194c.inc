@ FUN_080a194c  entry 0x080a194c  size 74
.thumb
.org 0xa194c
FUN_080a194c:
	push {lr}	@ 000a194c 00b5
.org 0xa194e
	adds r2, r0, #0	@ 000a194e 021c
.org 0xa1950
	ldrb r0, [r2, #16]	@ 000a1950 107c
.org 0xa1952
	ldrb r1, [r2, #15]	@ 000a1952 d17b
.org 0xa1954
	cmp r1, #0	@ 000a1954 0029
.org 0xa1956
	bne.n 0xa1964	@ 000a1956 05d1
.org 0xa1958
	cmp r0, #0	@ 000a1958 0028
.org 0xa195a
	beq.n 0xa1980	@ 000a195a 11d0
.org 0xa195c
	movs r0, #48	@ 000a195c 3020
.org 0xa195e
	strb r0, [r2, #18]	@ 000a195e 9074
.org 0xa1960
	adds r0, r1, #1	@ 000a1960 481c
.org 0xa1962
	strb r0, [r2, #15]	@ 000a1962 d073
.org 0xa1964
	ldrb r0, [r2, #18]	@ 000a1964 907c
.org 0xa1966
	subs r0, #1	@ 000a1966 0138
.org 0xa1968
	strb r0, [r2, #18]	@ 000a1968 9074
.org 0xa196a
	lsls r0, r0, #24	@ 000a196a 0006
.org 0xa196c
	cmp r0, #0	@ 000a196c 0028
.org 0xa196e
	bne.n 0xa1992	@ 000a196e 10d1
.org 0xa1970
	ldr r0, [pc, #36]	@ 000a1970 0948
.org 0xa1972
	adds r1, r0, #0	@ 000a1972 011c
.org 0xa1974
	adds r1, #38	@ 000a1974 2631
.org 0xa1976
	ldrb r0, [r1, #0]	@ 000a1976 0878
.org 0xa1978
	cmp r0, #0	@ 000a1978 0028
.org 0xa197a
	beq.n 0xa1980	@ 000a197a 01d0
.org 0xa197c
	adds r0, #255	@ 000a197c ff30
.org 0xa197e
	strb r0, [r1, #0]	@ 000a197e 0870
.org 0xa1980
	ldr r1, [pc, #24]	@ 000a1980 0649
.org 0xa1982
	ldrb r0, [r2, #9]	@ 000a1982 507a
.org 0xa1984
	lsls r0, r0, #2	@ 000a1984 8000
.org 0xa1986
	adds r0, r0, r1	@ 000a1986 4018
.org 0xa1988
	movs r1, #4	@ 000a1988 0421
.org 0xa198a
	str r1, [r2, #12]	@ 000a198a d160
.org 0xa198c
	ldr r0, [r0, #0]	@ 000a198c 0068
.org 0xa198e
	ldr r0, [r0, #16]	@ 000a198e 0069
.org 0xa1990
	str r0, [r2, #20]	@ 000a1990 5061
.org 0xa1992
	pop {r0}	@ 000a1992 01bc
.org 0xa1994
	bx r0	@ 000a1994 0047
