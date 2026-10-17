@ FUN_08079b70  entry 0x08079b70  size 130
.thumb
.org 0x79b70
FUN_08079b70:
	push {r4, r5, lr}	@ 00079b70 30b5
.org 0x79b72
	adds r5, r0, #0	@ 00079b72 051c
.org 0x79b74
	adds r0, #180	@ 00079b74 b430
.org 0x79b76
	ldr r1, [r5, #84]	@ 00079b76 696d
.org 0x79b78
	ldr r0, [r0, #0]	@ 00079b78 0068
.org 0x79b7a
	cmp r1, r0	@ 00079b7a 8142
.org 0x79b7c
	bge.n 0x79b86	@ 00079b7c 03da
.org 0x79b7e
	movs r2, #128	@ 00079b7e 8022
.org 0x79b80
	lsls r2, r2, #1	@ 00079b80 5200
.org 0x79b82
	adds r0, r1, r2	@ 00079b82 8818
.org 0x79b84
	str r0, [r5, #84]	@ 00079b84 6865
.org 0x79b86
	ldrb r0, [r5, #14]	@ 00079b86 a87b
.org 0x79b88
	adds r4, r5, #0	@ 00079b88 2c1c
.org 0x79b8a
	adds r4, #219	@ 00079b8a db34
.org 0x79b8c
	cmp r0, #5	@ 00079b8c 0528
.org 0x79b8e
	bls.n 0x79b92	@ 00079b8e 00d9
.org 0x79b90
	b.n 0x79d62	@ 00079b90 e7e0
.org 0x79b92
	lsls r0, r0, #2	@ 00079b92 8000
.org 0x79b94
	ldr r1, [pc, #4]	@ 00079b94 0149
.org 0x79b96
	adds r0, r0, r1	@ 00079b96 4018
.org 0x79b98
	ldr r0, [r0, #0]	@ 00079b98 0068
.org 0x79b9a
	mov pc, r0	@ 00079b9a 8746
.org 0x79b9c
	.byte 0xa0,0x9b,0x07,0x08	@ 00079b9c data
.org 0x79ba0
	.byte 0xb8,0x9b,0x07,0x08	@ 00079ba0 data
.org 0x79ba4
	.byte 0x0c,0x9c,0x07,0x08	@ 00079ba4 data
.org 0x79ba8
	.byte 0x74,0x9c,0x07,0x08	@ 00079ba8 data
.org 0x79bac
	.byte 0xb0,0x9c,0x07,0x08	@ 00079bac data
.org 0x79bb0
	.byte 0xdc,0x9c,0x07,0x08	@ 00079bb0 data
.org 0x79bb4
	.byte 0x62,0x9d,0x07,0x08	@ 00079bb4 data
.org 0x79bb8
	.byte 0x27	@ 00079bb8 data
.org 0x79bb9
	.byte 0x48	@ 00079bb9 data
.org 0x79bba
	.byte 0x28	@ 00079bba data
.org 0x79bbb
	.byte 0x49	@ 00079bbb data
.org 0x79bbc
	.byte 0xdc	@ 00079bbc data
.org 0x79bbd
	.byte 0x24	@ 00079bbd data
.org 0x79bbe
	.byte 0x64	@ 00079bbe data
.org 0x79bbf
	.byte 0x00	@ 00079bbf data
.org 0x79bc0
	.byte 0x09	@ 00079bc0 data
.org 0x79bc1
	.byte 0x19	@ 00079bc1 data
.org 0x79bc2
	.byte 0x09	@ 00079bc2 data
.org 0x79bc3
	.byte 0x88	@ 00079bc3 data
.org 0x79bc4
	.byte 0xc2	@ 00079bc4 data
.org 0x79bc5
	.byte 0x88	@ 00079bc5 data
.org 0x79bc6
	.byte 0x92	@ 00079bc6 data
.org 0x79bc7
	.byte 0x09	@ 00079bc7 data
.org 0x79bc8
	.byte 0x89	@ 00079bc8 data
.org 0x79bc9
	.byte 0x1a	@ 00079bc9 data
.org 0x79bca
	.byte 0x49	@ 00079bca data
.org 0x79bcb
	.byte 0x01	@ 00079bcb data
.org 0x79bcc
	.byte 0x80	@ 00079bcc data
.org 0x79bcd
	.byte 0x23	@ 00079bcd data
.org 0x79bce
	.byte 0x5b	@ 00079bce data
.org 0x79bcf
	.byte 0x02	@ 00079bcf data
.org 0x79bd0
	.byte 0xc9	@ 00079bd0 data
.org 0x79bd1
	.byte 0x18	@ 00079bd1 data
.org 0x79bd2
	.byte 0x88	@ 00079bd2 data
.org 0x79bd3
	.byte 0xf7	@ 00079bd3 data
.org 0x79bd4
	.byte 0xad	@ 00079bd4 data
.org 0x79bd5
	.byte 0xf8	@ 00079bd5 data
.org 0x79bd6
	.byte 0x22	@ 00079bd6 data
.org 0x79bd7
	.byte 0x48	@ 00079bd7 data
.org 0x79bd8
	.byte 0x22	@ 00079bd8 data
.org 0x79bd9
	.byte 0x49	@ 00079bd9 data
.org 0x79bda
	.byte 0x09	@ 00079bda data
.org 0x79bdb
	.byte 0x19	@ 00079bdb data
.org 0x79bdc
	.byte 0x09	@ 00079bdc data
.org 0x79bdd
	.byte 0x88	@ 00079bdd data
.org 0x79bde
	.byte 0xc2	@ 00079bde data
.org 0x79bdf
	.byte 0x79	@ 00079bdf data
.org 0x79be0
	.byte 0x89	@ 00079be0 data
.org 0x79be1
	.byte 0x1a	@ 00079be1 data
.org 0x79be2
	.byte 0x49	@ 00079be2 data
.org 0x79be3
	.byte 0x01	@ 00079be3 data
.org 0x79be4
	.byte 0x80	@ 00079be4 data
.org 0x79be5
	.byte 0x22	@ 00079be5 data
.org 0x79be6
	.byte 0x92	@ 00079be6 data
.org 0x79be7
	.byte 0x00	@ 00079be7 data
.org 0x79be8
	.byte 0x89	@ 00079be8 data
.org 0x79be9
	.byte 0x18	@ 00079be9 data
.org 0x79bea
	.byte 0x88	@ 00079bea data
.org 0x79beb
	.byte 0xf7	@ 00079beb data
.org 0x79bec
	.byte 0x0d	@ 00079bec data
.org 0x79bed
	.byte 0xfb	@ 00079bed data
.org 0x79bee
	.byte 0x28	@ 00079bee data
.org 0x79bef
	.byte 0x1c	@ 00079bef data
.org 0x79bf0
	.byte 0x00	@ 00079bf0 data
.org 0x79bf1
	.byte 0x21	@ 00079bf1 data
