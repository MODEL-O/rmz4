@ FUN_08040bb4  entry 0x08040bb4  size 192
.thumb
.org 0x40bb4
FUN_08040bb4:
	push {r4, r5, lr}	@ 00040bb4 30b5
.org 0x40bb6
	adds r5, r0, #0	@ 00040bb6 051c
.org 0x40bb8
	adds r3, r5, #0	@ 00040bb8 2b1c
.org 0x40bba
	adds r3, #180	@ 00040bba b433
.org 0x40bbc
	adds r2, r5, #0	@ 00040bbc 2a1c
.org 0x40bbe
	adds r2, #250	@ 00040bbe fa32
.org 0x40bc0
	ldrb r0, [r2, #0]	@ 00040bc0 1078
.org 0x40bc2
	cmp r0, #2	@ 00040bc2 0228
.org 0x40bc4
	bne.n 0x40bca	@ 00040bc4 01d1
.org 0x40bc6
	movs r0, #0	@ 00040bc6 0020
.org 0x40bc8
	b.n 0x40c7e	@ 00040bc8 59e0
.org 0x40bca
	cmp r0, #8	@ 00040bca 0828
.org 0x40bcc
	bne.n 0x40bda	@ 00040bcc 05d1
.org 0x40bce
	movs r1, #0	@ 00040bce 0021
.org 0x40bd0
	movs r0, #2	@ 00040bd0 0220
.org 0x40bd2
	strb r0, [r2, #0]	@ 00040bd2 1070
.org 0x40bd4
	strb r1, [r3, #15]	@ 00040bd4 d973
.org 0x40bd6
	movs r0, #0	@ 00040bd6 0020
.org 0x40bd8
	b.n 0x40c7e	@ 00040bd8 51e0
.org 0x40bda
	ldr r0, [pc, #68]	@ 00040bda 1148
.org 0x40bdc
	ldr r0, [r0, #0]	@ 00040bdc 0068
.org 0x40bde
	bl 0x5500	@ 00040bde c4f78ffc
.org 0x40be2
	adds r4, r0, #0	@ 00040be2 041c
.org 0x40be4
	cmp r4, #0	@ 00040be4 002c
.org 0x40be6
	beq.n 0x40c7c	@ 00040be6 49d0
.org 0x40be8
	adds r3, r5, #0	@ 00040be8 2b1c
.org 0x40bea
	adds r3, #248	@ 00040bea f833
.org 0x40bec
	ldrb r2, [r3, #0]	@ 00040bec 1a78
.org 0x40bee
	cmp r2, #2	@ 00040bee 022a
.org 0x40bf0
	bne.n 0x40c30	@ 00040bf0 1ed1
.org 0x40bf2
	ldr r1, [pc, #48]	@ 00040bf2 0c49
.org 0x40bf4
	movs r0, #10	@ 00040bf4 0a20
.org 0x40bf6
	strb r0, [r4, #9]	@ 00040bf6 6072
.org 0x40bf8
	ldr r0, [r1, #40]	@ 00040bf8 886a
.org 0x40bfa
	ldr r0, [r0, #0]	@ 00040bfa 0068
.org 0x40bfc
	str r0, [r4, #20]	@ 00040bfc 6061
.org 0x40bfe
	ldrb r1, [r4, #11]	@ 00040bfe e17a
.org 0x40c00
	movs r0, #191	@ 00040c00 bf20
.org 0x40c02
	ands r0, r1	@ 00040c02 0840
.org 0x40c04
	strb r0, [r4, #11]	@ 00040c04 e072
.org 0x40c06
	adds r1, r4, #0	@ 00040c06 211c
.org 0x40c08
	adds r1, #37	@ 00040c08 2531
.org 0x40c0a
	movs r0, #16	@ 00040c0a 1020
.org 0x40c0c
	strb r0, [r1, #0]	@ 00040c0c 0870
.org 0x40c0e
	ldr r0, [pc, #24]	@ 00040c0e 0648
.org 0x40c10
	ldrh r0, [r0, #0]	@ 00040c10 0088
.org 0x40c12
	strh r0, [r4, #32]	@ 00040c12 2084
.org 0x40c14
	ldr r0, [pc, #20]	@ 00040c14 0548
.org 0x40c16
	ldrb r0, [r0, #0]	@ 00040c16 0078
.org 0x40c18
	subs r1, #3	@ 00040c18 0339
.org 0x40c1a
	strb r0, [r1, #0]	@ 00040c1a 0870
.org 0x40c1c
	strb r2, [r3, #0]	@ 00040c1c 1a70
.org 0x40c1e
	b.n 0x40c64	@ 00040c1e 21e0
.org 0x40c20
	.byte 0x88,0xed,0x02,0x02	@ 00040c20 data
.org 0x40c24
	.byte 0xf8,0x39,0x85,0x08	@ 00040c24 data
.org 0x40c28
	.byte 0xfc,0x36,0x85,0x08	@ 00040c28 data
.org 0x40c2c
	.byte 0x04,0x37,0x85,0x08	@ 00040c2c data
.org 0x40c30
	ldr r1, [pc, #80]	@ 00040c30 1449
.org 0x40c32
	movs r0, #10	@ 00040c32 0a20
.org 0x40c34
	strb r0, [r4, #9]	@ 00040c34 6072
.org 0x40c36
	ldr r0, [r1, #40]	@ 00040c36 886a
.org 0x40c38
	ldr r0, [r0, #0]	@ 00040c38 0068
.org 0x40c3a
	str r0, [r4, #20]	@ 00040c3a 6061
.org 0x40c3c
	ldrb r1, [r4, #11]	@ 00040c3c e17a
.org 0x40c3e
	movs r0, #191	@ 00040c3e bf20
.org 0x40c40
	ands r0, r1	@ 00040c40 0840
.org 0x40c42
	strb r0, [r4, #11]	@ 00040c42 e072
.org 0x40c44
	adds r1, r4, #0	@ 00040c44 211c
.org 0x40c46
	adds r1, #37	@ 00040c46 2531
.org 0x40c48
	movs r0, #16	@ 00040c48 1020
.org 0x40c4a
	strb r0, [r1, #0]	@ 00040c4a 0870
.org 0x40c4c
	ldr r0, [pc, #56]	@ 00040c4c 0e48
.org 0x40c4e
	movs r1, #2	@ 00040c4e 0221
.org 0x40c50
	ldrh r0, [r0, #2]	@ 00040c50 4088
.org 0x40c52
	strh r0, [r4, #32]	@ 00040c52 2084
.org 0x40c54
	ldr r0, [pc, #52]	@ 00040c54 0d48
.org 0x40c56
	ldrb r0, [r0, #1]	@ 00040c56 4078
.org 0x40c58
	adds r2, r4, #0	@ 00040c58 221c
.org 0x40c5a
	adds r2, #34	@ 00040c5a 2232
.org 0x40c5c
	strb r0, [r2, #0]	@ 00040c5c 1070
.org 0x40c5e
	adds r0, r5, #0	@ 00040c5e 281c
.org 0x40c60
	adds r0, #249	@ 00040c60 f930
.org 0x40c62
	strb r1, [r0, #0]	@ 00040c62 0170
.org 0x40c64
	str r5, [r4, #40]	@ 00040c64 a562
.org 0x40c66
	movs r0, #0	@ 00040c66 0020
.org 0x40c68
	strb r0, [r4, #16]	@ 00040c68 2074
.org 0x40c6a
	strb r0, [r4, #17]	@ 00040c6a 6074
.org 0x40c6c
	movs r0, #173	@ 00040c6c ad20
.org 0x40c6e
	lsls r0, r0, #1	@ 00040c6e 4000
.org 0x40c70
	adds r1, r5, r0	@ 00040c70 2918
.org 0x40c72
	ldr r0, [pc, #28]	@ 00040c72 0748
