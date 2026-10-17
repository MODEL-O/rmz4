@ FUN_0807bd84  entry 0x0807bd84  size 122
.thumb
.org 0x7bd84
FUN_0807bd84:
	push {r4, r5, r6, r7, lr}	@ 0007bd84 f0b5
.org 0x7bd86
	sub sp, #8	@ 0007bd86 82b0
.org 0x7bd88
	adds r4, r0, #0	@ 0007bd88 041c
.org 0x7bd8a
	ldr r1, [pc, #116]	@ 0007bd8a 1d49
.org 0x7bd8c
	mov r0, sp	@ 0007bd8c 6846
.org 0x7bd8e
	movs r2, #2	@ 0007bd8e 0222
.org 0x7bd90
	bl 0x129258	@ 0007bd90 adf062fa
.org 0x7bd94
	add r6, sp, #4	@ 0007bd94 01ae
.org 0x7bd96
	ldr r1, [pc, #108]	@ 0007bd96 1b49
.org 0x7bd98
	adds r0, r6, #0	@ 0007bd98 301c
.org 0x7bd9a
	movs r2, #2	@ 0007bd9a 0222
.org 0x7bd9c
	bl 0x129258	@ 0007bd9c adf05cfa
.org 0x7bda0
	movs r3, #0	@ 0007bda0 0023
.org 0x7bda2
	adds r0, r4, #0	@ 0007bda2 201c
.org 0x7bda4
	adds r0, #180	@ 0007bda4 b430
.org 0x7bda6
	ldr r5, [r0, #0]	@ 0007bda6 0568
.org 0x7bda8
	movs r0, #240	@ 0007bda8 f020
.org 0x7bdaa
	lsls r0, r0, #7	@ 0007bdaa c001
.org 0x7bdac
	mov ip, r0	@ 0007bdac 8446
.org 0x7bdae
	adds r1, r5, r0	@ 0007bdae 2918
.org 0x7bdb0
	ldr r0, [pc, #84]	@ 0007bdb0 1548
.org 0x7bdb2
	ldr r0, [r0, #0]	@ 0007bdb2 0068
.org 0x7bdb4
	ldr r0, [r0, #84]	@ 0007bdb4 406d
.org 0x7bdb6
	cmp r1, r0	@ 0007bdb6 8142
.org 0x7bdb8
	bge.n 0x7bdbc	@ 0007bdb8 00da
.org 0x7bdba
	movs r3, #1	@ 0007bdba 0123
.org 0x7bdbc
	adds r2, r4, #0	@ 0007bdbc 221c
.org 0x7bdbe
	adds r2, #200	@ 0007bdbe c832
.org 0x7bdc0
	ldr r1, [pc, #72]	@ 0007bdc0 1249
.org 0x7bdc2
	mov r7, sp	@ 0007bdc2 6f46
.org 0x7bdc4
	adds r0, r7, r3	@ 0007bdc4 f818
.org 0x7bdc6
	ldrb r0, [r0, #0]	@ 0007bdc6 0078
.org 0x7bdc8
	lsls r0, r0, #2	@ 0007bdc8 8000
.org 0x7bdca
	adds r0, r0, r1	@ 0007bdca 4018
.org 0x7bdcc
	ldr r0, [r0, #0]	@ 0007bdcc 0068
.org 0x7bdce
	add r0, ip	@ 0007bdce 6044
.org 0x7bdd0
	adds r0, r5, r0	@ 0007bdd0 2818
.org 0x7bdd2
	str r0, [r2, #0]	@ 0007bdd2 1060
.org 0x7bdd4
	adds r0, r6, r3	@ 0007bdd4 f018
.org 0x7bdd6
	ldrb r0, [r0, #0]	@ 0007bdd6 0078
.org 0x7bdd8
	subs r2, #10	@ 0007bdd8 0a3a
.org 0x7bdda
	movs r1, #0	@ 0007bdda 0021
.org 0x7bddc
	strb r0, [r2, #0]	@ 0007bddc 1070
.org 0x7bdde
	ldrb r0, [r4, #14]	@ 0007bdde a07b
.org 0x7bde0
	adds r0, #1	@ 0007bde0 0130
.org 0x7bde2
	strb r0, [r4, #14]	@ 0007bde2 a073
.org 0x7bde4
	strb r1, [r4, #15]	@ 0007bde4 e173
.org 0x7bde6
	ldr r1, [pc, #40]	@ 0007bde6 0a49
.org 0x7bde8
	ldrb r0, [r4, #13]	@ 0007bde8 607b
.org 0x7bdea
	lsls r0, r0, #2	@ 0007bdea 8000
.org 0x7bdec
	adds r0, r0, r1	@ 0007bdec 4018
.org 0x7bdee
	ldr r1, [r0, #0]	@ 0007bdee 0168
.org 0x7bdf0
	adds r0, r4, #0	@ 0007bdf0 201c
.org 0x7bdf2
	bl 0x128f80	@ 0007bdf2 adf0c5f8
.org 0x7bdf6
	add sp, #8	@ 0007bdf6 02b0
.org 0x7bdf8
	pop {r4, r5, r6, r7}	@ 0007bdf8 f0bc
.org 0x7bdfa
	pop {r0}	@ 0007bdfa 01bc
.org 0x7bdfc
	bx r0	@ 0007bdfc 0047
