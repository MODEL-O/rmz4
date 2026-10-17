@ FUN_08067950  entry 0x08067950  size 92
.thumb
.org 0x67950
FUN_08067950:
	push {r4, r5, lr}	@ 00067950 30b5
.org 0x67952
	adds r4, r0, #0	@ 00067952 041c
.org 0x67954
	ldrb r5, [r4, #14]	@ 00067954 a57b
.org 0x67956
	cmp r5, #0	@ 00067956 002d
.org 0x67958
	bne.n 0x67994	@ 00067958 1cd1
.org 0x6795a
	ldr r1, [pc, #32]	@ 0006795a 0849
.org 0x6795c
	bl 0x1cf00	@ 0006795c b5f7d0fa
.org 0x67960
	ldr r0, [pc, #28]	@ 00067960 0748
.org 0x67962
	ldr r0, [r0, #0]	@ 00067962 0068
.org 0x67964
	adds r0, #164	@ 00067964 a430
.org 0x67966
	movs r1, #0	@ 00067966 0021
.org 0x67968
	ldrsh r0, [r0, r1]	@ 00067968 405e
.org 0x6796a
	cmp r0, #4	@ 0006796a 0428
.org 0x6796c
	bgt.n 0x67984	@ 0006796c 0adc
.org 0x6796e
	adds r1, r4, #0	@ 0006796e 211c
.org 0x67970
	adds r1, #221	@ 00067970 dd31
.org 0x67972
	movs r0, #1	@ 00067972 0120
.org 0x67974
	strb r0, [r1, #0]	@ 00067974 0870
.org 0x67976
	movs r0, #68	@ 00067976 4420
.org 0x67978
	b.n 0x6798c	@ 00067978 08e0
.org 0x6797a
	.byte 0x00	@ 0006797a data
.org 0x6797b
	.byte 0x00	@ 0006797b data
.org 0x6797c
	.byte 0x12,0xa9,0x00,0x00	@ 0006797c data
.org 0x67980
	.byte 0xf0,0xdb,0x02,0x02	@ 00067980 data
.org 0x67984
	adds r0, r4, #0	@ 00067984 201c
.org 0x67986
	adds r0, #221	@ 00067986 dd30
.org 0x67988
	strb r5, [r0, #0]	@ 00067988 0570
.org 0x6798a
	movs r0, #60	@ 0006798a 3c20
.org 0x6798c
	strb r0, [r4, #18]	@ 0006798c a074
.org 0x6798e
	ldrb r0, [r4, #14]	@ 0006798e a07b
.org 0x67990
	adds r0, #1	@ 00067990 0130
.org 0x67992
	strb r0, [r4, #14]	@ 00067992 a073
.org 0x67994
	adds r0, r4, #0	@ 00067994 201c
.org 0x67996
	bl 0x1cff0	@ 00067996 b5f72bfb
.org 0x6799a
	ldrb r0, [r4, #18]	@ 0006799a a07c
.org 0x6799c
	subs r0, #1	@ 0006799c 0138
.org 0x6799e
	strb r0, [r4, #18]	@ 0006799e a074
.org 0x679a0
	lsls r0, r0, #24	@ 000679a0 0006
.org 0x679a2
	lsrs r0, r0, #24	@ 000679a2 000e
.org 0x679a4
	cmp r0, #255	@ 000679a4 ff28
.org 0x679a6
	bne.n 0x679b0	@ 000679a6 03d1
.org 0x679a8
	movs r0, #18	@ 000679a8 1220
.org 0x679aa
	strb r0, [r4, #13]	@ 000679aa 6073
