@ FUN_0806af44  entry 0x0806af44  size 208
.thumb
.org 0x6af44
FUN_0806af44:
	push {r4, r5, r6, lr}	@ 0006af44 70b5
.org 0x6af46
	adds r4, r0, #0	@ 0006af46 041c
.org 0x6af48
	adds r0, #140	@ 0006af48 8c30
.org 0x6af4a
	ldr r0, [r0, #0]	@ 0006af4a 0068
.org 0x6af4c
	movs r1, #128	@ 0006af4c 8021
.org 0x6af4e
	lsls r1, r1, #2	@ 0006af4e 8900
.org 0x6af50
	ands r0, r1	@ 0006af50 0840
.org 0x6af52
	cmp r0, #0	@ 0006af52 0028
.org 0x6af54
	bne.n 0x6af62	@ 0006af54 05d1
.org 0x6af56
	adds r0, r4, #0	@ 0006af56 201c
.org 0x6af58
	adds r0, #164	@ 0006af58 a430
.org 0x6af5a
	movs r1, #0	@ 0006af5a 0021
.org 0x6af5c
	ldrsh r0, [r0, r1]	@ 0006af5c 405e
.org 0x6af5e
	cmp r0, #0	@ 0006af5e 0028
.org 0x6af60
	bne.n 0x6af90	@ 0006af60 16d1
.org 0x6af62
	ldr r0, [pc, #36]	@ 0006af62 0948
.org 0x6af64
	ldrh r1, [r0, #8]	@ 0006af64 0189
.org 0x6af66
	movs r0, #8	@ 0006af66 0820
.org 0x6af68
	ands r0, r1	@ 0006af68 0840
.org 0x6af6a
	cmp r0, #0	@ 0006af6a 0028
.org 0x6af6c
	bne.n 0x6af90	@ 0006af6c 10d1
.org 0x6af6e
	ldr r1, [pc, #28]	@ 0006af6e 0749
.org 0x6af70
	ldrb r0, [r4, #9]	@ 0006af70 607a
.org 0x6af72
	lsls r0, r0, #2	@ 0006af72 8000
.org 0x6af74
	adds r0, r0, r1	@ 0006af74 4018
.org 0x6af76
	movs r1, #2	@ 0006af76 0221
.org 0x6af78
	str r1, [r4, #12]	@ 0006af78 e160
.org 0x6af7a
	ldr r0, [r0, #0]	@ 0006af7a 0068
.org 0x6af7c
	ldr r0, [r0, #8]	@ 0006af7c 8068
.org 0x6af7e
	str r0, [r4, #20]	@ 0006af7e 6061
.org 0x6af80
	adds r0, r4, #0	@ 0006af80 201c
.org 0x6af82
	bl 0x6b028	@ 0006af82 00f051f8
.org 0x6af86
	b.n 0x6b016	@ 0006af86 46e0
.org 0x6af88
	.byte 0x10,0xe9,0x02,0x02	@ 0006af88 data
.org 0x6af8c
	.byte 0x70,0x7d,0x85,0x08	@ 0006af8c data
.org 0x6af90
	adds r0, r4, #0	@ 0006af90 201c
.org 0x6af92
	adds r0, #180	@ 0006af92 b430
.org 0x6af94
	ldr r6, [r0, #12]	@ 0006af94 c668
.org 0x6af96
	adds r5, r0, #0	@ 0006af96 051c
.org 0x6af98
	cmp r6, #0	@ 0006af98 002e
.org 0x6af9a
	bne.n 0x6afd4	@ 0006af9a 1bd1
.org 0x6af9c
	subs r0, #40	@ 0006af9c 2838
.org 0x6af9e
	ldr r0, [r0, #0]	@ 0006af9e 0068
.org 0x6afa0
	movs r1, #1	@ 0006afa0 0121
.org 0x6afa2
	ands r0, r1	@ 0006afa2 0840
.org 0x6afa4
	cmp r0, #0	@ 0006afa4 0028
.org 0x6afa6
	beq.n 0x6afce	@ 0006afa6 12d0
.org 0x6afa8
	ldr r2, [pc, #112]	@ 0006afa8 1c4a
.org 0x6afaa
	movs r0, #19	@ 0006afaa 1320
.org 0x6afac
	adds r1, r4, #0	@ 0006afac 211c
.org 0x6afae
	bl 0x2adac	@ 0006afae bff7fdfe
.org 0x6afb2
	str r0, [r5, #12]	@ 0006afb2 e860
.org 0x6afb4
	adds r0, r4, #0	@ 0006afb4 201c
.org 0x6afb6
	adds r0, #151	@ 0006afb6 9730
.org 0x6afb8
	ldrb r1, [r0, #0]	@ 0006afb8 0178
.org 0x6afba
	movs r0, #240	@ 0006afba f020
.org 0x6afbc
	ands r0, r1	@ 0006afbc 0840
.org 0x6afbe
	cmp r0, #32	@ 0006afbe 2028
.org 0x6afc0
	bne.n 0x6afce	@ 0006afc0 05d1
.org 0x6afc2
	ldrb r0, [r4, #13]	@ 0006afc2 607b
.org 0x6afc4
	cmp r0, #21	@ 0006afc4 1528
.org 0x6afc6
	bhi.n 0x6afce	@ 0006afc6 02d8
.org 0x6afc8
	movs r0, #34	@ 0006afc8 2220
.org 0x6afca
	strb r0, [r4, #13]	@ 0006afca 6073
.org 0x6afcc
	strb r6, [r4, #14]	@ 0006afcc a673
.org 0x6afce
	ldr r0, [r5, #12]	@ 0006afce e868
.org 0x6afd0
	cmp r0, #0	@ 0006afd0 0028
.org 0x6afd2
	beq.n 0x6afe2	@ 0006afd2 06d0
.org 0x6afd4
	ldr r0, [r5, #12]	@ 0006afd4 e868
.org 0x6afd6
	bl 0x2b3e4	@ 0006afd6 c0f705fa
.org 0x6afda
	cmp r0, #0	@ 0006afda 0028
.org 0x6afdc
	beq.n 0x6afe2	@ 0006afdc 01d0
.org 0x6afde
	movs r0, #0	@ 0006afde 0020
.org 0x6afe0
	str r0, [r5, #12]	@ 0006afe0 e860
.org 0x6afe2
	ldr r1, [pc, #60]	@ 0006afe2 0f49
.org 0x6afe4
	ldrb r0, [r4, #13]	@ 0006afe4 607b
.org 0x6afe6
	lsls r0, r0, #2	@ 0006afe6 8000
.org 0x6afe8
	adds r0, r0, r1	@ 0006afe8 4018
.org 0x6afea
	ldr r1, [r0, #0]	@ 0006afea 0168
.org 0x6afec
	adds r0, r4, #0	@ 0006afec 201c
.org 0x6afee
	bl 0x128f80	@ 0006afee bdf0c7ff
.org 0x6aff2
	ldrb r0, [r4, #13]	@ 0006aff2 607b
.org 0x6aff4
	cmp r0, #1	@ 0006aff4 0128
.org 0x6aff6
	bls.n 0x6b016	@ 0006aff6 0ed9
.org 0x6aff8
	ldr r0, [r5, #20]	@ 0006aff8 6869
.org 0x6affa
	movs r2, #128	@ 0006affa 8022
.org 0x6affc
	lsls r2, r2, #5	@ 0006affc 5201
.org 0x6affe
	adds r1, r0, r2	@ 0006affe 8118
.org 0x6b000
	ldr r0, [r4, #84]	@ 0006b000 606d
.org 0x6b002
	cmp r0, r1	@ 0006b002 8842
.org 0x6b004
	bge.n 0x6b008	@ 0006b004 00da
.org 0x6b006
	str r1, [r4, #84]	@ 0006b006 6165
.org 0x6b008
	ldr r0, [r5, #24]	@ 0006b008 a869
.org 0x6b00a
	ldr r2, [pc, #24]	@ 0006b00a 064a
.org 0x6b00c
	adds r1, r0, r2	@ 0006b00c 8118
.org 0x6b00e
	ldr r0, [r4, #84]	@ 0006b00e 606d
.org 0x6b010
	cmp r0, r1	@ 0006b010 8842
.org 0x6b012
	ble.n 0x6b016	@ 0006b012 00dd
