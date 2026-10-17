@ FUN_080c1934  entry 0x080c1934  size 104
.thumb
.org 0xc1934
FUN_080c1934:
	push {r4, lr}	@ 000c1934 10b5
.org 0xc1936
	adds r4, r0, #0	@ 000c1936 041c
.org 0xc1938
	ldr r0, [r4, #40]	@ 000c1938 a06a
.org 0xc193a
	adds r1, r0, #0	@ 000c193a 011c
.org 0xc193c
	adds r1, #202	@ 000c193c ca31
.org 0xc193e
	ldrh r2, [r1, #0]	@ 000c193e 0a88
.org 0xc1940
	movs r3, #0	@ 000c1940 0023
.org 0xc1942
	ldrsh r0, [r1, r3]	@ 000c1942 c85e
.org 0xc1944
	cmp r0, #0	@ 000c1944 0028
.org 0xc1946
	beq.n 0xc194c	@ 000c1946 01d0
.org 0xc1948
	subs r0, r2, #1	@ 000c1948 501e
.org 0xc194a
	strh r0, [r1, #0]	@ 000c194a 0880
.org 0xc194c
	adds r0, r4, #0	@ 000c194c 201c
.org 0xc194e
	adds r0, #180	@ 000c194e b430
.org 0xc1950
	ldrb r0, [r0, #0]	@ 000c1950 0078
.org 0xc1952
	cmp r0, #0	@ 000c1952 0028
.org 0xc1954
	beq.n 0xc195e	@ 000c1954 03d0
.org 0xc1956
	adds r0, r4, #0	@ 000c1956 201c
.org 0xc1958
	bl 0xc19c4	@ 000c1958 00f034f8
.org 0xc195c
	b.n 0xc1968	@ 000c195c 04e0
.org 0xc195e
	adds r1, r4, #0	@ 000c195e 211c
.org 0xc1960
	adds r1, #84	@ 000c1960 5431
.org 0xc1962
	movs r0, #2	@ 000c1962 0220
.org 0xc1964
	bl 0xd0c88	@ 000c1964 0ff090f9
.org 0xc1968
	adds r0, r4, #0	@ 000c1968 201c
.org 0xc196a
	adds r0, #140	@ 000c196a 8c30
.org 0xc196c
	movs r1, #0	@ 000c196c 0021
.org 0xc196e
	str r1, [r0, #0]	@ 000c196e 0160
.org 0xc1970
	adds r0, #4	@ 000c1970 0430
.org 0xc1972
	str r1, [r0, #0]	@ 000c1972 0160
.org 0xc1974
	adds r0, #4	@ 000c1974 0430
.org 0xc1976
	strb r1, [r0, #0]	@ 000c1976 0170
.org 0xc1978
	ldrb r1, [r4, #10]	@ 000c1978 a17a
.org 0xc197a
	movs r0, #251	@ 000c197a fb20
.org 0xc197c
	ands r0, r1	@ 000c197c 0840
.org 0xc197e
	movs r1, #254	@ 000c197e fe21
.org 0xc1980
	ands r0, r1	@ 000c1980 0840
.org 0xc1982
	strb r0, [r4, #10]	@ 000c1982 a072
.org 0xc1984
	ldr r1, [pc, #20]	@ 000c1984 0549
.org 0xc1986
	ldrb r0, [r4, #9]	@ 000c1986 607a
.org 0xc1988
	lsls r0, r0, #2	@ 000c1988 8000
.org 0xc198a
	adds r0, r0, r1	@ 000c198a 4018
.org 0xc198c
	movs r1, #4	@ 000c198c 0421
.org 0xc198e
	str r1, [r4, #12]	@ 000c198e e160
.org 0xc1990
	ldr r0, [r0, #0]	@ 000c1990 0068
.org 0xc1992
	ldr r0, [r0, #16]	@ 000c1992 0069
.org 0xc1994
	str r0, [r4, #20]	@ 000c1994 6061
.org 0xc1996
	pop {r4}	@ 000c1996 10bc
.org 0xc1998
	pop {r0}	@ 000c1998 01bc
.org 0xc199a
	bx r0	@ 000c199a 0047
