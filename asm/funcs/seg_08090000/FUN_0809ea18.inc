@ FUN_0809ea18  entry 0x0809ea18  size 116
.thumb
.org 0x9ea18
FUN_0809ea18:
	push {r4, lr}	@ 0009ea18 10b5
.org 0x9ea1a
	adds r4, r0, #0	@ 0009ea1a 041c
.org 0x9ea1c
	ldr r0, [r4, #84]	@ 0009ea1c 606d
.org 0x9ea1e
	ldr r1, [r4, #92]	@ 0009ea1e e16d
.org 0x9ea20
	adds r0, r0, r1	@ 0009ea20 4018
.org 0x9ea22
	str r0, [r4, #84]	@ 0009ea22 6065
.org 0x9ea24
	adds r2, r1, #0	@ 0009ea24 0a1c
.org 0x9ea26
	cmp r1, #0	@ 0009ea26 0029
.org 0x9ea28
	bge.n 0x9ea2c	@ 0009ea28 00da
.org 0x9ea2a
	negs r2, r1	@ 0009ea2a 4a42
.org 0x9ea2c
	ldr r0, [pc, #92]	@ 0009ea2c 1748
.org 0x9ea2e
	cmp r2, r0	@ 0009ea2e 8242
.org 0x9ea30
	bgt.n 0x9ea38	@ 0009ea30 02dc
.org 0x9ea32
	ldr r0, [r4, #100]	@ 0009ea32 606e
.org 0x9ea34
	adds r0, r1, r0	@ 0009ea34 0818
.org 0x9ea36
	str r0, [r4, #92]	@ 0009ea36 e065
.org 0x9ea38
	ldr r0, [pc, #84]	@ 0009ea38 1548
.org 0x9ea3a
	adds r1, r4, #0	@ 0009ea3a 211c
.org 0x9ea3c
	adds r1, #84	@ 0009ea3c 5431
.org 0x9ea3e
	bl 0x1fb14	@ 0009ea3e 81f769f8
.org 0x9ea42
	movs r1, #128	@ 0009ea42 8021
.org 0x9ea44
	lsls r1, r1, #7	@ 0009ea44 c901
.org 0x9ea46
	cmp r0, r1	@ 0009ea46 8842
.org 0x9ea48
	bls.n 0x9ea80	@ 0009ea48 1ad9
.org 0x9ea4a
	ldrb r1, [r4, #10]	@ 0009ea4a a17a
.org 0x9ea4c
	movs r0, #254	@ 0009ea4c fe20
.org 0x9ea4e
	ands r0, r1	@ 0009ea4e 0840
.org 0x9ea50
	movs r2, #0	@ 0009ea50 0022
.org 0x9ea52
	movs r1, #253	@ 0009ea52 fd21
.org 0x9ea54
	ands r0, r1	@ 0009ea54 0840
.org 0x9ea56
	strb r0, [r4, #10]	@ 0009ea56 a072
.org 0x9ea58
	adds r0, r4, #0	@ 0009ea58 201c
.org 0x9ea5a
	adds r0, #140	@ 0009ea5a 8c30
.org 0x9ea5c
	str r2, [r0, #0]	@ 0009ea5c 0260
.org 0x9ea5e
	adds r0, #4	@ 0009ea5e 0430
.org 0x9ea60
	str r2, [r0, #0]	@ 0009ea60 0260
.org 0x9ea62
	adds r0, #4	@ 0009ea62 0430
.org 0x9ea64
	strb r2, [r0, #0]	@ 0009ea64 0270
.org 0x9ea66
	ldrb r1, [r4, #10]	@ 0009ea66 a17a
.org 0x9ea68
	movs r0, #251	@ 0009ea68 fb20
.org 0x9ea6a
	ands r0, r1	@ 0009ea6a 0840
.org 0x9ea6c
	strb r0, [r4, #10]	@ 0009ea6c a072
.org 0x9ea6e
	ldr r1, [pc, #36]	@ 0009ea6e 0949
.org 0x9ea70
	ldrb r0, [r4, #9]	@ 0009ea70 607a
.org 0x9ea72
	lsls r0, r0, #2	@ 0009ea72 8000
.org 0x9ea74
	adds r0, r0, r1	@ 0009ea74 4018
.org 0x9ea76
	movs r1, #3	@ 0009ea76 0321
.org 0x9ea78
	str r1, [r4, #12]	@ 0009ea78 e160
.org 0x9ea7a
	ldr r0, [r0, #0]	@ 0009ea7a 0068
.org 0x9ea7c
	ldr r0, [r0, #12]	@ 0009ea7c c068
.org 0x9ea7e
	str r0, [r4, #20]	@ 0009ea7e 6061
.org 0x9ea80
	adds r0, r4, #0	@ 0009ea80 201c
.org 0x9ea82
	bl 0x1cff0	@ 0009ea82 7ef7b5fa
.org 0x9ea86
	pop {r4}	@ 0009ea86 10bc
.org 0x9ea88
	pop {r0}	@ 0009ea88 01bc
.org 0x9ea8a
	bx r0	@ 0009ea8a 0047
