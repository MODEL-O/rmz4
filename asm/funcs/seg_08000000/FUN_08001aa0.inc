@ FUN_08001aa0  entry 0x08001aa0  size 110
.thumb
.org 0x1aa0
FUN_08001aa0:
	push {r4, lr}	@ 00001aa0 10b5
.org 0x1aa2
	adds r4, r0, #0	@ 00001aa2 041c
.org 0x1aa4
	bl 0x127d8c	@ 00001aa4 26f172f9
.org 0x1aa8
	ldr r2, [pc, #100]	@ 00001aa8 194a
.org 0x1aaa
	ldr r0, [r2, #8]	@ 00001aaa 9068
.org 0x1aac
	movs r1, #128	@ 00001aac 8021
.org 0x1aae
	lsls r1, r1, #24	@ 00001aae 0906
.org 0x1ab0
	cmp r0, #0	@ 00001ab0 0028
.org 0x1ab2
	bge.n 0x1abc	@ 00001ab2 03da
.org 0x1ab4
	ldr r0, [r2, #8]	@ 00001ab4 9068
.org 0x1ab6
	ands r0, r1	@ 00001ab6 0840
.org 0x1ab8
	cmp r0, #0	@ 00001ab8 0028
.org 0x1aba
	bne.n 0x1ab4	@ 00001aba fbd1
.org 0x1abc
	ldr r2, [pc, #84]	@ 00001abc 154a
.org 0x1abe
	ldr r0, [r2, #8]	@ 00001abe 9068
.org 0x1ac0
	movs r1, #128	@ 00001ac0 8021
.org 0x1ac2
	lsls r1, r1, #24	@ 00001ac2 0906
.org 0x1ac4
	cmp r0, #0	@ 00001ac4 0028
.org 0x1ac6
	bge.n 0x1ad0	@ 00001ac6 03da
.org 0x1ac8
	ldr r0, [r2, #8]	@ 00001ac8 9068
.org 0x1aca
	ands r0, r1	@ 00001aca 0840
.org 0x1acc
	cmp r0, #0	@ 00001acc 0028
.org 0x1ace
	bne.n 0x1ac8	@ 00001ace fbd1
.org 0x1ad0
	ldr r2, [pc, #68]	@ 00001ad0 114a
.org 0x1ad2
	ldr r0, [r2, #8]	@ 00001ad2 9068
.org 0x1ad4
	movs r1, #128	@ 00001ad4 8021
.org 0x1ad6
	lsls r1, r1, #24	@ 00001ad6 0906
.org 0x1ad8
	cmp r0, #0	@ 00001ad8 0028
.org 0x1ada
	bge.n 0x1ae4	@ 00001ada 03da
.org 0x1adc
	ldr r0, [r2, #8]	@ 00001adc 9068
.org 0x1ade
	ands r0, r1	@ 00001ade 0840
.org 0x1ae0
	cmp r0, #0	@ 00001ae0 0028
.org 0x1ae2
	bne.n 0x1adc	@ 00001ae2 fbd1
.org 0x1ae4
	ldr r2, [pc, #52]	@ 00001ae4 0d4a
.org 0x1ae6
	ldr r0, [r2, #8]	@ 00001ae6 9068
.org 0x1ae8
	movs r1, #128	@ 00001ae8 8021
.org 0x1aea
	lsls r1, r1, #24	@ 00001aea 0906
.org 0x1aec
	cmp r0, #0	@ 00001aec 0028
.org 0x1aee
	bge.n 0x1af8	@ 00001aee 03da
.org 0x1af0
	ldr r0, [r2, #8]	@ 00001af0 9068
.org 0x1af2
	ands r0, r1	@ 00001af2 0840
.org 0x1af4
	cmp r0, #0	@ 00001af4 0028
.org 0x1af6
	bne.n 0x1af0	@ 00001af6 fbd1
.org 0x1af8
	ldr r1, [pc, #36]	@ 00001af8 0949
.org 0x1afa
	ldrh r0, [r1, #0]	@ 00001afa 0888
.org 0x1afc
	ldrh r2, [r4, #32]	@ 00001afc 228c
.org 0x1afe
	strh r0, [r4, #32]	@ 00001afe 2084
.org 0x1b00
	movs r2, #128	@ 00001b00 8022
.org 0x1b02
	lsls r2, r2, #6	@ 00001b02 9201
.org 0x1b04
	adds r0, r2, #0	@ 00001b04 101c
.org 0x1b06
	strh r0, [r1, #0]	@ 00001b06 0880
.org 0x1b08
	pop {r4}	@ 00001b08 10bc
.org 0x1b0a
	pop {r0}	@ 00001b0a 01bc
.org 0x1b0c
	bx r0	@ 00001b0c 0047
