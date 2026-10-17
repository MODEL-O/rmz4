@ FUN_080a6aa8  entry 0x080a6aa8  size 112
.thumb
.org 0xa6aa8
FUN_080a6aa8:
	push {r4, r5, lr}	@ 000a6aa8 30b5
.org 0xa6aaa
	adds r4, r0, #0	@ 000a6aaa 041c
.org 0xa6aac
	ldr r5, [r4, #40]	@ 000a6aac a56a
.org 0xa6aae
	bl 0x1cd28	@ 000a6aae 76f73bf9
.org 0xa6ab2
	ldrb r1, [r4, #10]	@ 000a6ab2 a17a
.org 0xa6ab4
	movs r0, #1	@ 000a6ab4 0120
.org 0xa6ab6
	orrs r0, r1	@ 000a6ab6 0843
.org 0xa6ab8
	movs r1, #2	@ 000a6ab8 0221
.org 0xa6aba
	orrs r0, r1	@ 000a6aba 0843
.org 0xa6abc
	strb r0, [r4, #10]	@ 000a6abc a072
.org 0xa6abe
	ldr r1, [pc, #88]	@ 000a6abe 1649
.org 0xa6ac0
	adds r0, r4, #0	@ 000a6ac0 201c
.org 0xa6ac2
	bl 0x1cf00	@ 000a6ac2 76f71dfa
.org 0xa6ac6
	ldrb r0, [r4, #11]	@ 000a6ac6 e07a
.org 0xa6ac8
	movs r1, #16	@ 000a6ac8 1021
.org 0xa6aca
	orrs r0, r1	@ 000a6aca 0843
.org 0xa6acc
	strb r0, [r4, #11]	@ 000a6acc e072
.org 0xa6ace
	ldrb r0, [r5, #28]	@ 000a6ace 287f
.org 0xa6ad0
	strb r0, [r4, #29]	@ 000a6ad0 6077
.org 0xa6ad2
	ldrb r1, [r4, #10]	@ 000a6ad2 a17a
.org 0xa6ad4
	movs r0, #4	@ 000a6ad4 0420
.org 0xa6ad6
	orrs r0, r1	@ 000a6ad6 0843
.org 0xa6ad8
	strb r0, [r4, #10]	@ 000a6ad8 a072
.org 0xa6ada
	adds r5, r4, #0	@ 000a6ada 251c
.org 0xa6adc
	adds r5, #116	@ 000a6adc 7435
.org 0xa6ade
	ldr r1, [pc, #60]	@ 000a6ade 0f49
.org 0xa6ae0
	adds r2, r4, #0	@ 000a6ae0 221c
.org 0xa6ae2
	adds r2, #84	@ 000a6ae2 5432
.org 0xa6ae4
	adds r0, r5, #0	@ 000a6ae4 281c
.org 0xa6ae6
	movs r3, #8	@ 000a6ae6 0823
.org 0xa6ae8
	bl 0x5760	@ 000a6ae8 5ef73afe
.org 0xa6aec
	str r4, [r5, #44]	@ 000a6aec ec62
.org 0xa6aee
	ldr r0, [pc, #48]	@ 000a6aee 0c48
.org 0xa6af0
	str r0, [r5, #36]	@ 000a6af0 6862
.org 0xa6af2
	adds r1, r4, #0	@ 000a6af2 211c
.org 0xa6af4
	adds r1, #37	@ 000a6af4 2531
.org 0xa6af6
	movs r0, #25	@ 000a6af6 1920
.org 0xa6af8
	strb r0, [r1, #0]	@ 000a6af8 0870
.org 0xa6afa
	ldr r1, [pc, #40]	@ 000a6afa 0a49
.org 0xa6afc
	ldrb r0, [r4, #9]	@ 000a6afc 607a
.org 0xa6afe
	lsls r0, r0, #2	@ 000a6afe 8000
.org 0xa6b00
	adds r0, r0, r1	@ 000a6b00 4018
.org 0xa6b02
	movs r1, #1	@ 000a6b02 0121
.org 0xa6b04
	str r1, [r4, #12]	@ 000a6b04 e160
.org 0xa6b06
	ldr r0, [r0, #0]	@ 000a6b06 0068
.org 0xa6b08
	ldr r0, [r0, #4]	@ 000a6b08 4068
.org 0xa6b0a
	str r0, [r4, #20]	@ 000a6b0a 6061
.org 0xa6b0c
	adds r0, r4, #0	@ 000a6b0c 201c
.org 0xa6b0e
	bl 0xa6b28	@ 000a6b0e 00f00bf8
.org 0xa6b12
	pop {r4, r5}	@ 000a6b12 30bc
.org 0xa6b14
	pop {r0}	@ 000a6b14 01bc
.org 0xa6b16
	bx r0	@ 000a6b16 0047
