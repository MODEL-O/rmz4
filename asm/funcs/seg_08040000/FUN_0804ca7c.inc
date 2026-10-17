@ FUN_0804ca7c  entry 0x0804ca7c  size 126
.thumb
.org 0x4ca7c
FUN_0804ca7c:
	push {r4, r5, r6, lr}	@ 0004ca7c 70b5
.org 0x4ca7e
	adds r4, r0, #0	@ 0004ca7e 041c
.org 0x4ca80
	ldr r6, [r4, #40]	@ 0004ca80 a66a
.org 0x4ca82
	ldr r5, [r4, #44]	@ 0004ca82 e56a
.org 0x4ca84
	bl 0x1cff0	@ 0004ca84 d0f7b4fa
.org 0x4ca88
	ldrb r1, [r4, #10]	@ 0004ca88 a17a
.org 0x4ca8a
	movs r0, #16	@ 0004ca8a 1020
.org 0x4ca8c
	ands r0, r1	@ 0004ca8c 0840
.org 0x4ca8e
	cmp r0, #0	@ 0004ca8e 0028
.org 0x4ca90
	beq.n 0x4caa8	@ 0004ca90 0ad0
.org 0x4ca92
	ldr r1, [pc, #16]	@ 0004ca92 0449
.org 0x4ca94
	ldrb r0, [r4, #17]	@ 0004ca94 607c
.org 0x4ca96
	lsls r0, r0, #1	@ 0004ca96 4000
.org 0x4ca98
	adds r0, r0, r1	@ 0004ca98 4018
.org 0x4ca9a
	movs r2, #0	@ 0004ca9a 0022
.org 0x4ca9c
	ldrsh r1, [r0, r2]	@ 0004ca9c 815e
.org 0x4ca9e
	ldr r0, [r5, #84]	@ 0004ca9e 686d
.org 0x4caa0
	subs r0, r0, r1	@ 0004caa0 401a
.org 0x4caa2
	b.n 0x4cab8	@ 0004caa2 09e0
.org 0x4caa4
	.byte 0x34,0x78,0x85,0x08	@ 0004caa4 data
.org 0x4caa8
	ldr r1, [pc, #84]	@ 0004caa8 1549
.org 0x4caaa
	ldrb r0, [r4, #17]	@ 0004caaa 607c
.org 0x4caac
	lsls r0, r0, #1	@ 0004caac 4000
.org 0x4caae
	adds r0, r0, r1	@ 0004caae 4018
.org 0x4cab0
	movs r2, #0	@ 0004cab0 0022
.org 0x4cab2
	ldrsh r1, [r0, r2]	@ 0004cab2 815e
.org 0x4cab4
	ldr r0, [r5, #84]	@ 0004cab4 686d
.org 0x4cab6
	adds r0, r0, r1	@ 0004cab6 4018
.org 0x4cab8
	str r0, [r4, #84]	@ 0004cab8 6065
.org 0x4caba
	ldrb r2, [r4, #17]	@ 0004caba 627c
.org 0x4cabc
	ldrb r0, [r5, #12]	@ 0004cabc 287b
.org 0x4cabe
	cmp r0, #1	@ 0004cabe 0128
.org 0x4cac0
	bhi.n 0x4cad0	@ 0004cac0 06d8
.org 0x4cac2
	adds r0, r5, #0	@ 0004cac2 281c
.org 0x4cac4
	adds r0, #190	@ 0004cac4 be30
.org 0x4cac6
	ldrb r1, [r0, #0]	@ 0004cac6 0178
.org 0x4cac8
	movs r0, #4	@ 0004cac8 0420
.org 0x4caca
	subs r0, r0, r1	@ 0004caca 401a
.org 0x4cacc
	cmp r0, r2	@ 0004cacc 9042
.org 0x4cace
	bge.n 0x4caf8	@ 0004cace 13da
.org 0x4cad0
	adds r0, r6, #0	@ 0004cad0 301c
.org 0x4cad2
	adds r1, r4, #0	@ 0004cad2 211c
.org 0x4cad4
	movs r2, #2	@ 0004cad4 0222
.org 0x4cad6
	movs r3, #0	@ 0004cad6 0023
.org 0x4cad8
	bl 0x4c628	@ 0004cad8 fff7a6fd
.org 0x4cadc
	adds r1, r4, #0	@ 0004cadc 211c
.org 0x4cade
	adds r1, #189	@ 0004cade bd31
.org 0x4cae0
	ldrb r0, [r1, #0]	@ 0004cae0 0878
.org 0x4cae2
	subs r0, #1	@ 0004cae2 0138
.org 0x4cae4
	strb r0, [r1, #0]	@ 0004cae4 0870
.org 0x4cae6
	ldr r1, [pc, #28]	@ 0004cae6 0749
.org 0x4cae8
	ldrb r0, [r4, #9]	@ 0004cae8 607a
.org 0x4caea
	lsls r0, r0, #2	@ 0004caea 8000
.org 0x4caec
	adds r0, r0, r1	@ 0004caec 4018
.org 0x4caee
	movs r1, #2	@ 0004caee 0221
.org 0x4caf0
	str r1, [r4, #12]	@ 0004caf0 e160
.org 0x4caf2
	ldr r0, [r0, #0]	@ 0004caf2 0068
.org 0x4caf4
	ldr r0, [r0, #8]	@ 0004caf4 8068
.org 0x4caf6
	str r0, [r4, #20]	@ 0004caf6 6061
.org 0x4caf8
	pop {r4, r5, r6}	@ 0004caf8 70bc
