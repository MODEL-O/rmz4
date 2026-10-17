@ FUN_080bc92c  entry 0x080bc92c  size 80
.thumb
.org 0xbc92c
FUN_080bc92c:
	push {r4, r5, lr}	@ 000bc92c 30b5
.org 0xbc92e
	adds r2, r0, #0	@ 000bc92e 021c
.org 0xbc930
	ldr r1, [r2, #20]	@ 000bc930 5169
.org 0xbc932
	movs r3, #1	@ 000bc932 0123
.org 0xbc934
	adds r0, r1, #0	@ 000bc934 081c
.org 0xbc936
	ands r0, r3	@ 000bc936 1840
.org 0xbc938
	cmp r0, #0	@ 000bc938 0028
.org 0xbc93a
	beq.n 0xbc976	@ 000bc93a 1cd0
.org 0xbc93c
	ldr r4, [r2, #44]	@ 000bc93c d46a
.org 0xbc93e
	movs r0, #128	@ 000bc93e 8020
.org 0xbc940
	lsls r0, r0, #10	@ 000bc940 8002
.org 0xbc942
	ands r1, r0	@ 000bc942 0140
.org 0xbc944
	cmp r1, #0	@ 000bc944 0029
.org 0xbc946
	beq.n 0xbc976	@ 000bc946 16d0
.org 0xbc948
	adds r0, r4, #0	@ 000bc948 201c
.org 0xbc94a
	adds r0, #180	@ 000bc94a b430
.org 0xbc94c
	strb r3, [r0, #0]	@ 000bc94c 0370
.org 0xbc94e
	ldr r5, [pc, #44]	@ 000bc94e 0b4d
.org 0xbc950
	ldr r0, [r5, #0]	@ 000bc950 2868
.org 0xbc952
	cmp r0, #0	@ 000bc952 0028
.org 0xbc954
	beq.n 0xbc976	@ 000bc954 0fd0
.org 0xbc956
	movs r1, #8	@ 000bc956 0821
.org 0xbc958
	movs r2, #0	@ 000bc958 0022
.org 0xbc95a
	bl 0x3a578	@ 000bc95a 7df70dfe
.org 0xbc95e
	ldr r2, [pc, #32]	@ 000bc95e 084a
.org 0xbc960
	str r2, [r4, #92]	@ 000bc960 e265
.org 0xbc962
	str r2, [r4, #96]	@ 000bc962 2266
.org 0xbc964
	ldr r0, [r5, #0]	@ 000bc964 2868
.org 0xbc966
	ldr r1, [r0, #84]	@ 000bc966 416d
.org 0xbc968
	ldr r0, [r4, #84]	@ 000bc968 606d
.org 0xbc96a
	cmp r1, r0	@ 000bc96a 8142
.org 0xbc96c
	ble.n 0xbc976	@ 000bc96c 03dd
.org 0xbc96e
	lsls r0, r2, #8	@ 000bc96e 1002
.org 0xbc970
	negs r0, r0	@ 000bc970 4042
.org 0xbc972
	asrs r0, r0, #8	@ 000bc972 0012
.org 0xbc974
	str r0, [r4, #92]	@ 000bc974 e065
.org 0xbc976
	pop {r4, r5}	@ 000bc976 30bc
.org 0xbc978
	pop {r0}	@ 000bc978 01bc
.org 0xbc97a
	bx r0	@ 000bc97a 0047
