@ FUN_08028ae8  entry 0x08028ae8  size 124
.thumb
.org 0x28ae8
FUN_08028ae8:
	push {r4, r5, lr}	@ 00028ae8 30b5
.org 0x28aea
	adds r4, r0, #0	@ 00028aea 041c
.org 0x28aec
	ldr r5, [r4, #32]	@ 00028aec 256a
.org 0x28aee
	ldr r1, [r4, #12]	@ 00028aee e168
.org 0x28af0
	ldrb r0, [r1, #1]	@ 00028af0 4878
.org 0x28af2
	cmp r0, #0	@ 00028af2 0028
.org 0x28af4
	bne.n 0x28b04	@ 00028af4 06d1
.org 0x28af6
	movs r2, #170	@ 00028af6 aa22
.org 0x28af8
	lsls r2, r2, #1	@ 00028af8 5200
.org 0x28afa
	adds r0, r4, r2	@ 00028afa a018
.org 0x28afc
	ldr r0, [r0, #0]	@ 00028afc 0068
.org 0x28afe
	cmp r0, #0	@ 00028afe 0028
.org 0x28b00
	bne.n 0x28b10	@ 00028b00 06d1
.org 0x28b02
	b.n 0x28c54	@ 00028b02 a7e0
.org 0x28b04
	ldr r0, [pc, #20]	@ 00028b04 0548
.org 0x28b06
	ldr r0, [r0, #0]	@ 00028b06 0068
.org 0x28b08
	movs r2, #10	@ 00028b08 0a22
.org 0x28b0a
	ldrsh r0, [r0, r2]	@ 00028b0a 805e
.org 0x28b0c
	cmp r0, #0	@ 00028b0c 0028
.org 0x28b0e
	bne.n 0x28b20	@ 00028b0e 07d1
.org 0x28b10
	adds r0, r1, #0	@ 00028b10 081c
.org 0x28b12
	subs r0, #8	@ 00028b12 0838
.org 0x28b14
	str r0, [r4, #12]	@ 00028b14 e060
.org 0x28b16
	movs r0, #1	@ 00028b16 0120
.org 0x28b18
	b.n 0x28c56	@ 00028b18 9de0
.org 0x28b1a
	.byte 0x00	@ 00028b1a data
.org 0x28b1b
	.byte 0x00	@ 00028b1b data
.org 0x28b1c
	.byte 0x9c,0xed,0x02,0x02	@ 00028b1c data
.org 0x28b20
	movs r1, #170	@ 00028b20 aa21
.org 0x28b22
	lsls r1, r1, #1	@ 00028b22 4900
.org 0x28b24
	adds r0, r4, r1	@ 00028b24 6018
.org 0x28b26
	ldr r2, [r0, #0]	@ 00028b26 0268
.org 0x28b28
	cmp r2, #0	@ 00028b28 002a
.org 0x28b2a
	beq.n 0x28b4a	@ 00028b2a 0ed0
.org 0x28b2c
	ldrb r1, [r2, #10]	@ 00028b2c 917a
.org 0x28b2e
	movs r0, #254	@ 00028b2e fe20
.org 0x28b30
	ands r0, r1	@ 00028b30 0840
.org 0x28b32
	movs r1, #253	@ 00028b32 fd21
.org 0x28b34
	ands r0, r1	@ 00028b34 0840
.org 0x28b36
	strb r0, [r2, #10]	@ 00028b36 9072
.org 0x28b38
	ldr r1, [pc, #40]	@ 00028b38 0a49
.org 0x28b3a
	ldrb r0, [r2, #9]	@ 00028b3a 507a
.org 0x28b3c
	lsls r0, r0, #2	@ 00028b3c 8000
.org 0x28b3e
	adds r0, r0, r1	@ 00028b3e 4018
.org 0x28b40
	movs r1, #3	@ 00028b40 0321
.org 0x28b42
	str r1, [r2, #12]	@ 00028b42 d160
.org 0x28b44
	ldr r0, [r0, #0]	@ 00028b44 0068
.org 0x28b46
	ldr r0, [r0, #12]	@ 00028b46 c068
.org 0x28b48
	str r0, [r2, #20]	@ 00028b48 5061
.org 0x28b4a
	ldr r1, [r4, #12]	@ 00028b4a e168
.org 0x28b4c
	ldrb r0, [r1, #1]	@ 00028b4c 4878
.org 0x28b4e
	subs r0, #1	@ 00028b4e 0138
.org 0x28b50
	adds r2, r1, #0	@ 00028b50 0a1c
.org 0x28b52
	cmp r0, #5	@ 00028b52 0528
.org 0x28b54
	bls.n 0x28b58	@ 00028b54 00d9
.org 0x28b56
	b.n 0x28c54	@ 00028b56 7de0
.org 0x28b58
	lsls r0, r0, #2	@ 00028b58 8000
.org 0x28b5a
	ldr r1, [pc, #12]	@ 00028b5a 0349
.org 0x28b5c
	adds r0, r0, r1	@ 00028b5c 4018
.org 0x28b5e
	ldr r0, [r0, #0]	@ 00028b5e 0068
.org 0x28b60
	mov pc, r0	@ 00028b60 8746
.org 0x28b62
	.byte 0x00	@ 00028b62 data
.org 0x28b63
	.byte 0x00	@ 00028b63 data
