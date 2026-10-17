@ FUN_08098a8c  entry 0x08098a8c  size 140
.thumb
.org 0x98a8c
FUN_08098a8c:
	push {r4, lr}	@ 00098a8c 10b5
.org 0x98a8e
	adds r4, r0, #0	@ 00098a8e 041c
.org 0x98a90
	adds r0, #140	@ 00098a90 8c30
.org 0x98a92
	ldr r0, [r0, #0]	@ 00098a92 0068
.org 0x98a94
	movs r1, #129	@ 00098a94 8121
.org 0x98a96
	lsls r1, r1, #2	@ 00098a96 8900
.org 0x98a98
	ands r0, r1	@ 00098a98 0840
.org 0x98a9a
	cmp r0, #0	@ 00098a9a 0028
.org 0x98a9c
	beq.n 0x98acc	@ 00098a9c 16d0
.org 0x98a9e
	adds r1, r4, #0	@ 00098a9e 211c
.org 0x98aa0
	adds r1, #84	@ 00098aa0 5431
.org 0x98aa2
	movs r0, #1	@ 00098aa2 0120
.org 0x98aa4
	bl 0xd0c88	@ 00098aa4 38f0f0f8
.org 0x98aa8
	movs r0, #53	@ 00098aa8 3520
.org 0x98aaa
	bl 0x2b10	@ 00098aaa 6af731f8
.org 0x98aae
	ldr r1, [pc, #24]	@ 00098aae 0649
.org 0x98ab0
	ldrb r0, [r4, #9]	@ 00098ab0 607a
.org 0x98ab2
	lsls r0, r0, #2	@ 00098ab2 8000
.org 0x98ab4
	adds r0, r0, r1	@ 00098ab4 4018
.org 0x98ab6
	movs r1, #2	@ 00098ab6 0221
.org 0x98ab8
	str r1, [r4, #12]	@ 00098ab8 e160
.org 0x98aba
	ldr r0, [r0, #0]	@ 00098aba 0068
.org 0x98abc
	ldr r0, [r0, #8]	@ 00098abc 8068
.org 0x98abe
	str r0, [r4, #20]	@ 00098abe 6061
.org 0x98ac0
	adds r0, r4, #0	@ 00098ac0 201c
.org 0x98ac2
	bl 0x98b20	@ 00098ac2 00f02df8
.org 0x98ac6
	b.n 0x98b16	@ 00098ac6 26e0
.org 0x98ac8
	.byte 0x40,0xdb,0x85,0x08	@ 00098ac8 data
.org 0x98acc
	adds r0, r4, #0	@ 00098acc 201c
.org 0x98ace
	bl 0x1cff0	@ 00098ace 84f78ffa
.org 0x98ad2
	ldr r1, [r4, #88]	@ 00098ad2 a16d
.org 0x98ad4
	ldr r0, [r4, #96]	@ 00098ad4 206e
.org 0x98ad6
	adds r1, r1, r0	@ 00098ad6 0918
.org 0x98ad8
	str r1, [r4, #88]	@ 00098ad8 a165
.org 0x98ada
	adds r0, #64	@ 00098ada 4030
.org 0x98adc
	str r0, [r4, #96]	@ 00098adc 2066
.org 0x98ade
	ldr r0, [r4, #84]	@ 00098ade 606d
.org 0x98ae0
	bl 0x7c7c	@ 00098ae0 6ff7ccf8
.org 0x98ae4
	lsls r0, r0, #16	@ 00098ae4 0004
.org 0x98ae6
	cmp r0, #0	@ 00098ae6 0028
.org 0x98ae8
	beq.n 0x98b16	@ 00098ae8 15d0
.org 0x98aea
	adds r0, r4, #0	@ 00098aea 201c
.org 0x98aec
	adds r0, #84	@ 00098aec 5430
.org 0x98aee
	ldrb r3, [r4, #10]	@ 00098aee a37a
.org 0x98af0
	lsrs r3, r3, #4	@ 00098af0 1b09
.org 0x98af2
	movs r1, #1	@ 00098af2 0121
.org 0x98af4
	ands r3, r1	@ 00098af4 0b40
.org 0x98af6
	movs r1, #0	@ 00098af6 0021
.org 0x98af8
	movs r2, #3	@ 00098af8 0322
.org 0x98afa
	bl 0xc3998	@ 00098afa 2af04dff
.org 0x98afe
	ldr r1, [pc, #28]	@ 00098afe 0749
.org 0x98b00
	ldrb r0, [r4, #9]	@ 00098b00 607a
.org 0x98b02
	lsls r0, r0, #2	@ 00098b02 8000
.org 0x98b04
	adds r0, r0, r1	@ 00098b04 4018
.org 0x98b06
	movs r1, #2	@ 00098b06 0221
.org 0x98b08
	str r1, [r4, #12]	@ 00098b08 e160
.org 0x98b0a
	ldr r0, [r0, #0]	@ 00098b0a 0068
.org 0x98b0c
	ldr r0, [r0, #8]	@ 00098b0c 8068
.org 0x98b0e
	str r0, [r4, #20]	@ 00098b0e 6061
.org 0x98b10
	adds r0, r4, #0	@ 00098b10 201c
.org 0x98b12
	bl 0x98b20	@ 00098b12 00f005f8
.org 0x98b16
	pop {r4}	@ 00098b16 10bc
