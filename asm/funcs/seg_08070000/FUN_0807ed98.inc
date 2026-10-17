@ FUN_0807ed98  entry 0x0807ed98  size 216
.thumb
.org 0x7ed98
FUN_0807ed98:
	push {r4, r5, lr}	@ 0007ed98 30b5
.org 0x7ed9a
	adds r4, r0, #0	@ 0007ed9a 041c
.org 0x7ed9c
	adds r0, #140	@ 0007ed9c 8c30
.org 0x7ed9e
	ldr r0, [r0, #0]	@ 0007ed9e 0068
.org 0x7eda0
	movs r1, #128	@ 0007eda0 8021
.org 0x7eda2
	lsls r1, r1, #2	@ 0007eda2 8900
.org 0x7eda4
	ands r0, r1	@ 0007eda4 0840
.org 0x7eda6
	cmp r0, #0	@ 0007eda6 0028
.org 0x7eda8
	bne.n 0x7edb6	@ 0007eda8 05d1
.org 0x7edaa
	adds r0, r4, #0	@ 0007edaa 201c
.org 0x7edac
	adds r0, #164	@ 0007edac a430
.org 0x7edae
	movs r1, #0	@ 0007edae 0021
.org 0x7edb0
	ldrsh r0, [r0, r1]	@ 0007edb0 405e
.org 0x7edb2
	cmp r0, #0	@ 0007edb2 0028
.org 0x7edb4
	bne.n 0x7ede4	@ 0007edb4 16d1
.org 0x7edb6
	ldr r0, [pc, #36]	@ 0007edb6 0948
.org 0x7edb8
	ldrh r1, [r0, #8]	@ 0007edb8 0189
.org 0x7edba
	movs r0, #8	@ 0007edba 0820
.org 0x7edbc
	ands r0, r1	@ 0007edbc 0840
.org 0x7edbe
	cmp r0, #0	@ 0007edbe 0028
.org 0x7edc0
	bne.n 0x7ede4	@ 0007edc0 10d1
.org 0x7edc2
	ldr r1, [pc, #28]	@ 0007edc2 0749
.org 0x7edc4
	ldrb r0, [r4, #9]	@ 0007edc4 607a
.org 0x7edc6
	lsls r0, r0, #2	@ 0007edc6 8000
.org 0x7edc8
	adds r0, r0, r1	@ 0007edc8 4018
.org 0x7edca
	movs r1, #2	@ 0007edca 0221
.org 0x7edcc
	str r1, [r4, #12]	@ 0007edcc e160
.org 0x7edce
	ldr r0, [r0, #0]	@ 0007edce 0068
.org 0x7edd0
	ldr r0, [r0, #8]	@ 0007edd0 8068
.org 0x7edd2
	str r0, [r4, #20]	@ 0007edd2 6061
.org 0x7edd4
	adds r0, r4, #0	@ 0007edd4 201c
.org 0x7edd6
	bl 0x7ee80	@ 0007edd6 00f053f8
.org 0x7edda
	b.n 0x7ee72	@ 0007edda 4ae0
.org 0x7eddc
	.byte 0x10,0xe9,0x02,0x02	@ 0007eddc data
.org 0x7ede0
	.byte 0x70,0x7d,0x85,0x08	@ 0007ede0 data
.org 0x7ede4
	adds r0, r4, #0	@ 0007ede4 201c
.org 0x7ede6
	adds r0, #180	@ 0007ede6 b430
.org 0x7ede8
	ldr r1, [r0, #24]	@ 0007ede8 8169
.org 0x7edea
	adds r5, r0, #0	@ 0007edea 051c
.org 0x7edec
	cmp r1, #0	@ 0007edec 0029
.org 0x7edee
	bne.n 0x7ee0e	@ 0007edee 0ed1
.org 0x7edf0
	subs r0, #40	@ 0007edf0 2838
.org 0x7edf2
	ldr r0, [r0, #0]	@ 0007edf2 0068
.org 0x7edf4
	movs r1, #1	@ 0007edf4 0121
.org 0x7edf6
	ands r0, r1	@ 0007edf6 0840
.org 0x7edf8
	cmp r0, #0	@ 0007edf8 0028
.org 0x7edfa
	beq.n 0x7ee08	@ 0007edfa 05d0
.org 0x7edfc
	ldr r2, [pc, #120]	@ 0007edfc 1e4a
.org 0x7edfe
	movs r0, #29	@ 0007edfe 1d20
.org 0x7ee00
	adds r1, r4, #0	@ 0007ee00 211c
.org 0x7ee02
	bl 0x2adac	@ 0007ee02 abf7d3ff
.org 0x7ee06
	str r0, [r5, #24]	@ 0007ee06 a861
.org 0x7ee08
	ldr r0, [r5, #24]	@ 0007ee08 a869
.org 0x7ee0a
	cmp r0, #0	@ 0007ee0a 0028
.org 0x7ee0c
	beq.n 0x7ee1c	@ 0007ee0c 06d0
.org 0x7ee0e
	ldr r0, [r5, #24]	@ 0007ee0e a869
.org 0x7ee10
	bl 0x2b3e4	@ 0007ee10 acf7e8fa
.org 0x7ee14
	cmp r0, #0	@ 0007ee14 0028
.org 0x7ee16
	beq.n 0x7ee1c	@ 0007ee16 01d0
.org 0x7ee18
	movs r0, #0	@ 0007ee18 0020
.org 0x7ee1a
	str r0, [r5, #24]	@ 0007ee1a a861
.org 0x7ee1c
	movs r2, #0	@ 0007ee1c 0022
.org 0x7ee1e
	movs r3, #0	@ 0007ee1e 0023
.org 0x7ee20
	adds r1, r4, #0	@ 0007ee20 211c
.org 0x7ee22
	adds r1, #188	@ 0007ee22 bc31
.org 0x7ee24
	ldr r0, [r1, #0]	@ 0007ee24 0868
.org 0x7ee26
	cmp r0, #0	@ 0007ee26 0028
.org 0x7ee28
	beq.n 0x7ee32	@ 0007ee28 03d0
.org 0x7ee2a
	ldrb r0, [r0, #12]	@ 0007ee2a 007b
.org 0x7ee2c
	cmp r0, #1	@ 0007ee2c 0128
.org 0x7ee2e
	bls.n 0x7ee32	@ 0007ee2e 00d9
.org 0x7ee30
	str r3, [r1, #0]	@ 0007ee30 0b60
.org 0x7ee32
	adds r1, #4	@ 0007ee32 0431
.org 0x7ee34
	adds r2, #1	@ 0007ee34 0132
.org 0x7ee36
	cmp r2, #3	@ 0007ee36 032a
.org 0x7ee38
	bls.n 0x7ee24	@ 0007ee38 f4d9
.org 0x7ee3a
	adds r0, r4, #0	@ 0007ee3a 201c
.org 0x7ee3c
	movs r1, #0	@ 0007ee3c 0021
.org 0x7ee3e
	movs r2, #1	@ 0007ee3e 0122
.org 0x7ee40
	bl 0x7f7cc	@ 0007ee40 00f0c4fc
.org 0x7ee44
	adds r0, r4, #0	@ 0007ee44 201c
.org 0x7ee46
	movs r1, #0	@ 0007ee46 0021
.org 0x7ee48
	movs r2, #3	@ 0007ee48 0322
.org 0x7ee4a
	bl 0x7f7cc	@ 0007ee4a 00f0bffc
.org 0x7ee4e
	adds r0, r4, #0	@ 0007ee4e 201c
.org 0x7ee50
	movs r1, #2	@ 0007ee50 0221
.org 0x7ee52
	movs r2, #1	@ 0007ee52 0122
.org 0x7ee54
	bl 0x7f7cc	@ 0007ee54 00f0bafc
.org 0x7ee58
	adds r0, r4, #0	@ 0007ee58 201c
.org 0x7ee5a
	movs r1, #2	@ 0007ee5a 0221
.org 0x7ee5c
	movs r2, #3	@ 0007ee5c 0322
.org 0x7ee5e
	bl 0x7f7cc	@ 0007ee5e 00f0b5fc
.org 0x7ee62
	ldr r0, [pc, #24]	@ 0007ee62 0648
.org 0x7ee64
	ldrb r1, [r4, #13]	@ 0007ee64 617b
.org 0x7ee66
	lsls r1, r1, #2	@ 0007ee66 8900
.org 0x7ee68
	adds r1, r1, r0	@ 0007ee68 0918
.org 0x7ee6a
	ldr r1, [r1, #0]	@ 0007ee6a 0968
.org 0x7ee6c
	adds r0, r4, #0	@ 0007ee6c 201c
.org 0x7ee6e
	bl 0x128f80	@ 0007ee6e aaf087f8
