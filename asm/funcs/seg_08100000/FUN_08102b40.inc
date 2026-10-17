@ FUN_08102b40  entry 0x08102b40  size 170
.thumb
.org 0x102b40
FUN_08102b40:
	push {r4, lr}	@ 00102b40 10b5
.org 0x102b42
	movs r4, #1	@ 00102b42 0124
.org 0x102b44
	movs r0, #98	@ 00102b44 6220
.org 0x102b46
	bl 0x6984	@ 00102b46 03f71dff
.org 0x102b4a
	ldr r2, [pc, #44]	@ 00102b4a 0b4a
.org 0x102b4c
	ldrb r1, [r2, #7]	@ 00102b4c d179
.org 0x102b4e
	adds r0, r4, #0	@ 00102b4e 201c
.org 0x102b50
	ands r0, r1	@ 00102b50 0840
.org 0x102b52
	cmp r0, #0	@ 00102b52 0028
.org 0x102b54
	beq.n 0x102b7c	@ 00102b54 12d0
.org 0x102b56
	movs r4, #17	@ 00102b56 1124
.org 0x102b58
	movs r0, #2	@ 00102b58 0220
.org 0x102b5a
	ands r0, r1	@ 00102b5a 0840
.org 0x102b5c
	cmp r0, #0	@ 00102b5c 0028
.org 0x102b5e
	beq.n 0x102bce	@ 00102b5e 36d0
.org 0x102b60
	movs r4, #19	@ 00102b60 1324
.org 0x102b62
	movs r0, #4	@ 00102b62 0420
.org 0x102b64
	ands r0, r1	@ 00102b64 0840
.org 0x102b66
	cmp r0, #0	@ 00102b66 0028
.org 0x102b68
	beq.n 0x102bce	@ 00102b68 31d0
.org 0x102b6a
	movs r4, #21	@ 00102b6a 1524
.org 0x102b6c
	movs r0, #8	@ 00102b6c 0820
.org 0x102b6e
	ands r0, r1	@ 00102b6e 0840
.org 0x102b70
	cmp r0, #0	@ 00102b70 0028
.org 0x102b72
	beq.n 0x102bce	@ 00102b72 2cd0
.org 0x102b74
	movs r4, #23	@ 00102b74 1724
.org 0x102b76
	b.n 0x102bce	@ 00102b76 2ae0
.org 0x102b78
	.byte 0xb0,0xe8,0x02,0x02	@ 00102b78 data
.org 0x102b7c
	ldrb r1, [r2, #6]	@ 00102b7c 9179
.org 0x102b7e
	movs r0, #16	@ 00102b7e 1020
.org 0x102b80
	ands r0, r1	@ 00102b80 0840
.org 0x102b82
	cmp r0, #0	@ 00102b82 0028
.org 0x102b84
	beq.n 0x102ba8	@ 00102b84 10d0
.org 0x102b86
	movs r4, #9	@ 00102b86 0924
.org 0x102b88
	movs r0, #32	@ 00102b88 2020
.org 0x102b8a
	ands r0, r1	@ 00102b8a 0840
.org 0x102b8c
	cmp r0, #0	@ 00102b8c 0028
.org 0x102b8e
	beq.n 0x102bce	@ 00102b8e 1ed0
.org 0x102b90
	movs r4, #11	@ 00102b90 0b24
.org 0x102b92
	movs r0, #64	@ 00102b92 4020
.org 0x102b94
	ands r0, r1	@ 00102b94 0840
.org 0x102b96
	cmp r0, #0	@ 00102b96 0028
.org 0x102b98
	beq.n 0x102bce	@ 00102b98 19d0
.org 0x102b9a
	movs r4, #13	@ 00102b9a 0d24
.org 0x102b9c
	movs r0, #128	@ 00102b9c 8020
.org 0x102b9e
	ands r0, r1	@ 00102b9e 0840
.org 0x102ba0
	cmp r0, #0	@ 00102ba0 0028
.org 0x102ba2
	beq.n 0x102bce	@ 00102ba2 14d0
.org 0x102ba4
	movs r4, #15	@ 00102ba4 0f24
.org 0x102ba6
	b.n 0x102bce	@ 00102ba6 12e0
.org 0x102ba8
	adds r0, r4, #0	@ 00102ba8 201c
.org 0x102baa
	ands r0, r1	@ 00102baa 0840
.org 0x102bac
	cmp r0, #0	@ 00102bac 0028
.org 0x102bae
	beq.n 0x102bce	@ 00102bae 0ed0
.org 0x102bb0
	movs r0, #2	@ 00102bb0 0220
.org 0x102bb2
	ands r0, r1	@ 00102bb2 0840
.org 0x102bb4
	cmp r0, #0	@ 00102bb4 0028
.org 0x102bb6
	beq.n 0x102bce	@ 00102bb6 0ad0
.org 0x102bb8
	movs r4, #3	@ 00102bb8 0324
.org 0x102bba
	movs r0, #4	@ 00102bba 0420
.org 0x102bbc
	ands r0, r1	@ 00102bbc 0840
.org 0x102bbe
	cmp r0, #0	@ 00102bbe 0028
.org 0x102bc0
	beq.n 0x102bce	@ 00102bc0 05d0
.org 0x102bc2
	movs r4, #5	@ 00102bc2 0524
.org 0x102bc4
	movs r0, #8	@ 00102bc4 0820
.org 0x102bc6
	ands r0, r1	@ 00102bc6 0840
.org 0x102bc8
	cmp r0, #0	@ 00102bc8 0028
.org 0x102bca
	beq.n 0x102bce	@ 00102bca 00d0
.org 0x102bcc
	movs r4, #7	@ 00102bcc 0724
.org 0x102bce
	ldr r1, [pc, #16]	@ 00102bce 0449
.org 0x102bd0
	ldrb r0, [r1, #29]	@ 00102bd0 487f
.org 0x102bd2
	cmp r0, r4	@ 00102bd2 a042
.org 0x102bd4
	bne.n 0x102be4	@ 00102bd4 06d1
.org 0x102bd6
	adds r0, r4, #1	@ 00102bd6 601c
.org 0x102bd8
	lsls r0, r0, #24	@ 00102bd8 0006
.org 0x102bda
	lsrs r4, r0, #24	@ 00102bda 040e
.org 0x102bdc
	b.n 0x102be6	@ 00102bdc 03e0
.org 0x102bde
	.byte 0x00	@ 00102bde data
.org 0x102bdf
	.byte 0x00	@ 00102bdf data
.org 0x102be0
	.byte 0xb0,0xe8,0x02,0x02	@ 00102be0 data
.org 0x102be4
	strb r4, [r1, #29]	@ 00102be4 4c77
.org 0x102be6
	ldr r0, [pc, #12]	@ 00102be6 0348
.org 0x102be8
	lsls r1, r4, #1	@ 00102be8 6100
