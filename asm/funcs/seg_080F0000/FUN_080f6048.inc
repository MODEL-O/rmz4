@ FUN_080f6048  entry 0x080f6048  size 138
.thumb
.org 0xf6048
FUN_080f6048:
	push {r4, lr}	@ 000f6048 10b5
.org 0xf604a
	adds r4, r0, #0	@ 000f604a 041c
.org 0xf604c
	ldrb r0, [r4, #14]	@ 000f604c a07b
.org 0xf604e
	cmp r0, #0	@ 000f604e 0028
.org 0xf6050
	bne.n 0xf6060	@ 000f6050 06d1
.org 0xf6052
	ldr r1, [pc, #128]	@ 000f6052 2049
.org 0xf6054
	adds r0, r4, #0	@ 000f6054 201c
.org 0xf6056
	bl 0x1cf00	@ 000f6056 26f753ff
.org 0xf605a
	ldrb r0, [r4, #14]	@ 000f605a a07b
.org 0xf605c
	adds r0, #1	@ 000f605c 0130
.org 0xf605e
	strb r0, [r4, #14]	@ 000f605e a073
.org 0xf6060
	ldr r0, [r4, #92]	@ 000f6060 e06d
.org 0xf6062
	adds r0, #16	@ 000f6062 1030
.org 0xf6064
	str r0, [r4, #92]	@ 000f6064 e065
.org 0xf6066
	movs r1, #224	@ 000f6066 e021
.org 0xf6068
	lsls r1, r1, #2	@ 000f6068 8900
.org 0xf606a
	cmp r0, r1	@ 000f606a 8842
.org 0xf606c
	ble.n 0xf6070	@ 000f606c 00dd
.org 0xf606e
	str r1, [r4, #92]	@ 000f606e e165
.org 0xf6070
	ldr r0, [r4, #84]	@ 000f6070 606d
.org 0xf6072
	ldr r2, [r4, #92]	@ 000f6072 e26d
.org 0xf6074
	adds r0, r0, r2	@ 000f6074 8018
.org 0xf6076
	str r0, [r4, #84]	@ 000f6076 6065
.org 0xf6078
	ldr r1, [pc, #92]	@ 000f6078 1749
.org 0xf607a
	cmp r0, r1	@ 000f607a 8842
.org 0xf607c
	ble.n 0xf60b2	@ 000f607c 19dd
.org 0xf607e
	movs r0, #192	@ 000f607e c020
.org 0xf6080
	lsls r0, r0, #2	@ 000f6080 8000
.org 0xf6082
	cmp r2, r0	@ 000f6082 8242
.org 0xf6084
	ble.n 0xf60aa	@ 000f6084 11dd
.org 0xf6086
	ldr r0, [pc, #84]	@ 000f6086 1548
.org 0xf6088
	ldrh r1, [r0, #8]	@ 000f6088 0189
.org 0xf608a
	movs r0, #8	@ 000f608a 0820
.org 0xf608c
	ands r0, r1	@ 000f608c 0840
.org 0xf608e
	lsls r0, r0, #16	@ 000f608e 0004
.org 0xf6090
	lsrs r2, r0, #16	@ 000f6090 020c
.org 0xf6092
	cmp r2, #0	@ 000f6092 002a
.org 0xf6094
	bne.n 0xf60aa	@ 000f6094 09d1
.org 0xf6096
	ldr r0, [pc, #72]	@ 000f6096 1248
.org 0xf6098
	ldr r1, [r0, #0]	@ 000f6098 0168
.org 0xf609a
	movs r0, #1	@ 000f609a 0120
.org 0xf609c
	strb r0, [r1, #13]	@ 000f609c 4873
.org 0xf609e
	strb r2, [r1, #14]	@ 000f609e 8a73
.org 0xf60a0
	movs r0, #2	@ 000f60a0 0220
.org 0xf60a2
	strb r0, [r1, #15]	@ 000f60a2 c873
.org 0xf60a4
	movs r0, #56	@ 000f60a4 3820
.org 0xf60a6
	bl 0x2b10	@ 000f60a6 0cf733fd
.org 0xf60aa
	movs r0, #0	@ 000f60aa 0020
.org 0xf60ac
	str r0, [r4, #92]	@ 000f60ac e065
.org 0xf60ae
	ldr r0, [pc, #40]	@ 000f60ae 0a48
.org 0xf60b0
	str r0, [r4, #84]	@ 000f60b0 6065
.org 0xf60b2
	ldr r1, [r4, #84]	@ 000f60b2 616d
.org 0xf60b4
	ldr r0, [pc, #44]	@ 000f60b4 0b48
.org 0xf60b6
	cmp r1, r0	@ 000f60b6 8142
.org 0xf60b8
	bgt.n 0xf60be	@ 000f60b8 01dc
.org 0xf60ba
	adds r0, #1	@ 000f60ba 0130
.org 0xf60bc
	str r0, [r4, #84]	@ 000f60bc 6065
.org 0xf60be
	ldr r0, [r4, #84]	@ 000f60be 606d
.org 0xf60c0
	ldr r1, [r4, #88]	@ 000f60c0 a16d
.org 0xf60c2
	bl 0x8534	@ 000f60c2 12f737fa
.org 0xf60c6
	ldr r1, [pc, #32]	@ 000f60c6 0849
.org 0xf60c8
	adds r0, r0, r1	@ 000f60c8 4018
.org 0xf60ca
	str r0, [r4, #88]	@ 000f60ca a065
.org 0xf60cc
	pop {r4}	@ 000f60cc 10bc
.org 0xf60ce
	pop {r0}	@ 000f60ce 01bc
.org 0xf60d0
	bx r0	@ 000f60d0 0047
