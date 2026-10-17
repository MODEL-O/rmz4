@ FUN_080ccaa0  entry 0x080ccaa0  size 90
.thumb
.org 0xccaa0
FUN_080ccaa0:
	push {r4, r5, r6, lr}	@ 000ccaa0 70b5
.org 0xccaa2
	adds r4, r0, #0	@ 000ccaa2 041c
.org 0xccaa4
	bl 0x1cc9c	@ 000ccaa4 50f7faf8
.org 0xccaa8
	ldrb r1, [r4, #10]	@ 000ccaa8 a17a
.org 0xccaaa
	movs r0, #1	@ 000ccaaa 0120
.org 0xccaac
	movs r6, #0	@ 000ccaac 0026
.org 0xccaae
	orrs r0, r1	@ 000ccaae 0843
.org 0xccab0
	movs r1, #2	@ 000ccab0 0221
.org 0xccab2
	orrs r0, r1	@ 000ccab2 0843
.org 0xccab4
	strb r0, [r4, #10]	@ 000ccab4 a072
.org 0xccab6
	ldr r1, [pc, #68]	@ 000ccab6 1149
.org 0xccab8
	ldrb r0, [r4, #9]	@ 000ccab8 607a
.org 0xccaba
	lsls r0, r0, #2	@ 000ccaba 8000
.org 0xccabc
	adds r0, r0, r1	@ 000ccabc 4018
.org 0xccabe
	movs r1, #1	@ 000ccabe 0121
.org 0xccac0
	str r1, [r4, #12]	@ 000ccac0 e160
.org 0xccac2
	ldr r0, [r0, #0]	@ 000ccac2 0068
.org 0xccac4
	ldr r0, [r0, #4]	@ 000ccac4 4068
.org 0xccac6
	str r0, [r4, #20]	@ 000ccac6 6061
.org 0xccac8
	ldr r1, [pc, #52]	@ 000ccac8 0d49
.org 0xccaca
	adds r0, r4, #0	@ 000ccaca 201c
.org 0xccacc
	bl 0x1cf00	@ 000ccacc 50f718fa
.org 0xccad0
	movs r0, #192	@ 000ccad0 c020
.org 0xccad2
	lsls r0, r0, #1	@ 000ccad2 4000
.org 0xccad4
	str r0, [r4, #96]	@ 000ccad4 2066
.org 0xccad6
	ldrb r1, [r4, #10]	@ 000ccad6 a17a
.org 0xccad8
	movs r0, #4	@ 000ccad8 0420
.org 0xccada
	orrs r0, r1	@ 000ccada 0843
.org 0xccadc
	strb r0, [r4, #10]	@ 000ccadc a072
.org 0xccade
	adds r5, r4, #0	@ 000ccade 251c
.org 0xccae0
	adds r5, #116	@ 000ccae0 7435
.org 0xccae2
	ldr r1, [pc, #32]	@ 000ccae2 0849
.org 0xccae4
	adds r2, r4, #0	@ 000ccae4 221c
.org 0xccae6
	adds r2, #84	@ 000ccae6 5432
.org 0xccae8
	adds r0, r5, #0	@ 000ccae8 281c
.org 0xccaea
	movs r3, #255	@ 000ccaea ff23
.org 0xccaec
	bl 0x5760	@ 000ccaec 38f738fe
.org 0xccaf0
	str r4, [r5, #44]	@ 000ccaf0 ec62
.org 0xccaf2
	str r6, [r5, #36]	@ 000ccaf2 6e62
.org 0xccaf4
	pop {r4, r5, r6}	@ 000ccaf4 70bc
.org 0xccaf6
	pop {r0}	@ 000ccaf6 01bc
.org 0xccaf8
	bx r0	@ 000ccaf8 0047
