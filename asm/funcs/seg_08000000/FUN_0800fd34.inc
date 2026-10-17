@ FUN_0800fd34  entry 0x0800fd34  size 138
.thumb
.org 0xfd34
FUN_0800fd34:
	push {r4, r5, r6, lr}	@ 0000fd34 70b5
.org 0xfd36
	adds r5, r0, #0	@ 0000fd36 051c
.org 0xfd38
	ldrb r6, [r5, #14]	@ 0000fd38 ae7b
.org 0xfd3a
	cmp r6, #0	@ 0000fd3a 002e
.org 0xfd3c
	bne.n 0xfdc8	@ 0000fd3c 44d1
.org 0xfd3e
	ldr r0, [r5, #92]	@ 0000fd3e e86d
.org 0xfd40
	lsls r0, r0, #16	@ 0000fd40 0004
.org 0xfd42
	lsrs r0, r0, #20	@ 0000fd42 000d
.org 0xfd44
	lsls r2, r0, #1	@ 0000fd44 4200
.org 0xfd46
	ldr r3, [pc, #68]	@ 0000fd46 114b
.org 0xfd48
	adds r2, r2, r3	@ 0000fd48 d218
.org 0xfd4a
	ldr r4, [r5, #100]	@ 0000fd4a 6c6e
.org 0xfd4c
	movs r1, #71	@ 0000fd4c 4721
.org 0xfd4e
	orrs r4, r1	@ 0000fd4e 0c43
.org 0xfd50
	strh r4, [r2, #0]	@ 0000fd50 1480
.org 0xfd52
	lsls r0, r0, #2	@ 0000fd52 8000
.org 0xfd54
	adds r3, #8	@ 0000fd54 0833
.org 0xfd56
	adds r0, r0, r3	@ 0000fd56 c018
.org 0xfd58
	str r6, [r0, #0]	@ 0000fd58 0660
.org 0xfd5a
	ldr r0, [pc, #52]	@ 0000fd5a 0d48
.org 0xfd5c
	ldr r1, [pc, #52]	@ 0000fd5c 0d49
.org 0xfd5e
	adds r0, r0, r1	@ 0000fd5e 4018
.org 0xfd60
	ldrb r1, [r0, #0]	@ 0000fd60 0178
.org 0xfd62
	movs r0, #15	@ 0000fd62 0f20
.org 0xfd64
	ands r0, r1	@ 0000fd64 0840
.org 0xfd66
	cmp r0, #3	@ 0000fd66 0328
.org 0xfd68
	bne.n 0xfda0	@ 0000fd68 1ad1
.org 0xfd6a
	ldr r0, [pc, #44]	@ 0000fd6a 0b48
.org 0xfd6c
	ldr r0, [r0, #0]	@ 0000fd6c 0068
.org 0xfd6e
	ldr r1, [pc, #44]	@ 0000fd6e 0b49
.org 0xfd70
	adds r0, r0, r1	@ 0000fd70 4018
.org 0xfd72
	movs r1, #248	@ 0000fd72 f821
.org 0xfd74
	lsls r1, r1, #5	@ 0000fd74 4901
.org 0xfd76
	ands r4, r1	@ 0000fd76 0c40
.org 0xfd78
	lsls r1, r4, #3	@ 0000fd78 e100
.org 0xfd7a
	movs r2, #192	@ 0000fd7a c022
.org 0xfd7c
	lsls r2, r2, #19	@ 0000fd7c d204
.org 0xfd7e
	adds r1, r1, r2	@ 0000fd7e 8918
.org 0xfd80
	movs r2, #128	@ 0000fd80 8022
.org 0xfd82
	lsls r2, r2, #2	@ 0000fd82 9200
.org 0xfd84
	bl 0x128be0	@ 0000fd84 18f12cff
.org 0xfd88
	b.n 0xfdbe	@ 0000fd88 19e0
.org 0xfd8a
	.byte 0x00	@ 0000fd8a data
.org 0xfd8b
	.byte 0x00	@ 0000fd8b data
.org 0xfd8c
	.byte 0x04,0x0a,0x00,0x02	@ 0000fd8c data
.org 0xfd90
	.byte 0xb0,0x0a,0x00,0x02	@ 0000fd90 data
.org 0xfd94
	.byte 0x10,0xc0,0x02,0x00	@ 0000fd94 data
.org 0xfd98
	.byte 0x80,0xc1,0xb2,0x08	@ 0000fd98 data
.org 0xfd9c
	.byte 0x88,0xc1,0xb2,0x08	@ 0000fd9c data
.org 0xfda0
	ldr r0, [pc, #48]	@ 0000fda0 0c48
.org 0xfda2
	ldr r0, [r0, #0]	@ 0000fda2 0068
.org 0xfda4
	ldr r1, [pc, #48]	@ 0000fda4 0c49
.org 0xfda6
	adds r0, r0, r1	@ 0000fda6 4018
.org 0xfda8
	movs r1, #248	@ 0000fda8 f821
.org 0xfdaa
	lsls r1, r1, #5	@ 0000fdaa 4901
.org 0xfdac
	ands r4, r1	@ 0000fdac 0c40
.org 0xfdae
	lsls r1, r4, #3	@ 0000fdae e100
.org 0xfdb0
	movs r2, #192	@ 0000fdb0 c022
.org 0xfdb2
	lsls r2, r2, #19	@ 0000fdb2 d204
.org 0xfdb4
	adds r1, r1, r2	@ 0000fdb4 8918
.org 0xfdb6
	movs r2, #128	@ 0000fdb6 8022
.org 0xfdb8
	lsls r2, r2, #2	@ 0000fdb8 9200
.org 0xfdba
	bl 0x128be0	@ 0000fdba 18f111ff
