@ FUN_080922b0  entry 0x080922b0  size 70
.thumb
.org 0x922b0
FUN_080922b0:
	push {r4, lr}	@ 000922b0 10b5
.org 0x922b2
	adds r4, r0, #0	@ 000922b2 041c
.org 0x922b4
	bl 0x921ac	@ 000922b4 fff77aff
.org 0x922b8
	lsls r0, r0, #24	@ 000922b8 0006
.org 0x922ba
	cmp r0, #0	@ 000922ba 0028
.org 0x922bc
	bne.n 0x922f0	@ 000922bc 18d1
.org 0x922be
	adds r0, r4, #0	@ 000922be 201c
.org 0x922c0
	bl 0x92200	@ 000922c0 fff79eff
.org 0x922c4
	adds r0, r4, #0	@ 000922c4 201c
.org 0x922c6
	bl 0x921fc	@ 000922c6 fff799ff
.org 0x922ca
	lsls r0, r0, #24	@ 000922ca 0006
.org 0x922cc
	cmp r0, #0	@ 000922cc 0028
.org 0x922ce
	bne.n 0x922f0	@ 000922ce 0fd1
.org 0x922d0
	ldr r1, [pc, #36]	@ 000922d0 0949
.org 0x922d2
	ldrb r0, [r4, #13]	@ 000922d2 607b
.org 0x922d4
	lsls r0, r0, #2	@ 000922d4 8000
.org 0x922d6
	adds r0, r0, r1	@ 000922d6 4018
.org 0x922d8
	ldr r1, [r0, #0]	@ 000922d8 0168
.org 0x922da
	adds r0, r4, #0	@ 000922da 201c
.org 0x922dc
	bl 0x128f80	@ 000922dc 96f050fe
.org 0x922e0
	ldr r1, [pc, #24]	@ 000922e0 0649
.org 0x922e2
	ldrb r0, [r4, #13]	@ 000922e2 607b
.org 0x922e4
	lsls r0, r0, #2	@ 000922e4 8000
.org 0x922e6
	adds r0, r0, r1	@ 000922e6 4018
.org 0x922e8
	ldr r1, [r0, #0]	@ 000922e8 0168
.org 0x922ea
	adds r0, r4, #0	@ 000922ea 201c
.org 0x922ec
	bl 0x128f80	@ 000922ec 96f048fe
.org 0x922f0
	pop {r4}	@ 000922f0 10bc
.org 0x922f2
	pop {r0}	@ 000922f2 01bc
.org 0x922f4
	bx r0	@ 000922f4 0047
