@ FUN_080e51c8  entry 0x080e51c8  size 114
.thumb
.org 0xe51c8
FUN_080e51c8:
	push {r4, lr}	@ 000e51c8 10b5
.org 0xe51ca
	adds r4, r0, #0	@ 000e51ca 041c
.org 0xe51cc
	ldr r0, [r4, #84]	@ 000e51cc 606d
.org 0xe51ce
	ldr r1, [r4, #92]	@ 000e51ce e16d
.org 0xe51d0
	adds r0, r0, r1	@ 000e51d0 4018
.org 0xe51d2
	str r0, [r4, #84]	@ 000e51d2 6065
.org 0xe51d4
	ldr r1, [r4, #88]	@ 000e51d4 a16d
.org 0xe51d6
	ldr r2, [r4, #96]	@ 000e51d6 226e
.org 0xe51d8
	adds r1, r1, r2	@ 000e51d8 8918
.org 0xe51da
	str r1, [r4, #88]	@ 000e51da a165
.org 0xe51dc
	ldr r3, [r4, #104]	@ 000e51dc a36e
.org 0xe51de
	adds r2, r2, r3	@ 000e51de d218
.org 0xe51e0
	str r2, [r4, #96]	@ 000e51e0 2266
.org 0xe51e2
	bl 0x7c7c	@ 000e51e2 22f74bfd
.org 0xe51e6
	lsls r0, r0, #16	@ 000e51e6 0004
.org 0xe51e8
	cmp r0, #0	@ 000e51e8 0028
.org 0xe51ea
	bne.n 0xe51f2	@ 000e51ea 02d1
.org 0xe51ec
	ldrb r0, [r4, #19]	@ 000e51ec e07c
.org 0xe51ee
	cmp r0, #0	@ 000e51ee 0028
.org 0xe51f0
	bne.n 0xe5230	@ 000e51f0 1ed1
.org 0xe51f2
	adds r1, r4, #0	@ 000e51f2 211c
.org 0xe51f4
	adds r1, #84	@ 000e51f4 5431
.org 0xe51f6
	movs r0, #2	@ 000e51f6 0220
.org 0xe51f8
	bl 0xd0c88	@ 000e51f8 ebf746fd
.org 0xe51fc
	ldr r0, [r4, #84]	@ 000e51fc 606d
.org 0xe51fe
	ldr r1, [r4, #88]	@ 000e51fe a16d
.org 0xe5200
	bl 0x7020	@ 000e5200 21f70eff
.org 0xe5204
	movs r1, #128	@ 000e5204 8021
.org 0xe5206
	lsls r1, r1, #8	@ 000e5206 0902
.org 0xe5208
	ands r1, r0	@ 000e5208 0140
.org 0xe520a
	cmp r1, #0	@ 000e520a 0029
.org 0xe520c
	bne.n 0xe5216	@ 000e520c 03d1
.org 0xe520e
	movs r0, #53	@ 000e520e 3520
.org 0xe5210
	bl 0x2b10	@ 000e5210 1df77efc
.org 0xe5214
	b.n 0xe521c	@ 000e5214 02e0
.org 0xe5216
	movs r0, #49	@ 000e5216 3120
.org 0xe5218
	bl 0x2b10	@ 000e5218 1df77afc
.org 0xe521c
	ldr r1, [pc, #28]	@ 000e521c 0749
.org 0xe521e
	ldrb r0, [r4, #9]	@ 000e521e 607a
.org 0xe5220
	lsls r0, r0, #2	@ 000e5220 8000
.org 0xe5222
	adds r0, r0, r1	@ 000e5222 4018
.org 0xe5224
	movs r1, #2	@ 000e5224 0221
.org 0xe5226
	str r1, [r4, #12]	@ 000e5226 e160
.org 0xe5228
	ldr r0, [r0, #0]	@ 000e5228 0068
.org 0xe522a
	ldr r0, [r0, #8]	@ 000e522a 8068
.org 0xe522c
	str r0, [r4, #20]	@ 000e522c 6061
.org 0xe522e
	ldrb r0, [r4, #19]	@ 000e522e e07c
.org 0xe5230
	subs r0, #1	@ 000e5230 0138
.org 0xe5232
	strb r0, [r4, #19]	@ 000e5232 e074
.org 0xe5234
	pop {r4}	@ 000e5234 10bc
.org 0xe5236
	pop {r0}	@ 000e5236 01bc
.org 0xe5238
	bx r0	@ 000e5238 0047
