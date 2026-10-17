@ FUN_080ab964  entry 0x080ab964  size 120
.thumb
.org 0xab964
FUN_080ab964:
	push {r4, r5, lr}	@ 000ab964 30b5
.org 0xab966
	adds r4, r0, #0	@ 000ab966 041c
.org 0xab968
	ldr r5, [r4, #40]	@ 000ab968 a56a
.org 0xab96a
	bl 0x1cff0	@ 000ab96a 71f741fb
.org 0xab96e
	ldrb r2, [r4, #15]	@ 000ab96e e27b
.org 0xab970
	adds r3, r2, #0	@ 000ab970 131c
.org 0xab972
	cmp r3, #0	@ 000ab972 002b
.org 0xab974
	bne.n 0xab99a	@ 000ab974 11d1
.org 0xab976
	ldr r0, [r4, #84]	@ 000ab976 606d
.org 0xab978
	ldr r1, [r4, #92]	@ 000ab978 e16d
.org 0xab97a
	adds r0, r0, r1	@ 000ab97a 4018
.org 0xab97c
	str r0, [r4, #84]	@ 000ab97c 6065
.org 0xab97e
	ldr r0, [r4, #100]	@ 000ab97e 606e
.org 0xab980
	adds r1, r1, r0	@ 000ab980 0918
.org 0xab982
	str r1, [r4, #92]	@ 000ab982 e165
.org 0xab984
	ldrb r0, [r4, #18]	@ 000ab984 a07c
.org 0xab986
	adds r1, r0, #1	@ 000ab986 411c
.org 0xab988
	strb r1, [r4, #18]	@ 000ab988 a174
.org 0xab98a
	lsls r0, r0, #24	@ 000ab98a 0006
.org 0xab98c
	lsrs r0, r0, #24	@ 000ab98c 000e
.org 0xab98e
	cmp r0, #64	@ 000ab98e 4028
.org 0xab990
	bls.n 0xab9d6	@ 000ab990 21d9
.org 0xab992
	adds r0, r2, #1	@ 000ab992 501c
.org 0xab994
	strb r0, [r4, #15]	@ 000ab994 e073
.org 0xab996
	strb r3, [r4, #18]	@ 000ab996 a374
.org 0xab998
	b.n 0xab9d6	@ 000ab998 1de0
.org 0xab99a
	ldrb r0, [r5, #13]	@ 000ab99a 687b
.org 0xab99c
	cmp r0, #3	@ 000ab99c 0328
.org 0xab99e
	bls.n 0xab9d6	@ 000ab99e 1ad9
.org 0xab9a0
	ldrb r1, [r4, #10]	@ 000ab9a0 a17a
.org 0xab9a2
	movs r0, #254	@ 000ab9a2 fe20
.org 0xab9a4
	ands r0, r1	@ 000ab9a4 0840
.org 0xab9a6
	movs r2, #0	@ 000ab9a6 0022
.org 0xab9a8
	movs r1, #253	@ 000ab9a8 fd21
.org 0xab9aa
	ands r0, r1	@ 000ab9aa 0840
.org 0xab9ac
	strb r0, [r4, #10]	@ 000ab9ac a072
.org 0xab9ae
	adds r0, r4, #0	@ 000ab9ae 201c
.org 0xab9b0
	adds r0, #140	@ 000ab9b0 8c30
.org 0xab9b2
	str r2, [r0, #0]	@ 000ab9b2 0260
.org 0xab9b4
	adds r0, #4	@ 000ab9b4 0430
.org 0xab9b6
	str r2, [r0, #0]	@ 000ab9b6 0260
.org 0xab9b8
	adds r0, #4	@ 000ab9b8 0430
.org 0xab9ba
	strb r2, [r0, #0]	@ 000ab9ba 0270
.org 0xab9bc
	ldrb r1, [r4, #10]	@ 000ab9bc a17a
.org 0xab9be
	movs r0, #251	@ 000ab9be fb20
.org 0xab9c0
	ands r0, r1	@ 000ab9c0 0840
.org 0xab9c2
	strb r0, [r4, #10]	@ 000ab9c2 a072
.org 0xab9c4
	ldr r1, [pc, #20]	@ 000ab9c4 0549
.org 0xab9c6
	ldrb r0, [r4, #9]	@ 000ab9c6 607a
.org 0xab9c8
	lsls r0, r0, #2	@ 000ab9c8 8000
.org 0xab9ca
	adds r0, r0, r1	@ 000ab9ca 4018
.org 0xab9cc
	movs r1, #3	@ 000ab9cc 0321
.org 0xab9ce
	str r1, [r4, #12]	@ 000ab9ce e160
.org 0xab9d0
	ldr r0, [r0, #0]	@ 000ab9d0 0068
.org 0xab9d2
	ldr r0, [r0, #12]	@ 000ab9d2 c068
.org 0xab9d4
	str r0, [r4, #20]	@ 000ab9d4 6061
.org 0xab9d6
	pop {r4, r5}	@ 000ab9d6 30bc
.org 0xab9d8
	pop {r0}	@ 000ab9d8 01bc
.org 0xab9da
	bx r0	@ 000ab9da 0047
