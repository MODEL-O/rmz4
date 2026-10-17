@ FUN_08008b7c  entry 0x08008b7c  size 158
.thumb
.org 0x8b7c
FUN_08008b7c:
	push {r4, r5, r6, r7, lr}	@ 00008b7c f0b5
.org 0x8b7e
	adds r5, r0, #0	@ 00008b7e 051c
.org 0x8b80
	adds r6, r1, #0	@ 00008b80 0e1c
.org 0x8b82
	ldr r7, [pc, #124]	@ 00008b82 1f4f
.org 0x8b84
	movs r1, #232	@ 00008b84 e821
.org 0x8b86
	lsls r1, r1, #1	@ 00008b86 4900
.org 0x8b88
	adds r0, r7, r1	@ 00008b88 7818
.org 0x8b8a
	ldrh r0, [r0, #0]	@ 00008b8a 0088
.org 0x8b8c
	cmp r0, #4	@ 00008b8c 0428
.org 0x8b8e
	bne.n 0x8ba2	@ 00008b8e 08d1
.org 0x8b90
	ldr r1, [pc, #112]	@ 00008b90 1c49
.org 0x8b92
	adds r0, r5, r1	@ 00008b92 6818
.org 0x8b94
	movs r1, #240	@ 00008b94 f021
.org 0x8b96
	lsls r1, r1, #10	@ 00008b96 8902
.org 0x8b98
	bl 0x129050	@ 00008b98 20f15afa
.org 0x8b9c
	movs r1, #240	@ 00008b9c f021
.org 0x8b9e
	lsls r1, r1, #8	@ 00008b9e 0902
.org 0x8ba0
	adds r5, r0, r1	@ 00008ba0 4518
.org 0x8ba2
	asrs r4, r5, #12	@ 00008ba2 2c13
.org 0x8ba4
	asrs r3, r6, #12	@ 00008ba4 3313
.org 0x8ba6
	movs r0, #238	@ 00008ba6 ee20
.org 0x8ba8
	lsls r0, r0, #3	@ 00008ba8 c000
.org 0x8baa
	cmp r4, r0	@ 00008baa 8442
.org 0x8bac
	bhi.n 0x8c30	@ 00008bac 40d8
.org 0x8bae
	ldr r0, [pc, #88]	@ 00008bae 1648
.org 0x8bb0
	cmp r3, r0	@ 00008bb0 8342
.org 0x8bb2
	bhi.n 0x8c30	@ 00008bb2 3dd8
.org 0x8bb4
	movs r0, #220	@ 00008bb4 dc20
.org 0x8bb6
	lsls r0, r0, #1	@ 00008bb6 4000
.org 0x8bb8
	adds r2, r7, r0	@ 00008bb8 3a18
.org 0x8bba
	movs r0, #252	@ 00008bba fc20
.org 0x8bbc
	lsls r0, r0, #3	@ 00008bbc c000
.org 0x8bbe
	adds r1, r7, r0	@ 00008bbe 3918
.org 0x8bc0
	ldrh r0, [r1, #0]	@ 00008bc0 0888
.org 0x8bc2
	muls r0, r3	@ 00008bc2 5843
.org 0x8bc4
	adds r0, r0, r4	@ 00008bc4 0019
.org 0x8bc6
	adds r0, #2	@ 00008bc6 0230
.org 0x8bc8
	lsls r0, r0, #1	@ 00008bc8 4000
.org 0x8bca
	adds r0, r0, r1	@ 00008bca 4018
.org 0x8bcc
	ldrh r0, [r0, #0]	@ 00008bcc 0088
.org 0x8bce
	ldr r1, [r2, #0]	@ 00008bce 1168
.org 0x8bd0
	lsls r0, r0, #1	@ 00008bd0 4000
.org 0x8bd2
	adds r0, r0, r1	@ 00008bd2 4018
.org 0x8bd4
	ldrh r4, [r0, #0]	@ 00008bd4 0488
.org 0x8bd6
	ldr r0, [pc, #52]	@ 00008bd6 0d48
.org 0x8bd8
	movs r1, #15	@ 00008bd8 0f21
.org 0x8bda
	ands r1, r4	@ 00008bda 2140
.org 0x8bdc
	lsls r1, r1, #2	@ 00008bdc 8900
.org 0x8bde
	adds r1, r1, r0	@ 00008bde 0918
.org 0x8be0
	ldr r0, [pc, #44]	@ 00008be0 0b48
.org 0x8be2
	ands r6, r0	@ 00008be2 0640
.org 0x8be4
	ldr r2, [r1, #0]	@ 00008be4 0a68
.org 0x8be6
	ands r0, r5	@ 00008be6 2840
.org 0x8be8
	adds r1, r6, #0	@ 00008be8 311c
.org 0x8bea
	bl 0x128f84	@ 00008bea 20f1cbf9
.org 0x8bee
	cmp r0, #0	@ 00008bee 0028
.org 0x8bf0
	beq.n 0x8c30	@ 00008bf0 1ed0
.org 0x8bf2
	movs r0, #128	@ 00008bf2 8020
.org 0x8bf4
	lsls r0, r0, #6	@ 00008bf4 8001
.org 0x8bf6
	ands r0, r4	@ 00008bf6 2040
.org 0x8bf8
	cmp r0, #0	@ 00008bf8 0028
.org 0x8bfa
	beq.n 0x8c18	@ 00008bfa 0dd0
.org 0x8bfc
	ldr r1, [pc, #20]	@ 00008bfc 0549
.org 0x8bfe
	b.n 0x8c24	@ 00008bfe 11e0
.org 0x8c00
	.byte 0xb0,0x0a,0x00,0x02	@ 00008c00 data
.org 0x8c04
	.byte 0x00,0x10,0xff,0xff	@ 00008c04 data
.org 0x8c08
	.byte 0xf5,0x04,0x00,0x00	@ 00008c08 data
.org 0x8c0c
	.byte 0xd4,0xb0,0x82,0x08	@ 00008c0c data
.org 0x8c10
	.byte 0xff,0x0f,0x00,0x00	@ 00008c10 data
.org 0x8c14
	.byte 0x08,0xc0,0x02,0x00	@ 00008c14 data
.org 0x8c18
	movs r0, #128	@ 00008c18 8020
