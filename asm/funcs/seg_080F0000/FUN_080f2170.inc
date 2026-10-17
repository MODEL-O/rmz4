@ FUN_080f2170  entry 0x080f2170  size 42
.thumb
.org 0xf2170
FUN_080f2170:
	push {r4, lr}	@ 000f2170 10b5
.org 0xf2172
	adds r4, r0, #0	@ 000f2172 041c
.org 0xf2174
	ldr r0, [r4, #84]	@ 000f2174 606d
.org 0xf2176
	ldr r1, [pc, #36]	@ 000f2176 0949
.org 0xf2178
	adds r0, r0, r1	@ 000f2178 4018
.org 0xf217a
	str r0, [r4, #84]	@ 000f217a 6065
.org 0xf217c
	ldr r0, [pc, #32]	@ 000f217c 0848
.org 0xf217e
	adds r1, r4, #0	@ 000f217e 211c
.org 0xf2180
	adds r1, #84	@ 000f2180 5431
.org 0xf2182
	bl 0x1fb14	@ 000f2182 2df7c7fc
.org 0xf2186
	movs r1, #128	@ 000f2186 8021
.org 0xf2188
	lsls r1, r1, #9	@ 000f2188 4902
.org 0xf218a
	cmp r0, r1	@ 000f218a 8842
.org 0xf218c
	bls.n 0xf2194	@ 000f218c 02d9
.org 0xf218e
	adds r0, r4, #0	@ 000f218e 201c
.org 0xf2190
	bl 0xe954c	@ 000f2190 f7f7dcf9
.org 0xf2194
	pop {r4}	@ 000f2194 10bc
.org 0xf2196
	pop {r0}	@ 000f2196 01bc
.org 0xf2198
	bx r0	@ 000f2198 0047
