@ FUN_080b0c3c  entry 0x080b0c3c  size 58
.thumb
.org 0xb0c3c
FUN_080b0c3c:
	push {r4, lr}	@ 000b0c3c 10b5
.org 0xb0c3e
	adds r3, r0, #0	@ 000b0c3e 031c
.org 0xb0c40
	adds r2, r3, #0	@ 000b0c40 1a1c
.org 0xb0c42
	adds r2, #180	@ 000b0c42 b432
.org 0xb0c44
	ldrb r0, [r2, #0]	@ 000b0c44 1078
.org 0xb0c46
	cmp r0, #0	@ 000b0c46 0028
.org 0xb0c48
	bne.n 0xb0c5c	@ 000b0c48 08d1
.org 0xb0c4a
	adds r0, r3, #0	@ 000b0c4a 181c
.org 0xb0c4c
	adds r0, #184	@ 000b0c4c b830
.org 0xb0c4e
	ldr r1, [r0, #0]	@ 000b0c4e 0168
.org 0xb0c50
	movs r4, #160	@ 000b0c50 a024
.org 0xb0c52
	lsls r4, r4, #4	@ 000b0c52 2401
.org 0xb0c54
	adds r1, r1, r4	@ 000b0c54 0919
.org 0xb0c56
	str r1, [r0, #0]	@ 000b0c56 0160
.org 0xb0c58
	movs r0, #1	@ 000b0c58 0120
.org 0xb0c5a
	b.n 0xb0c6a	@ 000b0c5a 06e0
.org 0xb0c5c
	adds r0, r3, #0	@ 000b0c5c 181c
.org 0xb0c5e
	adds r0, #184	@ 000b0c5e b830
.org 0xb0c60
	ldr r1, [r0, #0]	@ 000b0c60 0168
.org 0xb0c62
	ldr r4, [pc, #20]	@ 000b0c62 054c
.org 0xb0c64
	adds r1, r1, r4	@ 000b0c64 0919
.org 0xb0c66
	str r1, [r0, #0]	@ 000b0c66 0160
.org 0xb0c68
	movs r0, #0	@ 000b0c68 0020
.org 0xb0c6a
	strb r0, [r2, #0]	@ 000b0c6a 1070
.org 0xb0c6c
	movs r0, #255	@ 000b0c6c ff20
.org 0xb0c6e
	strb r0, [r3, #19]	@ 000b0c6e d874
.org 0xb0c70
	pop {r4}	@ 000b0c70 10bc
.org 0xb0c72
	pop {r0}	@ 000b0c72 01bc
.org 0xb0c74
	bx r0	@ 000b0c74 0047
