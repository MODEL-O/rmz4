@ FUN_08038b38  entry 0x08038b38  size 234
.thumb
.org 0x38b38
FUN_08038b38:
	push {r4, lr}	@ 00038b38 10b5
.org 0x38b3a
	adds r4, r0, #0	@ 00038b3a 041c
.org 0x38b3c
	bl 0x2f0b4	@ 00038b3c f6f7bafa
.org 0x38b40
	adds r2, r4, #0	@ 00038b40 221c
.org 0x38b42
	adds r2, #180	@ 00038b42 b432
.org 0x38b44
	adds r0, r4, #0	@ 00038b44 201c
.org 0x38b46
	adds r0, #222	@ 00038b46 de30
.org 0x38b48
	ldrb r1, [r0, #0]	@ 00038b48 0178
.org 0x38b4a
	cmp r1, #0	@ 00038b4a 0029
.org 0x38b4c
	bne.n 0x38b84	@ 00038b4c 1ad1
.org 0x38b4e
	movs r0, #151	@ 00038b4e 9720
.org 0x38b50
	lsls r0, r0, #2	@ 00038b50 8000
.org 0x38b52
	adds r1, r4, r0	@ 00038b52 2118
.org 0x38b54
	movs r0, #1	@ 00038b54 0120
.org 0x38b56
	strh r0, [r1, #0]	@ 00038b56 0880
.org 0x38b58
	ldr r2, [pc, #32]	@ 00038b58 084a
.org 0x38b5a
	adds r1, r4, r2	@ 00038b5a a118
.org 0x38b5c
	movs r0, #128	@ 00038b5c 8020
.org 0x38b5e
	lsls r0, r0, #2	@ 00038b5e 8000
.org 0x38b60
	strh r0, [r1, #0]	@ 00038b60 0880
.org 0x38b62
	movs r3, #152	@ 00038b62 9823
.org 0x38b64
	lsls r3, r3, #2	@ 00038b64 9b00
.org 0x38b66
	adds r1, r4, r3	@ 00038b66 e118
.org 0x38b68
	movs r0, #2	@ 00038b68 0220
.org 0x38b6a
	strh r0, [r1, #0]	@ 00038b6a 0880
.org 0x38b6c
	ldr r0, [pc, #16]	@ 00038b6c 0448
.org 0x38b6e
	adds r1, r4, r0	@ 00038b6e 2118
.org 0x38b70
	movs r0, #128	@ 00038b70 8020
.org 0x38b72
	lsls r0, r0, #1	@ 00038b72 4000
.org 0x38b74
	strh r0, [r1, #0]	@ 00038b74 0880
.org 0x38b76
	adds r2, #6	@ 00038b76 0632
.org 0x38b78
	adds r1, r4, r2	@ 00038b78 a118
.org 0x38b7a
	b.n 0x38bb2	@ 00038b7a 1ae0
.org 0x38b7c
	.byte 0x5e,0x02,0x00,0x00	@ 00038b7c data
.org 0x38b80
	.byte 0x62,0x02,0x00,0x00	@ 00038b80 data
.org 0x38b84
	cmp r1, #1	@ 00038b84 0129
.org 0x38b86
	bne.n 0x38bbc	@ 00038b86 19d1
.org 0x38b88
	movs r3, #151	@ 00038b88 9723
.org 0x38b8a
	lsls r3, r3, #2	@ 00038b8a 9b00
.org 0x38b8c
	adds r0, r4, r3	@ 00038b8c e018
.org 0x38b8e
	strh r1, [r0, #0]	@ 00038b8e 0180
.org 0x38b90
	ldr r0, [pc, #36]	@ 00038b90 0948
.org 0x38b92
	adds r1, r4, r0	@ 00038b92 2118
.org 0x38b94
	movs r0, #128	@ 00038b94 8020
.org 0x38b96
	lsls r0, r0, #1	@ 00038b96 4000
.org 0x38b98
	strh r0, [r1, #0]	@ 00038b98 0880
.org 0x38b9a
	movs r2, #152	@ 00038b9a 9822
.org 0x38b9c
	lsls r2, r2, #2	@ 00038b9c 9200
.org 0x38b9e
	adds r1, r4, r2	@ 00038b9e a118
.org 0x38ba0
	movs r0, #2	@ 00038ba0 0220
.org 0x38ba2
	strh r0, [r1, #0]	@ 00038ba2 0880
.org 0x38ba4
	adds r3, #6	@ 00038ba4 0633
.org 0x38ba6
	adds r1, r4, r3	@ 00038ba6 e118
.org 0x38ba8
	movs r0, #128	@ 00038ba8 8020
.org 0x38baa
	lsls r0, r0, #2	@ 00038baa 8000
.org 0x38bac
	strh r0, [r1, #0]	@ 00038bac 0880
.org 0x38bae
	adds r0, #100	@ 00038bae 6430
.org 0x38bb0
	adds r1, r4, r0	@ 00038bb0 2118
.org 0x38bb2
	movs r0, #4	@ 00038bb2 0420
.org 0x38bb4
	strh r0, [r1, #0]	@ 00038bb4 0880
.org 0x38bb6
	b.n 0x38be8	@ 00038bb6 17e0
.org 0x38bb8
	.byte 0x5e,0x02,0x00,0x00	@ 00038bb8 data
.org 0x38bbc
	ldrh r1, [r2, #32]	@ 00038bbc 118c
.org 0x38bbe
	movs r3, #151	@ 00038bbe 9723
.org 0x38bc0
	lsls r3, r3, #2	@ 00038bc0 9b00
.org 0x38bc2
	adds r0, r4, r3	@ 00038bc2 e018
.org 0x38bc4
	strh r1, [r0, #0]	@ 00038bc4 0180
.org 0x38bc6
	ldrh r1, [r2, #34]	@ 00038bc6 518c
.org 0x38bc8
	adds r3, #2	@ 00038bc8 0233
.org 0x38bca
	adds r0, r4, r3	@ 00038bca e018
.org 0x38bcc
	strh r1, [r0, #0]	@ 00038bcc 0180
.org 0x38bce
	ldrh r1, [r2, #36]	@ 00038bce 918c
.org 0x38bd0
	adds r3, #2	@ 00038bd0 0233
.org 0x38bd2
	adds r0, r4, r3	@ 00038bd2 e018
.org 0x38bd4
	strh r1, [r0, #0]	@ 00038bd4 0180
.org 0x38bd6
	ldrh r1, [r2, #38]	@ 00038bd6 d18c
.org 0x38bd8
	adds r3, #2	@ 00038bd8 0233
.org 0x38bda
	adds r0, r4, r3	@ 00038bda e018
.org 0x38bdc
	strh r1, [r0, #0]	@ 00038bdc 0180
.org 0x38bde
	ldrh r1, [r2, #40]	@ 00038bde 118d
.org 0x38be0
	movs r2, #153	@ 00038be0 9922
.org 0x38be2
	lsls r2, r2, #2	@ 00038be2 9200
.org 0x38be4
	adds r0, r4, r2	@ 00038be4 a018
.org 0x38be6
	strh r1, [r0, #0]	@ 00038be6 0180
.org 0x38be8
	movs r3, #150	@ 00038be8 9623
.org 0x38bea
	lsls r3, r3, #2	@ 00038bea 9b00
.org 0x38bec
	adds r0, r4, r3	@ 00038bec e018
.org 0x38bee
	movs r1, #0	@ 00038bee 0021
.org 0x38bf0
	str r1, [r0, #0]	@ 00038bf0 0160
.org 0x38bf2
	ldr r2, [pc, #60]	@ 00038bf2 0f4a
.org 0x38bf4
	adds r0, r4, r2	@ 00038bf4 a018
.org 0x38bf6
	strb r1, [r0, #0]	@ 00038bf6 0170
.org 0x38bf8
	adds r3, #14	@ 00038bf8 0e33
.org 0x38bfa
	adds r0, r4, r3	@ 00038bfa e018
.org 0x38bfc
	strb r1, [r0, #0]	@ 00038bfc 0170
.org 0x38bfe
	subs r2, #16	@ 00038bfe 103a
.org 0x38c00
	adds r0, r4, r2	@ 00038c00 a018
.org 0x38c02
	strb r1, [r0, #0]	@ 00038c02 0170
.org 0x38c04
	adds r3, #3	@ 00038c04 0333
.org 0x38c06
	adds r0, r4, r3	@ 00038c06 e018
.org 0x38c08
	strb r1, [r0, #0]	@ 00038c08 0170
.org 0x38c0a
	adds r2, #3	@ 00038c0a 0332
.org 0x38c0c
	adds r0, r4, r2	@ 00038c0c a018
.org 0x38c0e
	strb r1, [r0, #0]	@ 00038c0e 0170
.org 0x38c10
	adds r3, #3	@ 00038c10 0333
.org 0x38c12
	adds r0, r4, r3	@ 00038c12 e018
.org 0x38c14
	strb r1, [r0, #0]	@ 00038c14 0170
.org 0x38c16
	adds r2, #3	@ 00038c16 0332
.org 0x38c18
	adds r0, r4, r2	@ 00038c18 a018
.org 0x38c1a
	strb r1, [r0, #0]	@ 00038c1a 0170
.org 0x38c1c
	adds r3, #2	@ 00038c1c 0233
.org 0x38c1e
	adds r0, r4, r3	@ 00038c1e e018
.org 0x38c20
	strb r1, [r0, #0]	@ 00038c20 0170
