@ FUN_080b21e4  entry 0x080b21e4  size 78
.thumb
.org 0xb21e4
FUN_080b21e4:
	push {r4, r5, lr}	@ 000b21e4 30b5
.org 0xb21e6
	adds r3, r0, #0	@ 000b21e6 031c
.org 0xb21e8
	ldr r0, [pc, #64]	@ 000b21e8 1048
.org 0xb21ea
	ldr r4, [r0, #0]	@ 000b21ea 0468
.org 0xb21ec
	ldr r0, [r4, #88]	@ 000b21ec a06d
.org 0xb21ee
	ldr r1, [pc, #64]	@ 000b21ee 1049
.org 0xb21f0
	adds r2, r0, r1	@ 000b21f0 4218
.org 0xb21f2
	ldr r1, [r3, #88]	@ 000b21f2 996d
.org 0xb21f4
	ldr r5, [pc, #60]	@ 000b21f4 0f4d
.org 0xb21f6
	adds r0, r1, r5	@ 000b21f6 4819
.org 0xb21f8
	cmp r2, r0	@ 000b21f8 8242
.org 0xb21fa
	ble.n 0xb223c	@ 000b21fa 1fdd
.org 0xb21fc
	movs r5, #224	@ 000b21fc e025
.org 0xb21fe
	lsls r5, r5, #5	@ 000b21fe 6d01
.org 0xb2200
	adds r0, r1, r5	@ 000b2200 4819
.org 0xb2202
	cmp r2, r0	@ 000b2202 8242
.org 0xb2204
	bge.n 0xb223c	@ 000b2204 1ada
.org 0xb2206
	ldr r0, [r4, #84]	@ 000b2206 606d
.org 0xb2208
	ldr r1, [r3, #84]	@ 000b2208 596d
.org 0xb220a
	subs r0, r0, r1	@ 000b220a 401a
.org 0xb220c
	asrs r2, r0, #8	@ 000b220c 0212
.org 0xb220e
	cmp r2, #0	@ 000b220e 002a
.org 0xb2210
	bge.n 0xb2214	@ 000b2210 00da
.org 0xb2212
	negs r2, r2	@ 000b2212 5242
.org 0xb2214
	ldr r1, [pc, #32]	@ 000b2214 0849
.org 0xb2216
	adds r0, r3, #0	@ 000b2216 181c
.org 0xb2218
	adds r0, #181	@ 000b2218 b530
.org 0xb221a
	ldrb r0, [r0, #0]	@ 000b221a 0078
.org 0xb221c
	lsls r0, r0, #2	@ 000b221c 8000
.org 0xb221e
	adds r0, r0, r1	@ 000b221e 4018
.org 0xb2220
	ldr r0, [r0, #0]	@ 000b2220 0068
.org 0xb2222
	cmp r2, r0	@ 000b2222 8242
.org 0xb2224
	bge.n 0xb223c	@ 000b2224 0ada
.org 0xb2226
	movs r0, #1	@ 000b2226 0120
.org 0xb2228
	b.n 0xb223e	@ 000b2228 09e0
.org 0xb222a
	.byte 0x00	@ 000b222a data
.org 0xb222b
	.byte 0x00	@ 000b222b data
.org 0xb222c
	.byte 0xf0,0xdb,0x02,0x02	@ 000b222c data
.org 0xb2230
	.byte 0x00,0xec,0xff,0xff	@ 000b2230 data
