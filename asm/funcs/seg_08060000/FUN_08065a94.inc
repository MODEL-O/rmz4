@ FUN_08065a94  entry 0x08065a94  size 102
.thumb
.org 0x65a94
FUN_08065a94:
	push {r4, r5, r6, lr}	@ 00065a94 70b5
.org 0x65a96
	adds r2, r0, #0	@ 00065a96 021c
.org 0x65a98
	lsls r1, r1, #24	@ 00065a98 0906
.org 0x65a9a
	lsrs r4, r1, #24	@ 00065a9a 0c0e
.org 0x65a9c
	ldr r1, [pc, #24]	@ 00065a9c 0649
.org 0x65a9e
	lsls r0, r4, #2	@ 00065a9e a000
.org 0x65aa0
	adds r0, r0, r1	@ 00065aa0 4018
.org 0x65aa2
	ldr r3, [r0, #0]	@ 00065aa2 0368
.org 0x65aa4
	adds r6, r1, #0	@ 00065aa4 0e1c
.org 0x65aa6
	cmp r4, #8	@ 00065aa6 082c
.org 0x65aa8
	beq.n 0x65aae	@ 00065aa8 01d0
.org 0x65aaa
	cmp r4, #25	@ 00065aaa 192c
.org 0x65aac
	bne.n 0x65abc	@ 00065aac 06d1
.org 0x65aae
	ldrb r1, [r2, #10]	@ 00065aae 917a
.org 0x65ab0
	movs r0, #254	@ 00065ab0 fe20
.org 0x65ab2
	ands r0, r1	@ 00065ab2 0840
.org 0x65ab4
	b.n 0x65ac2	@ 00065ab4 05e0
.org 0x65ab6
	.byte 0x00	@ 00065ab6 data
.org 0x65ab7
	.byte 0x00	@ 00065ab7 data
.org 0x65ab8
	.byte 0xe4,0xab,0x85,0x08	@ 00065ab8 data
.org 0x65abc
	ldrb r1, [r2, #10]	@ 00065abc 917a
.org 0x65abe
	movs r0, #1	@ 00065abe 0120
.org 0x65ac0
	orrs r0, r1	@ 00065ac0 0843
.org 0x65ac2
	strb r0, [r2, #10]	@ 00065ac2 9072
.org 0x65ac4
	adds r0, r2, #0	@ 00065ac4 101c
.org 0x65ac6
	adds r0, #180	@ 00065ac6 b430
.org 0x65ac8
	ldrb r1, [r0, #0]	@ 00065ac8 0178
.org 0x65aca
	adds r5, r0, #0	@ 00065aca 051c
.org 0x65acc
	cmp r1, #255	@ 00065acc ff29
.org 0x65ace
	beq.n 0x65af4	@ 00065ace 11d0
.org 0x65ad0
	ldrb r0, [r5, #0]	@ 00065ad0 2878
.org 0x65ad2
	lsls r0, r0, #2	@ 00065ad2 8000
.org 0x65ad4
	adds r0, r0, r6	@ 00065ad4 8019
.org 0x65ad6
	ldr r1, [r0, #0]	@ 00065ad6 0168
.org 0x65ad8
	ldr r0, [pc, #20]	@ 00065ad8 0548
.org 0x65ada
	cmp r3, r0	@ 00065ada 8342
.org 0x65adc
	bne.n 0x65ae2	@ 00065adc 01d1
.org 0x65ade
	cmp r3, r1	@ 00065ade 8b42
.org 0x65ae0
	beq.n 0x65afe	@ 00065ae0 0dd0
.org 0x65ae2
	lsls r1, r3, #16	@ 00065ae2 1904
.org 0x65ae4
	lsrs r1, r1, #16	@ 00065ae4 090c
.org 0x65ae6
	adds r0, r2, #0	@ 00065ae6 101c
.org 0x65ae8
	bl 0x1cf00	@ 00065ae8 b7f70afa
.org 0x65aec
	b.n 0x65afe	@ 00065aec 07e0
.org 0x65aee
	.byte 0x00	@ 00065aee data
.org 0x65aef
	.byte 0x00	@ 00065aef data
.org 0x65af0
	.byte 0x01,0xa7,0x00,0x00	@ 00065af0 data
.org 0x65af4
	lsls r1, r3, #16	@ 00065af4 1904
.org 0x65af6
	lsrs r1, r1, #16	@ 00065af6 090c
.org 0x65af8
	adds r0, r2, #0	@ 00065af8 101c
