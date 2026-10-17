@ FUN_08071398  entry 0x08071398  size 146
.thumb
.org 0x71398
FUN_08071398:
	push {r4, r5, r6, lr}	@ 00071398 70b5
.org 0x7139a
	adds r6, r0, #0	@ 0007139a 061c
.org 0x7139c
	ldrb r0, [r6, #15]	@ 0007139c f07b
.org 0x7139e
	cmp r0, #0	@ 0007139e 0028
.org 0x713a0
	bne.n 0x713b8	@ 000713a0 0ad1
.org 0x713a2
	movs r0, #155	@ 000713a2 9b20
.org 0x713a4
	lsls r0, r0, #1	@ 000713a4 4000
.org 0x713a6
	bl 0x2b10	@ 000713a6 91f7b3fb
.org 0x713aa
	adds r0, r6, #0	@ 000713aa 301c
.org 0x713ac
	movs r1, #7	@ 000713ac 0721
.org 0x713ae
	bl 0x736c4	@ 000713ae 02f089f9
.org 0x713b2
	ldrb r0, [r6, #15]	@ 000713b2 f07b
.org 0x713b4
	adds r0, #1	@ 000713b4 0130
.org 0x713b6
	strb r0, [r6, #15]	@ 000713b6 f073
.org 0x713b8
	adds r0, r6, #0	@ 000713b8 301c
.org 0x713ba
	bl 0x1cff0	@ 000713ba abf719fe
.org 0x713be
	adds r0, r6, #0	@ 000713be 301c
.org 0x713c0
	adds r0, #116	@ 000713c0 7430
.org 0x713c2
	ldr r4, [pc, #104]	@ 000713c2 1a4c
.org 0x713c4
	ldr r3, [pc, #104]	@ 000713c4 1a4b
.org 0x713c6
	adds r1, r6, #0	@ 000713c6 311c
.org 0x713c8
	adds r1, #184	@ 000713c8 b831
.org 0x713ca
	ldrb r2, [r1, #0]	@ 000713ca 0a78
.org 0x713cc
	lsls r1, r2, #1	@ 000713cc 5100
.org 0x713ce
	adds r1, r1, r3	@ 000713ce c918
.org 0x713d0
	ldrh r1, [r1, #0]	@ 000713d0 0988
.org 0x713d2
	lsls r1, r1, #2	@ 000713d2 8900
.org 0x713d4
	adds r1, r1, r4	@ 000713d4 0919
.org 0x713d6
	adds r3, r6, #0	@ 000713d6 331c
.org 0x713d8
	adds r3, #113	@ 000713d8 7133
.org 0x713da
	movs r5, #0	@ 000713da 0025
.org 0x713dc
	ldrsb r5, [r3, r5]	@ 000713dc 5d57
.org 0x713de
	ldr r1, [r1, #0]	@ 000713de 0968
.org 0x713e0
	lsls r3, r5, #2	@ 000713e0 ab00
.org 0x713e2
	adds r3, r3, r1	@ 000713e2 5b18
.org 0x713e4
	ldr r4, [pc, #76]	@ 000713e4 134c
.org 0x713e6
	adds r1, r6, #0	@ 000713e6 311c
.org 0x713e8
	adds r1, #185	@ 000713e8 b931
.org 0x713ea
	ldrb r1, [r1, #0]	@ 000713ea 0978
.org 0x713ec
	lsls r1, r1, #2	@ 000713ec 8900
.org 0x713ee
	adds r1, r1, r4	@ 000713ee 0919
.org 0x713f0
	ldr r1, [r1, #0]	@ 000713f0 0968
.org 0x713f2
	lsls r2, r2, #2	@ 000713f2 9200
.org 0x713f4
	adds r2, r2, r1	@ 000713f4 5218
.org 0x713f6
	ldr r1, [r2, #0]	@ 000713f6 1168
.org 0x713f8
	adds r1, r1, r5	@ 000713f8 4919
.org 0x713fa
	ldrb r1, [r1, #0]	@ 000713fa 0978
.org 0x713fc
	lsls r2, r1, #1	@ 000713fc 4a00
.org 0x713fe
	adds r2, r2, r1	@ 000713fe 5218
.org 0x71400
	lsls r2, r2, #3	@ 00071400 d200
.org 0x71402
	ldr r1, [r3, #0]	@ 00071402 1968
.org 0x71404
	adds r1, r1, r2	@ 00071404 8918
.org 0x71406
	bl 0x5784	@ 00071406 94f7bdf9
.org 0x7140a
	adds r0, r6, #0	@ 0007140a 301c
.org 0x7140c
	bl 0x73a68	@ 0007140c 02f02cfb
.org 0x71410
	adds r0, r6, #0	@ 00071410 301c
.org 0x71412
	adds r0, #115	@ 00071412 7330
.org 0x71414
	ldrb r0, [r0, #0]	@ 00071414 0078
.org 0x71416
	cmp r0, #3	@ 00071416 0328
.org 0x71418
	bne.n 0x71424	@ 00071418 04d1
.org 0x7141a
	ldrb r0, [r6, #14]	@ 0007141a b07b
.org 0x7141c
	adds r0, #1	@ 0007141c 0130
.org 0x7141e
	movs r1, #0	@ 0007141e 0021
.org 0x71420
	strb r0, [r6, #14]	@ 00071420 b073
.org 0x71422
	strb r1, [r6, #15]	@ 00071422 f173
.org 0x71424
	pop {r4, r5, r6}	@ 00071424 70bc
.org 0x71426
	pop {r0}	@ 00071426 01bc
.org 0x71428
	bx r0	@ 00071428 0047
