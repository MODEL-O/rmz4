@ FUN_0809bd88  entry 0x0809bd88  size 140
.thumb
.org 0x9bd88
FUN_0809bd88:
	push {r4, r5, r6, r7, lr}	@ 0009bd88 f0b5
.org 0x9bd8a
	sub sp, #20	@ 0009bd8a 85b0
.org 0x9bd8c
	adds r4, r0, #0	@ 0009bd8c 041c
.org 0x9bd8e
	mov r1, sp	@ 0009bd8e 6946
.org 0x9bd90
	ldr r0, [pc, #128]	@ 0009bd90 2048
.org 0x9bd92
	ldmia r0!, {r2, r3, r5}	@ 0009bd92 2cc8
.org 0x9bd94
	stmia r1!, {r2, r3, r5}	@ 0009bd94 2cc1
.org 0x9bd96
	ldr r0, [r0, #0]	@ 0009bd96 0068
.org 0x9bd98
	str r0, [r1, #0]	@ 0009bd98 0860
.org 0x9bd9a
	add r6, sp, #16	@ 0009bd9a 04ae
.org 0x9bd9c
	ldr r1, [pc, #120]	@ 0009bd9c 1e49
.org 0x9bd9e
	adds r0, r6, #0	@ 0009bd9e 301c
.org 0x9bda0
	movs r2, #4	@ 0009bda0 0422
.org 0x9bda2
	bl 0x129258	@ 0009bda2 8df059fa
.org 0x9bda6
	ldrb r5, [r4, #17]	@ 0009bda6 657c
.org 0x9bda8
	adds r7, r5, #0	@ 0009bda8 2f1c
.org 0x9bdaa
	ldrb r0, [r4, #15]	@ 0009bdaa e07b
.org 0x9bdac
	cmp r0, #0	@ 0009bdac 0028
.org 0x9bdae
	bne.n 0x9bdce	@ 0009bdae 0ed1
.org 0x9bdb0
	adds r0, r4, #0	@ 0009bdb0 201c
.org 0x9bdb2
	adds r0, #84	@ 0009bdb2 5430
.org 0x9bdb4
	movs r1, #0	@ 0009bdb4 0021
.org 0x9bdb6
	movs r2, #0	@ 0009bdb6 0022
.org 0x9bdb8
	bl 0x664bc	@ 0009bdb8 caf780fb
.org 0x9bdbc
	lsls r0, r5, #2	@ 0009bdbc a800
.org 0x9bdbe
	add r0, sp	@ 0009bdbe 6844
.org 0x9bdc0
	ldrh r1, [r0, #0]	@ 0009bdc0 0188
.org 0x9bdc2
	adds r0, r4, #0	@ 0009bdc2 201c
.org 0x9bdc4
	bl 0x1cf00	@ 0009bdc4 81f79cf8
.org 0x9bdc8
	ldrb r0, [r4, #15]	@ 0009bdc8 e07b
.org 0x9bdca
	adds r0, #1	@ 0009bdca 0130
.org 0x9bdcc
	strb r0, [r4, #15]	@ 0009bdcc e073
.org 0x9bdce
	adds r0, r4, #0	@ 0009bdce 201c
.org 0x9bdd0
	bl 0x1cff0	@ 0009bdd0 81f70ef9
.org 0x9bdd4
	adds r0, r4, #0	@ 0009bdd4 201c
.org 0x9bdd6
	adds r0, #116	@ 0009bdd6 7430
.org 0x9bdd8
	ldr r3, [pc, #64]	@ 0009bdd8 104b
.org 0x9bdda
	adds r1, r6, r7	@ 0009bdda f119
.org 0x9bddc
	ldrb r2, [r1, #0]	@ 0009bddc 0a78
.org 0x9bdde
	lsls r2, r2, #2	@ 0009bdde 9200
.org 0x9bde0
	adds r2, r2, r3	@ 0009bde0 d218
.org 0x9bde2
	adds r1, r4, #0	@ 0009bde2 211c
.org 0x9bde4
	adds r1, #113	@ 0009bde4 7131
.org 0x9bde6
	ldrb r1, [r1, #0]	@ 0009bde6 0978
.org 0x9bde8
	lsls r1, r1, #24	@ 0009bde8 0906
.org 0x9bdea
	asrs r1, r1, #24	@ 0009bdea 0916
.org 0x9bdec
	ldr r2, [r2, #0]	@ 0009bdec 1268
.org 0x9bdee
	lsls r1, r1, #2	@ 0009bdee 8900
.org 0x9bdf0
	adds r1, r1, r2	@ 0009bdf0 8918
.org 0x9bdf2
	ldr r1, [r1, #0]	@ 0009bdf2 0968
.org 0x9bdf4
	bl 0x5784	@ 0009bdf4 69f7c6fc
.org 0x9bdf8
	adds r0, r4, #0	@ 0009bdf8 201c
.org 0x9bdfa
	adds r0, #115	@ 0009bdfa 7330
.org 0x9bdfc
	ldrb r0, [r0, #0]	@ 0009bdfc 0078
.org 0x9bdfe
	cmp r0, #3	@ 0009bdfe 0328
.org 0x9be00
	bne.n 0x9be0c	@ 0009be00 04d1
.org 0x9be02
	movs r1, #0	@ 0009be02 0021
.org 0x9be04
	movs r0, #1	@ 0009be04 0120
.org 0x9be06
	strb r0, [r4, #13]	@ 0009be06 6073
.org 0x9be08
	strb r1, [r4, #14]	@ 0009be08 a173
.org 0x9be0a
	strb r1, [r4, #15]	@ 0009be0a e173
.org 0x9be0c
	add sp, #20	@ 0009be0c 05b0
.org 0x9be0e
	pop {r4, r5, r6, r7}	@ 0009be0e f0bc
.org 0x9be10
	pop {r0}	@ 0009be10 01bc
.org 0x9be12
	bx r0	@ 0009be12 0047
