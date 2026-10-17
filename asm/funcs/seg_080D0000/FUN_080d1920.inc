@ FUN_080d1920  entry 0x080d1920  size 118
.thumb
.org 0xd1920
FUN_080d1920:
	push {r4, r5, r6, lr}	@ 000d1920 70b5
.org 0xd1922
	sub sp, #8	@ 000d1922 82b0
.org 0xd1924
	adds r5, r0, #0	@ 000d1924 051c
.org 0xd1926
	adds r6, r1, #0	@ 000d1926 0e1c
.org 0xd1928
	ldr r4, [r5, #8]	@ 000d1928 ac68
.org 0xd192a
	ldr r1, [r4, #84]	@ 000d192a 616d
.org 0xd192c
	ldr r0, [pc, #104]	@ 000d192c 1a48
.org 0xd192e
	adds r1, r1, r0	@ 000d192e 0918
.org 0xd1930
	ldr r0, [r6, #0]	@ 000d1930 3068
.org 0xd1932
	adds r0, r0, r1	@ 000d1932 4018
.org 0xd1934
	str r0, [sp, #0]	@ 000d1934 0090
.org 0xd1936
	ldr r1, [r4, #88]	@ 000d1936 a16d
.org 0xd1938
	ldr r0, [pc, #96]	@ 000d1938 1848
.org 0xd193a
	adds r1, r1, r0	@ 000d193a 0918
.org 0xd193c
	ldr r0, [r6, #4]	@ 000d193c 7068
.org 0xd193e
	adds r0, r0, r1	@ 000d193e 4018
.org 0xd1940
	str r0, [sp, #4]	@ 000d1940 0190
.org 0xd1942
	adds r0, r4, #0	@ 000d1942 201c
.org 0xd1944
	bl 0x1cc9c	@ 000d1944 4bf7aaf9
.org 0xd1948
	ldr r1, [pc, #84]	@ 000d1948 1549
.org 0xd194a
	ldrb r0, [r4, #16]	@ 000d194a 207c
.org 0xd194c
	lsls r0, r0, #1	@ 000d194c 4000
.org 0xd194e
	adds r0, r0, r1	@ 000d194e 4018
.org 0xd1950
	ldrh r1, [r0, #0]	@ 000d1950 0188
.org 0xd1952
	adds r0, r4, #0	@ 000d1952 201c
.org 0xd1954
	bl 0x1cf00	@ 000d1954 4bf7d4fa
.org 0xd1958
	adds r2, r4, #0	@ 000d1958 221c
.org 0xd195a
	adds r2, #73	@ 000d195a 4932
.org 0xd195c
	ldrb r1, [r2, #0]	@ 000d195c 1178
.org 0xd195e
	movs r0, #13	@ 000d195e 0d20
.org 0xd1960
	negs r0, r0	@ 000d1960 4042
.org 0xd1962
	ands r0, r1	@ 000d1962 0840
.org 0xd1964
	strb r0, [r2, #0]	@ 000d1964 1070
.org 0xd1966
	adds r0, r4, #0	@ 000d1966 201c
.org 0xd1968
	bl 0x1cff0	@ 000d1968 4bf742fb
.org 0xd196c
	mov r0, sp	@ 000d196c 6846
.org 0xd196e
	str r0, [r4, #64]	@ 000d196e 2064
.org 0xd1970
	ldr r2, [r5, #4]	@ 000d1970 6a68
.org 0xd1972
	adds r0, r5, #0	@ 000d1972 281c
.org 0xd1974
	adds r1, r6, #0	@ 000d1974 311c
.org 0xd1976
	bl 0x128f84	@ 000d1976 57f005fb
.org 0xd197a
	adds r0, r4, #0	@ 000d197a 201c
.org 0xd197c
	adds r0, #52	@ 000d197c 3430
.org 0xd197e
	ldr r1, [pc, #36]	@ 000d197e 0949
.org 0xd1980
	bl 0x2c94	@ 000d1980 31f788f9
.org 0xd1984
	str r4, [r4, #60]	@ 000d1984 e463
.org 0xd1986
	ldrb r1, [r4, #10]	@ 000d1986 a17a
.org 0xd1988
	movs r0, #247	@ 000d1988 f720
.org 0xd198a
	ands r0, r1	@ 000d198a 0840
.org 0xd198c
	strb r0, [r4, #10]	@ 000d198c a072
.org 0xd198e
	add sp, #8	@ 000d198e 02b0
.org 0xd1990
	pop {r4, r5, r6}	@ 000d1990 70bc
.org 0xd1992
	pop {r0}	@ 000d1992 01bc
.org 0xd1994
	bx r0	@ 000d1994 0047
