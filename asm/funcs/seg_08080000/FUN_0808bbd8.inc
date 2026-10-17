@ FUN_0808bbd8  entry 0x0808bbd8  size 184
.thumb
.org 0x8bbd8
FUN_0808bbd8:
	push {r4, r5, r6, r7, lr}	@ 0008bbd8 f0b5
.org 0x8bbda
	mov r7, r8	@ 0008bbda 4746
.org 0x8bbdc
	push {r7}	@ 0008bbdc 80b4
.org 0x8bbde
	adds r6, r0, #0	@ 0008bbde 061c
.org 0x8bbe0
	movs r0, #0	@ 0008bbe0 0020
.org 0x8bbe2
	mov r8, r0	@ 0008bbe2 8046
.org 0x8bbe4
	movs r3, #0	@ 0008bbe4 0023
.org 0x8bbe6
	ldr r1, [r6, #92]	@ 0008bbe6 f16d
.org 0x8bbe8
	cmp r1, #0	@ 0008bbe8 0029
.org 0x8bbea
	ble.n 0x8bbee	@ 0008bbea 00dd
.org 0x8bbec
	movs r3, #1	@ 0008bbec 0123
.org 0x8bbee
	ldr r0, [r6, #84]	@ 0008bbee 706d
.org 0x8bbf0
	adds r4, r0, r1	@ 0008bbf0 4418
.org 0x8bbf2
	adds r0, r6, #0	@ 0008bbf2 301c
.org 0x8bbf4
	adds r0, #180	@ 0008bbf4 b430
.org 0x8bbf6
	ldr r2, [r0, #0]	@ 0008bbf6 0268
.org 0x8bbf8
	subs r0, r2, r4	@ 0008bbf8 101b
.org 0x8bbfa
	movs r1, #128	@ 0008bbfa 8021
.org 0x8bbfc
	lsls r1, r1, #7	@ 0008bbfc c901
.org 0x8bbfe
	adds r0, r0, r1	@ 0008bbfe 4018
.org 0x8bc00
	movs r1, #128	@ 0008bc00 8021
.org 0x8bc02
	lsls r1, r1, #8	@ 0008bc02 0902
.org 0x8bc04
	cmp r0, r1	@ 0008bc04 8842
.org 0x8bc06
	bls.n 0x8bc1a	@ 0008bc06 08d9
.org 0x8bc08
	adds r0, r6, #0	@ 0008bc08 301c
.org 0x8bc0a
	adds r0, #184	@ 0008bc0a b830
.org 0x8bc0c
	ldrb r0, [r0, #0]	@ 0008bc0c 0078
.org 0x8bc0e
	lsls r0, r0, #15	@ 0008bc0e c003
.org 0x8bc10
	ldr r1, [pc, #72]	@ 0008bc10 1249
.org 0x8bc12
	adds r0, r0, r1	@ 0008bc12 4018
.org 0x8bc14
	adds r4, r2, r0	@ 0008bc14 1418
.org 0x8bc16
	movs r0, #1	@ 0008bc16 0120
.org 0x8bc18
	mov r8, r0	@ 0008bc18 8046
.org 0x8bc1a
	lsls r0, r3, #1	@ 0008bc1a 5800
.org 0x8bc1c
	subs r0, #1	@ 0008bc1c 0138
.org 0x8bc1e
	lsls r0, r0, #12	@ 0008bc1e 0003
.org 0x8bc20
	adds r7, r4, r0	@ 0008bc20 2718
.org 0x8bc22
	ldr r1, [r6, #88]	@ 0008bc22 b16d
.org 0x8bc24
	adds r1, #1	@ 0008bc24 0131
.org 0x8bc26
	adds r0, r7, #0	@ 0008bc26 381c
.org 0x8bc28
	bl 0x7c7c	@ 0008bc28 7cf728f8
.org 0x8bc2c
	lsls r0, r0, #16	@ 0008bc2c 0004
.org 0x8bc2e
	cmp r0, #0	@ 0008bc2e 0028
.org 0x8bc30
	bne.n 0x8bc38	@ 0008bc30 02d1
.org 0x8bc32
	ldr r4, [r6, #84]	@ 0008bc32 746d
.org 0x8bc34
	movs r1, #1	@ 0008bc34 0121
.org 0x8bc36
	mov r8, r1	@ 0008bc36 8846
.org 0x8bc38
	ldr r5, [r6, #88]	@ 0008bc38 b56d
.org 0x8bc3a
	adds r0, r7, #0	@ 0008bc3a 381c
.org 0x8bc3c
	adds r1, r5, #0	@ 0008bc3c 291c
.org 0x8bc3e
	bl 0x7c7c	@ 0008bc3e 7cf71df8
.org 0x8bc42
	lsls r0, r0, #16	@ 0008bc42 0004
.org 0x8bc44
	cmp r0, #0	@ 0008bc44 0028
.org 0x8bc46
	beq.n 0x8bc70	@ 0008bc46 13d0
.org 0x8bc48
	ldr r0, [r6, #92]	@ 0008bc48 f06d
.org 0x8bc4a
	cmp r0, #0	@ 0008bc4a 0028
.org 0x8bc4c
	bge.n 0x8bc60	@ 0008bc4c 08da
.org 0x8bc4e
	adds r0, r7, #0	@ 0008bc4e 381c
.org 0x8bc50
	adds r1, r5, #0	@ 0008bc50 291c
.org 0x8bc52
	bl 0x8988	@ 0008bc52 7cf799fe
.org 0x8bc56
	movs r1, #128	@ 0008bc56 8021
.org 0x8bc58
	lsls r1, r1, #5	@ 0008bc58 4901
.org 0x8bc5a
	b.n 0x8bc6a	@ 0008bc5a 06e0
.org 0x8bc5c
	.byte 0x00,0xc0,0xff,0xff	@ 0008bc5c data
.org 0x8bc60
	adds r0, r7, #0	@ 0008bc60 381c
.org 0x8bc62
	adds r1, r5, #0	@ 0008bc62 291c
.org 0x8bc64
	bl 0x8868	@ 0008bc64 7cf700fe
.org 0x8bc68
	ldr r1, [pc, #40]	@ 0008bc68 0a49
.org 0x8bc6a
	adds r4, r0, r1	@ 0008bc6a 4418
.org 0x8bc6c
	movs r0, #1	@ 0008bc6c 0120
.org 0x8bc6e
	mov r8, r0	@ 0008bc6e 8046
.org 0x8bc70
	str r4, [r6, #84]	@ 0008bc70 7465
.org 0x8bc72
	mov r1, r8	@ 0008bc72 4146
.org 0x8bc74
	cmp r1, #0	@ 0008bc74 0029
.org 0x8bc76
	beq.n 0x8bc8a	@ 0008bc76 08d0
.org 0x8bc78
	adds r0, r6, #0	@ 0008bc78 301c
.org 0x8bc7a
	adds r0, #184	@ 0008bc7a b830
.org 0x8bc7c
	ldrb r1, [r0, #0]	@ 0008bc7c 0178
.org 0x8bc7e
	adds r1, #1	@ 0008bc7e 0131
.org 0x8bc80
	movs r0, #1	@ 0008bc80 0120
.org 0x8bc82
	ands r1, r0	@ 0008bc82 0140
.org 0x8bc84
	adds r0, r6, #0	@ 0008bc84 301c
.org 0x8bc86
	bl 0x8bbc0	@ 0008bc86 fff79bff
.org 0x8bc8a
	pop {r3}	@ 0008bc8a 08bc
.org 0x8bc8c
	mov r8, r3	@ 0008bc8c 9846
.org 0x8bc8e
	pop {r4, r5, r6, r7}	@ 0008bc8e f0bc
