@ FUN_08078b04  entry 0x08078b04  size 162
.thumb
.org 0x78b04
FUN_08078b04:
	push {r4, r5, lr}	@ 00078b04 30b5
.org 0x78b06
	adds r4, r0, #0	@ 00078b06 041c
.org 0x78b08
	ldrb r5, [r4, #15]	@ 00078b08 e57b
.org 0x78b0a
	cmp r5, #0	@ 00078b0a 002d
.org 0x78b0c
	bne.n 0x78b4c	@ 00078b0c 1ed1
.org 0x78b0e
	movs r0, #132	@ 00078b0e 8420
.org 0x78b10
	bl 0x2624	@ 00078b10 89f788fd
.org 0x78b14
	movs r1, #176	@ 00078b14 b021
.org 0x78b16
	lsls r1, r1, #2	@ 00078b16 8900
.org 0x78b18
	movs r0, #133	@ 00078b18 8520
.org 0x78b1a
	bl 0x249c	@ 00078b1a 89f7bffc
.org 0x78b1e
	adds r1, r4, #0	@ 00078b1e 211c
.org 0x78b20
	adds r1, #200	@ 00078b20 c831
.org 0x78b22
	ldr r0, [r1, #0]	@ 00078b22 0868
.org 0x78b24
	adds r0, #181	@ 00078b24 b530
.org 0x78b26
	movs r2, #1	@ 00078b26 0122
.org 0x78b28
	strb r2, [r0, #0]	@ 00078b28 0270
.org 0x78b2a
	ldr r0, [r1, #0]	@ 00078b2a 0868
.org 0x78b2c
	adds r0, #182	@ 00078b2c b630
.org 0x78b2e
	strb r2, [r0, #0]	@ 00078b2e 0270
.org 0x78b30
	adds r1, #4	@ 00078b30 0431
.org 0x78b32
	ldr r0, [r1, #0]	@ 00078b32 0868
.org 0x78b34
	adds r0, #182	@ 00078b34 b630
.org 0x78b36
	strb r5, [r0, #0]	@ 00078b36 0570
.org 0x78b38
	ldr r0, [r1, #0]	@ 00078b38 0868
.org 0x78b3a
	adds r0, #185	@ 00078b3a b930
.org 0x78b3c
	strb r2, [r0, #0]	@ 00078b3c 0270
.org 0x78b3e
	adds r0, r4, #0	@ 00078b3e 201c
.org 0x78b40
	movs r1, #0	@ 00078b40 0021
.org 0x78b42
	bl 0x78fdc	@ 00078b42 00f04bfa
.org 0x78b46
	ldrb r0, [r4, #15]	@ 00078b46 e07b
.org 0x78b48
	adds r0, #1	@ 00078b48 0130
.org 0x78b4a
	strb r0, [r4, #15]	@ 00078b4a e073
.org 0x78b4c
	adds r0, r4, #0	@ 00078b4c 201c
.org 0x78b4e
	bl 0x1cff0	@ 00078b4e a4f74ffa
.org 0x78b52
	adds r0, r4, #0	@ 00078b52 201c
.org 0x78b54
	adds r0, #116	@ 00078b54 7430
.org 0x78b56
	ldr r3, [pc, #80]	@ 00078b56 144b
.org 0x78b58
	ldr r2, [pc, #80]	@ 00078b58 144a
.org 0x78b5a
	adds r1, r4, #0	@ 00078b5a 211c
.org 0x78b5c
	adds r1, #196	@ 00078b5c c431
.org 0x78b5e
	ldrb r1, [r1, #0]	@ 00078b5e 0978
.org 0x78b60
	lsls r1, r1, #1	@ 00078b60 4900
.org 0x78b62
	adds r1, r1, r2	@ 00078b62 8918
.org 0x78b64
	ldrh r2, [r1, #0]	@ 00078b64 0a88
.org 0x78b66
	lsls r2, r2, #2	@ 00078b66 9200
.org 0x78b68
	adds r2, r2, r3	@ 00078b68 d218
.org 0x78b6a
	adds r1, r4, #0	@ 00078b6a 211c
.org 0x78b6c
	adds r1, #113	@ 00078b6c 7131
.org 0x78b6e
	ldrb r1, [r1, #0]	@ 00078b6e 0978
.org 0x78b70
	lsls r1, r1, #24	@ 00078b70 0906
.org 0x78b72
	asrs r1, r1, #24	@ 00078b72 0916
.org 0x78b74
	ldr r2, [r2, #0]	@ 00078b74 1268
.org 0x78b76
	lsls r1, r1, #2	@ 00078b76 8900
.org 0x78b78
	adds r1, r1, r2	@ 00078b78 8918
.org 0x78b7a
	ldr r1, [r1, #0]	@ 00078b7a 0968
.org 0x78b7c
	bl 0x5784	@ 00078b7c 8cf702fe
.org 0x78b80
	adds r0, r4, #0	@ 00078b80 201c
.org 0x78b82
	bl 0x78f28	@ 00078b82 00f0d1f9
.org 0x78b86
	movs r0, #133	@ 00078b86 8520
.org 0x78b88
	bl 0x25d8	@ 00078b88 89f726fd
.org 0x78b8c
	lsls r0, r0, #24	@ 00078b8c 0006
.org 0x78b8e
	lsrs r0, r0, #24	@ 00078b8e 000e
.org 0x78b90
	subs r0, #3	@ 00078b90 0338
.org 0x78b92
	cmp r0, #1	@ 00078b92 0128
.org 0x78b94
	bhi.n 0x78ba0	@ 00078b94 04d8
.org 0x78b96
	ldrb r0, [r4, #14]	@ 00078b96 a07b
.org 0x78b98
	adds r0, #1	@ 00078b98 0130
.org 0x78b9a
	movs r1, #0	@ 00078b9a 0021
.org 0x78b9c
	strb r0, [r4, #14]	@ 00078b9c a073
.org 0x78b9e
	strb r1, [r4, #15]	@ 00078b9e e173
.org 0x78ba0
	pop {r4, r5}	@ 00078ba0 30bc
.org 0x78ba2
	pop {r0}	@ 00078ba2 01bc
.org 0x78ba4
	bx r0	@ 00078ba4 0047
