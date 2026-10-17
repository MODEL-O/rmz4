@ FUN_080e1944  entry 0x080e1944  size 50
.thumb
.org 0xe1944
FUN_080e1944:
	push {r4, lr}	@ 000e1944 10b5
.org 0xe1946
	adds r4, r0, #0	@ 000e1946 041c
.org 0xe1948
	ldrb r0, [r4, #13]	@ 000e1948 607b
.org 0xe194a
	cmp r0, #0	@ 000e194a 0028
.org 0xe194c
	bne.n 0xe1964	@ 000e194c 0ad1
.org 0xe194e
	adds r0, r4, #0	@ 000e194e 201c
.org 0xe1950
	adds r0, #118	@ 000e1950 7630
.org 0xe1952
	ldrh r0, [r0, #0]	@ 000e1952 0088
.org 0xe1954
	movs r1, #11	@ 000e1954 0b21
.org 0xe1956
	orrs r1, r0	@ 000e1956 0143
.org 0xe1958
	adds r0, r4, #0	@ 000e1958 201c
.org 0xe195a
	bl 0x1cf00	@ 000e195a 3bf7d1fa
.org 0xe195e
	ldrb r0, [r4, #13]	@ 000e195e 607b
.org 0xe1960
	adds r0, #1	@ 000e1960 0130
.org 0xe1962
	strb r0, [r4, #13]	@ 000e1962 6073
.org 0xe1964
	adds r0, r4, #0	@ 000e1964 201c
.org 0xe1966
	bl 0xe19e0	@ 000e1966 00f03bf8
.org 0xe196a
	adds r0, r4, #0	@ 000e196a 201c
.org 0xe196c
	bl 0xe1a28	@ 000e196c 00f05cf8
.org 0xe1970
	pop {r4}	@ 000e1970 10bc
.org 0xe1972
	pop {r0}	@ 000e1972 01bc
.org 0xe1974
	bx r0	@ 000e1974 0047
