@ FUN_080e8a94  entry 0x080e8a94  size 92
.thumb
.org 0xe8a94
FUN_080e8a94:
	push {r4, lr}	@ 000e8a94 10b5
.org 0xe8a96
	adds r4, r0, #0	@ 000e8a96 041c
.org 0xe8a98
	ldrb r1, [r4, #18]	@ 000e8a98 a17c
.org 0xe8a9a
	movs r0, #1	@ 000e8a9a 0120
.org 0xe8a9c
	ands r0, r1	@ 000e8a9c 0840
.org 0xe8a9e
	cmp r0, #0	@ 000e8a9e 0028
.org 0xe8aa0
	bne.n 0xe8aa8	@ 000e8aa0 02d1
.org 0xe8aa2
	adds r0, r4, #0	@ 000e8aa2 201c
.org 0xe8aa4
	bl 0x1cff0	@ 000e8aa4 34f7a4fa
.org 0xe8aa8
	ldr r0, [r4, #84]	@ 000e8aa8 606d
.org 0xe8aaa
	ldr r2, [r4, #92]	@ 000e8aaa e26d
.org 0xe8aac
	adds r0, r0, r2	@ 000e8aac 8018
.org 0xe8aae
	str r0, [r4, #84]	@ 000e8aae 6065
.org 0xe8ab0
	ldr r0, [r4, #88]	@ 000e8ab0 a06d
.org 0xe8ab2
	ldr r1, [r4, #96]	@ 000e8ab2 216e
.org 0xe8ab4
	adds r0, r0, r1	@ 000e8ab4 4018
.org 0xe8ab6
	str r0, [r4, #88]	@ 000e8ab6 a065
.org 0xe8ab8
	ldr r0, [r4, #100]	@ 000e8ab8 606e
.org 0xe8aba
	subs r2, r2, r0	@ 000e8aba 121a
.org 0xe8abc
	str r2, [r4, #92]	@ 000e8abc e265
.org 0xe8abe
	ldr r0, [r4, #104]	@ 000e8abe a06e
.org 0xe8ac0
	subs r1, r1, r0	@ 000e8ac0 091a
.org 0xe8ac2
	str r1, [r4, #96]	@ 000e8ac2 2166
.org 0xe8ac4
	ldrb r0, [r4, #18]	@ 000e8ac4 a07c
.org 0xe8ac6
	subs r0, #1	@ 000e8ac6 0138
.org 0xe8ac8
	strb r0, [r4, #18]	@ 000e8ac8 a074
.org 0xe8aca
	lsls r0, r0, #24	@ 000e8aca 0006
.org 0xe8acc
	lsrs r0, r0, #24	@ 000e8acc 000e
.org 0xe8ace
	cmp r0, #255	@ 000e8ace ff28
.org 0xe8ad0
	bne.n 0xe8aea	@ 000e8ad0 0bd1
.org 0xe8ad2
	ldr r1, [pc, #28]	@ 000e8ad2 0749
.org 0xe8ad4
	ldrb r0, [r4, #9]	@ 000e8ad4 607a
.org 0xe8ad6
	lsls r0, r0, #2	@ 000e8ad6 8000
.org 0xe8ad8
	adds r0, r0, r1	@ 000e8ad8 4018
.org 0xe8ada
	movs r1, #2	@ 000e8ada 0221
.org 0xe8adc
	str r1, [r4, #12]	@ 000e8adc e160
.org 0xe8ade
	ldr r0, [r0, #0]	@ 000e8ade 0068
.org 0xe8ae0
	ldr r0, [r0, #8]	@ 000e8ae0 8068
.org 0xe8ae2
	str r0, [r4, #20]	@ 000e8ae2 6061
.org 0xe8ae4
	adds r0, r4, #0	@ 000e8ae4 201c
.org 0xe8ae6
	bl 0xe8af4	@ 000e8ae6 00f005f8
.org 0xe8aea
	pop {r4}	@ 000e8aea 10bc
.org 0xe8aec
	pop {r0}	@ 000e8aec 01bc
.org 0xe8aee
	bx r0	@ 000e8aee 0047
