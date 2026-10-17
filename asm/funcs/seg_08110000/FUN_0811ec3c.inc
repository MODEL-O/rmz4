@ FUN_0811ec3c  entry 0x0811ec3c  size 176
.thumb
.org 0x11ec3c
FUN_0811ec3c:
	push {r4, r5, r6, lr}	@ 0011ec3c 70b5
.org 0x11ec3e
	adds r4, r0, #0	@ 0011ec3e 041c
.org 0x11ec40
	lsls r1, r1, #24	@ 0011ec40 0906
.org 0x11ec42
	lsrs r6, r1, #24	@ 0011ec42 0e0e
.org 0x11ec44
	ldr r5, [pc, #80]	@ 0011ec44 144d
.org 0x11ec46
	ldrh r1, [r5, #6]	@ 0011ec46 e988
.org 0x11ec48
	movs r0, #128	@ 0011ec48 8020
.org 0x11ec4a
	ands r0, r1	@ 0011ec4a 0840
.org 0x11ec4c
	cmp r0, #0	@ 0011ec4c 0028
.org 0x11ec4e
	beq.n 0x11ec60	@ 0011ec4e 07d0
.org 0x11ec50
	movs r0, #1	@ 0011ec50 0120
.org 0x11ec52
	bl 0x2b10	@ 0011ec52 e3f65dff
.org 0x11ec56
	ldrh r0, [r4, #10]	@ 0011ec56 6089
.org 0x11ec58
	adds r0, #1	@ 0011ec58 0130
.org 0x11ec5a
	movs r1, #1	@ 0011ec5a 0121
.org 0x11ec5c
	ands r0, r1	@ 0011ec5c 0840
.org 0x11ec5e
	strh r0, [r4, #10]	@ 0011ec5e 6081
.org 0x11ec60
	ldrh r1, [r5, #6]	@ 0011ec60 e988
.org 0x11ec62
	movs r0, #64	@ 0011ec62 4020
.org 0x11ec64
	ands r0, r1	@ 0011ec64 0840
.org 0x11ec66
	cmp r0, #0	@ 0011ec66 0028
.org 0x11ec68
	beq.n 0x11ec7a	@ 0011ec68 07d0
.org 0x11ec6a
	movs r0, #1	@ 0011ec6a 0120
.org 0x11ec6c
	bl 0x2b10	@ 0011ec6c e3f650ff
.org 0x11ec70
	ldrh r0, [r4, #10]	@ 0011ec70 6089
.org 0x11ec72
	adds r0, #1	@ 0011ec72 0130
.org 0x11ec74
	movs r1, #1	@ 0011ec74 0121
.org 0x11ec76
	ands r0, r1	@ 0011ec76 0840
.org 0x11ec78
	strh r0, [r4, #10]	@ 0011ec78 6081
.org 0x11ec7a
	cmp r6, #0	@ 0011ec7a 002e
.org 0x11ec7c
	bne.n 0x11eca4	@ 0011ec7c 12d1
.org 0x11ec7e
	ldr r0, [pc, #28]	@ 0011ec7e 0748
.org 0x11ec80
	ldrh r0, [r0, #0]	@ 0011ec80 0088
.org 0x11ec82
	ldr r1, [pc, #28]	@ 0011ec82 0749
.org 0x11ec84
	adds r0, r0, r1	@ 0011ec84 4018
.org 0x11ec86
	movs r1, #10	@ 0011ec86 0a21
.org 0x11ec88
	ldrsh r2, [r4, r1]	@ 0011ec88 625e
.org 0x11ec8a
	lsls r2, r2, #1	@ 0011ec8a 5200
.org 0x11ec8c
	adds r2, #13	@ 0011ec8c 0d32
.org 0x11ec8e
	movs r1, #2	@ 0011ec8e 0221
.org 0x11ec90
	bl 0x10d85c	@ 0011ec90 eef7e4fd
.org 0x11ec94
	b.n 0x11ecba	@ 0011ec94 11e0
.org 0x11ec96
	.byte 0x00	@ 0011ec96 data
.org 0x11ec97
	.byte 0x00	@ 0011ec97 data
.org 0x11ec98
	.byte 0x60,0x07,0x00,0x02	@ 0011ec98 data
.org 0x11ec9c
	.byte 0xf8,0xcf,0x86,0x08	@ 0011ec9c data
.org 0x11eca0
	.byte 0x5f,0x0e,0x01,0x09	@ 0011eca0 data
.org 0x11eca4
	ldr r0, [pc, #44]	@ 0011eca4 0b48
.org 0x11eca6
	ldrh r0, [r0, #0]	@ 0011eca6 0088
.org 0x11eca8
	ldr r1, [pc, #44]	@ 0011eca8 0b49
.org 0x11ecaa
	adds r0, r0, r1	@ 0011ecaa 4018
.org 0x11ecac
	movs r1, #10	@ 0011ecac 0a21
.org 0x11ecae
	ldrsh r2, [r4, r1]	@ 0011ecae 625e
.org 0x11ecb0
	lsls r2, r2, #1	@ 0011ecb0 5200
.org 0x11ecb2
	adds r2, #15	@ 0011ecb2 0f32
.org 0x11ecb4
	movs r1, #8	@ 0011ecb4 0821
.org 0x11ecb6
	bl 0x10d85c	@ 0011ecb6 eef7d1fd
.org 0x11ecba
	ldr r0, [pc, #32]	@ 0011ecba 0848
.org 0x11ecbc
	ldrh r1, [r0, #4]	@ 0011ecbc 8188
.org 0x11ecbe
	movs r0, #2	@ 0011ecbe 0220
.org 0x11ecc0
	ands r0, r1	@ 0011ecc0 0840
.org 0x11ecc2
	cmp r0, #0	@ 0011ecc2 0028
.org 0x11ecc4
	beq.n 0x11ece0	@ 0011ecc4 0cd0
.org 0x11ecc6
	movs r0, #3	@ 0011ecc6 0320
.org 0x11ecc8
	bl 0x2b10	@ 0011ecc8 e3f622ff
.org 0x11eccc
	movs r0, #2	@ 0011eccc 0220
.org 0x11ecce
	negs r0, r0	@ 0011ecce 4042
.org 0x11ecd0
	b.n 0x11ed02	@ 0011ecd0 17e0
.org 0x11ecd2
	.byte 0x00	@ 0011ecd2 data
.org 0x11ecd3
	.byte 0x00	@ 0011ecd3 data
.org 0x11ecd4
	.byte 0xf8,0xcf,0x86,0x08	@ 0011ecd4 data
.org 0x11ecd8
	.byte 0x5f,0x0e,0x01,0x09	@ 0011ecd8 data
.org 0x11ecdc
	.byte 0x60,0x07,0x00,0x02	@ 0011ecdc data
.org 0x11ece0
	movs r0, #1	@ 0011ece0 0120
.org 0x11ece2
	ands r0, r1	@ 0011ece2 0840
.org 0x11ece4
	cmp r0, #0	@ 0011ece4 0028
.org 0x11ece6
	beq.n 0x11ed00	@ 0011ece6 0bd0
.org 0x11ece8
	movs r0, #2	@ 0011ece8 0220
.org 0x11ecea
	bl 0x2b10	@ 0011ecea e3f611ff
