@ FUN_0808a23c  entry 0x0808a23c  size 42
.thumb
.org 0x8a23c
FUN_0808a23c:
	push {r4, lr}	@ 0008a23c 10b5
.org 0x8a23e
	adds r4, r0, #0	@ 0008a23e 041c
.org 0x8a240
	ldr r0, [r4, #96]	@ 0008a240 206e
.org 0x8a242
	cmp r0, #0	@ 0008a242 0028
.org 0x8a244
	ble.n 0x8a25e	@ 0008a244 0bdd
.org 0x8a246
	ldr r0, [r4, #84]	@ 0008a246 606d
.org 0x8a248
	ldr r1, [r4, #88]	@ 0008a248 a16d
.org 0x8a24a
	adds r1, #64	@ 0008a24a 4031
.org 0x8a24c
	bl 0x7c7c	@ 0008a24c 7df716fd
.org 0x8a250
	lsls r0, r0, #16	@ 0008a250 0004
.org 0x8a252
	cmp r0, #0	@ 0008a252 0028
.org 0x8a254
	beq.n 0x8a25e	@ 0008a254 03d0
.org 0x8a256
	movs r1, #0	@ 0008a256 0021
.org 0x8a258
	movs r0, #8	@ 0008a258 0820
.org 0x8a25a
	strb r0, [r4, #13]	@ 0008a25a 6073
.org 0x8a25c
	strb r1, [r4, #14]	@ 0008a25c a173
.org 0x8a25e
	movs r0, #0	@ 0008a25e 0020
.org 0x8a260
	pop {r4}	@ 0008a260 10bc
.org 0x8a262
	pop {r1}	@ 0008a262 02bc
.org 0x8a264
	bx r1	@ 0008a264 0847
