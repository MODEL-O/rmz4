@ FUN_0800a498  entry 0x0800a498  size 124
.thumb
.org 0xa498
FUN_0800a498:
	push {r4, lr}	@ 0000a498 10b5
.org 0xa49a
	ldr r0, [pc, #120]	@ 0000a49a 1e48
.org 0xa49c
	ldr r2, [pc, #120]	@ 0000a49c 1e4a
.org 0xa49e
	adds r1, r0, r2	@ 0000a49e 8118
.org 0xa4a0
	movs r2, #0	@ 0000a4a0 0022
.org 0xa4a2
	strb r2, [r1, #0]	@ 0000a4a2 0a70
.org 0xa4a4
	ldr r3, [pc, #116]	@ 0000a4a4 1d4b
.org 0xa4a6
	adds r1, r0, r3	@ 0000a4a6 c118
.org 0xa4a8
	movs r3, #0	@ 0000a4a8 0023
.org 0xa4aa
	strh r2, [r1, #0]	@ 0000a4aa 0a80
.org 0xa4ac
	ldr r4, [pc, #112]	@ 0000a4ac 1c4c
.org 0xa4ae
	adds r1, r0, r4	@ 0000a4ae 0119
.org 0xa4b0
	strb r3, [r1, #0]	@ 0000a4b0 0b70
.org 0xa4b2
	adds r4, #3	@ 0000a4b2 0334
.org 0xa4b4
	adds r1, r0, r4	@ 0000a4b4 0119
.org 0xa4b6
	strb r3, [r1, #0]	@ 0000a4b6 0b70
.org 0xa4b8
	subs r4, #2	@ 0000a4b8 023c
.org 0xa4ba
	adds r1, r0, r4	@ 0000a4ba 0119
.org 0xa4bc
	strb r3, [r1, #0]	@ 0000a4bc 0b70
.org 0xa4be
	adds r4, #7	@ 0000a4be 0734
.org 0xa4c0
	adds r1, r0, r4	@ 0000a4c0 0119
.org 0xa4c2
	str r2, [r1, #0]	@ 0000a4c2 0a60
.org 0xa4c4
	subs r4, #12	@ 0000a4c4 0c3c
.org 0xa4c6
	adds r1, r0, r4	@ 0000a4c6 0119
.org 0xa4c8
	strb r3, [r1, #0]	@ 0000a4c8 0b70
.org 0xa4ca
	ldr r3, [pc, #88]	@ 0000a4ca 164b
.org 0xa4cc
	adds r1, r0, r3	@ 0000a4cc c118
.org 0xa4ce
	strh r2, [r1, #0]	@ 0000a4ce 0a80
.org 0xa4d0
	adds r4, #8	@ 0000a4d0 0834
.org 0xa4d2
	adds r1, r0, r4	@ 0000a4d2 0119
.org 0xa4d4
	strh r2, [r1, #0]	@ 0000a4d4 0a80
.org 0xa4d6
	adds r3, #20	@ 0000a4d6 1433
.org 0xa4d8
	adds r1, r0, r3	@ 0000a4d8 c118
.org 0xa4da
	strh r2, [r1, #0]	@ 0000a4da 0a80
.org 0xa4dc
	adds r4, #20	@ 0000a4dc 1434
.org 0xa4de
	adds r1, r0, r4	@ 0000a4de 0119
.org 0xa4e0
	strh r2, [r1, #0]	@ 0000a4e0 0a80
.org 0xa4e2
	subs r3, #4	@ 0000a4e2 043b
.org 0xa4e4
	adds r1, r0, r3	@ 0000a4e4 c118
.org 0xa4e6
	strh r2, [r1, #0]	@ 0000a4e6 0a80
.org 0xa4e8
	subs r4, #4	@ 0000a4e8 043c
.org 0xa4ea
	adds r1, r0, r4	@ 0000a4ea 0119
.org 0xa4ec
	strh r2, [r1, #0]	@ 0000a4ec 0a80
.org 0xa4ee
	subs r3, #4	@ 0000a4ee 043b
.org 0xa4f0
	adds r1, r0, r3	@ 0000a4f0 c118
.org 0xa4f2
	strh r2, [r1, #0]	@ 0000a4f2 0a80
.org 0xa4f4
	subs r4, #4	@ 0000a4f4 043c
.org 0xa4f6
	adds r1, r0, r4	@ 0000a4f6 0119
.org 0xa4f8
	strh r2, [r1, #0]	@ 0000a4f8 0a80
.org 0xa4fa
	subs r3, #4	@ 0000a4fa 043b
.org 0xa4fc
	adds r1, r0, r3	@ 0000a4fc c118
.org 0xa4fe
	strh r2, [r1, #0]	@ 0000a4fe 0a80
.org 0xa500
	subs r4, #4	@ 0000a500 043c
.org 0xa502
	adds r1, r0, r4	@ 0000a502 0119
.org 0xa504
	strh r2, [r1, #0]	@ 0000a504 0a80
.org 0xa506
	ldr r1, [pc, #32]	@ 0000a506 0849
.org 0xa508
	adds r0, r0, r1	@ 0000a508 4018
.org 0xa50a
	movs r1, #16	@ 0000a50a 1021
.org 0xa50c
	strb r1, [r0, #0]	@ 0000a50c 0170
.org 0xa50e
	pop {r4}	@ 0000a50e 10bc
.org 0xa510
	pop {r0}	@ 0000a510 01bc
.org 0xa512
	bx r0	@ 0000a512 0047
