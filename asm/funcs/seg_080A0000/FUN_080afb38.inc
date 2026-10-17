@ FUN_080afb38  entry 0x080afb38  size 212
.thumb
.org 0xafb38
FUN_080afb38:
	push {r4, r5, lr}	@ 000afb38 30b5
.org 0xafb3a
	adds r5, r0, #0	@ 000afb3a 051c
.org 0xafb3c
	ldr r0, [r5, #44]	@ 000afb3c e86a
.org 0xafb3e
	cmp r0, #0	@ 000afb3e 0028
.org 0xafb40
	beq.n 0xafbfc	@ 000afb40 5cd0
.org 0xafb42
	ldr r0, [r5, #84]	@ 000afb42 686d
.org 0xafb44
	ldr r1, [r5, #88]	@ 000afb44 a96d
.org 0xafb46
	movs r2, #1	@ 000afb46 0122
.org 0xafb48
	bl 0xd0ff4	@ 000afb48 21f054fa
.org 0xafb4c
	ldr r0, [r5, #84]	@ 000afb4c 686d
.org 0xafb4e
	ldr r1, [r5, #88]	@ 000afb4e a96d
.org 0xafb50
	movs r4, #160	@ 000afb50 a024
.org 0xafb52
	lsls r4, r4, #3	@ 000afb52 e400
.org 0xafb54
	adds r1, r1, r4	@ 000afb54 0919
.org 0xafb56
	movs r2, #1	@ 000afb56 0122
.org 0xafb58
	bl 0xd0ff4	@ 000afb58 21f04cfa
.org 0xafb5c
	ldr r0, [r5, #84]	@ 000afb5c 686d
.org 0xafb5e
	adds r0, r0, r4	@ 000afb5e 0019
.org 0xafb60
	ldr r1, [r5, #88]	@ 000afb60 a96d
.org 0xafb62
	movs r2, #0	@ 000afb62 0022
.org 0xafb64
	bl 0xd0ff4	@ 000afb64 21f046fa
.org 0xafb68
	ldr r0, [r5, #84]	@ 000afb68 686d
.org 0xafb6a
	ldr r1, [r5, #88]	@ 000afb6a a96d
.org 0xafb6c
	movs r2, #0	@ 000afb6c 0022
.org 0xafb6e
	bl 0xd0ff4	@ 000afb6e 21f041fa
.org 0xafb72
	ldr r0, [r5, #84]	@ 000afb72 686d
.org 0xafb74
	ldr r1, [pc, #64]	@ 000afb74 1049
.org 0xafb76
	adds r0, r0, r1	@ 000afb76 4018
.org 0xafb78
	ldr r1, [r5, #88]	@ 000afb78 a96d
.org 0xafb7a
	movs r2, #0	@ 000afb7a 0022
.org 0xafb7c
	bl 0xd0ff4	@ 000afb7c 21f03afa
.org 0xafb80
	ldr r2, [r5, #44]	@ 000afb80 ea6a
.org 0xafb82
	ldr r1, [pc, #56]	@ 000afb82 0e49
.org 0xafb84
	ldrb r0, [r2, #9]	@ 000afb84 507a
.org 0xafb86
	lsls r0, r0, #2	@ 000afb86 8000
.org 0xafb88
	adds r0, r0, r1	@ 000afb88 4018
.org 0xafb8a
	movs r1, #2	@ 000afb8a 0221
.org 0xafb8c
	str r1, [r2, #12]	@ 000afb8c d160
.org 0xafb8e
	ldr r0, [r0, #0]	@ 000afb8e 0068
.org 0xafb90
	ldr r0, [r0, #8]	@ 000afb90 8068
.org 0xafb92
	str r0, [r2, #20]	@ 000afb92 5061
.org 0xafb94
	movs r0, #0	@ 000afb94 0020
.org 0xafb96
	str r0, [r5, #44]	@ 000afb96 e862
.org 0xafb98
	adds r0, r5, #0	@ 000afb98 281c
.org 0xafb9a
	adds r0, #140	@ 000afb9a 8c30
.org 0xafb9c
	ldr r0, [r0, #0]	@ 000afb9c 0068
.org 0xafb9e
	movs r1, #128	@ 000afb9e 8021
.org 0xafba0
	lsls r1, r1, #9	@ 000afba0 4902
.org 0xafba2
	ands r0, r1	@ 000afba2 0840
.org 0xafba4
	cmp r0, #0	@ 000afba4 0028
.org 0xafba6
	beq.n 0xafbc0	@ 000afba6 0bd0
.org 0xafba8
	adds r4, r5, #0	@ 000afba8 2c1c
.org 0xafbaa
	adds r4, #84	@ 000afbaa 5434
.org 0xafbac
	adds r0, r4, #0	@ 000afbac 201c
.org 0xafbae
	movs r1, #0	@ 000afbae 0021
.org 0xafbb0
	movs r2, #0	@ 000afbb0 0022
.org 0xafbb2
	bl 0xe4f04	@ 000afbb2 35f0a7f9
.org 0xafbb6
	b.n 0xafbdc	@ 000afbb6 11e0
.org 0xafbb8
	.byte 0x00,0xfb,0xff,0xff	@ 000afbb8 data
.org 0xafbbc
	.byte 0x40,0xdb,0x85,0x08	@ 000afbbc data
.org 0xafbc0
	adds r4, r5, #0	@ 000afbc0 2c1c
.org 0xafbc2
	adds r4, #84	@ 000afbc2 5434
.org 0xafbc4
	movs r0, #2	@ 000afbc4 0220
.org 0xafbc6
	adds r1, r4, #0	@ 000afbc6 211c
.org 0xafbc8
	bl 0xd0c88	@ 000afbc8 21f05ef8
.org 0xafbcc
	adds r0, r5, #0	@ 000afbcc 281c
.org 0xafbce
	bl 0xb0330	@ 000afbce 00f0affb
.org 0xafbd2
	adds r0, r4, #0	@ 000afbd2 201c
.org 0xafbd4
	movs r1, #1	@ 000afbd4 0121
.org 0xafbd6
	movs r2, #0	@ 000afbd6 0022
.org 0xafbd8
	bl 0xe4f04	@ 000afbd8 35f094f9
.org 0xafbdc
	ldr r2, [pc, #52]	@ 000afbdc 0d4a
.org 0xafbde
	ldrh r1, [r2, #12]	@ 000afbde 9189
.org 0xafbe0
	ldr r0, [pc, #52]	@ 000afbe0 0d48
.org 0xafbe2
	cmp r1, r0	@ 000afbe2 8142
.org 0xafbe4
	bhi.n 0xafbea	@ 000afbe4 01d8
.org 0xafbe6
	adds r0, r1, #1	@ 000afbe6 481c
.org 0xafbe8
	strh r0, [r2, #12]	@ 000afbe8 9081
.org 0xafbea
	adds r0, r5, #0	@ 000afbea 281c
.org 0xafbec
	adds r1, r4, #0	@ 000afbec 211c
.org 0xafbee
	bl 0x2abe0	@ 000afbee 7af7f7ff
.org 0xafbf2
	movs r0, #2	@ 000afbf2 0220
.org 0xafbf4
	movs r1, #11	@ 000afbf4 0b21
.org 0xafbf6
	adds r2, r4, #0	@ 000afbf6 221c
.org 0xafbf8
	bl 0x2ab88	@ 000afbf8 7af7c6ff
.org 0xafbfc
	ldr r1, [pc, #28]	@ 000afbfc 0749
.org 0xafbfe
	ldrb r0, [r5, #9]	@ 000afbfe 687a
.org 0xafc00
	lsls r0, r0, #2	@ 000afc00 8000
.org 0xafc02
	adds r0, r0, r1	@ 000afc02 4018
.org 0xafc04
	movs r1, #4	@ 000afc04 0421
.org 0xafc06
	str r1, [r5, #12]	@ 000afc06 e960
.org 0xafc08
	ldr r0, [r0, #0]	@ 000afc08 0068
.org 0xafc0a
	ldr r0, [r0, #16]	@ 000afc0a 0069
