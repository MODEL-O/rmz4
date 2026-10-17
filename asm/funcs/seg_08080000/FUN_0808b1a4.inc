@ FUN_0808b1a4  entry 0x0808b1a4  size 50
.thumb
.org 0x8b1a4
FUN_0808b1a4:
	push {r4, r5, lr}	@ 0008b1a4 30b5
.org 0x8b1a6
	adds r4, r0, #0	@ 0008b1a6 041c
.org 0x8b1a8
	adds r0, #193	@ 0008b1a8 c130
.org 0x8b1aa
	ldrb r5, [r0, #0]	@ 0008b1aa 0578
.org 0x8b1ac
	cmp r5, #0	@ 0008b1ac 002d
.org 0x8b1ae
	bne.n 0x8b1ce	@ 0008b1ae 0ed1
.org 0x8b1b0
	ldr r0, [r4, #84]	@ 0008b1b0 606d
.org 0x8b1b2
	ldr r1, [r4, #88]	@ 0008b1b2 a16d
.org 0x8b1b4
	bl 0x8534	@ 0008b1b4 7df7bef9
.org 0x8b1b8
	adds r2, r0, #0	@ 0008b1b8 021c
.org 0x8b1ba
	ldr r0, [r4, #88]	@ 0008b1ba a06d
.org 0x8b1bc
	subs r0, r2, r0	@ 0008b1bc 101a
.org 0x8b1be
	ldr r1, [pc, #24]	@ 0008b1be 0649
.org 0x8b1c0
	cmp r0, r1	@ 0008b1c0 8842
.org 0x8b1c2
	bgt.n 0x8b1ce	@ 0008b1c2 04dc
.org 0x8b1c4
	str r2, [r4, #88]	@ 0008b1c4 a265
.org 0x8b1c6
	ldr r0, [r4, #96]	@ 0008b1c6 206e
.org 0x8b1c8
	cmp r0, #64	@ 0008b1c8 4028
.org 0x8b1ca
	ble.n 0x8b1ce	@ 0008b1ca 00dd
.org 0x8b1cc
	str r5, [r4, #96]	@ 0008b1cc 2566
.org 0x8b1ce
	movs r0, #0	@ 0008b1ce 0020
.org 0x8b1d0
	pop {r4, r5}	@ 0008b1d0 30bc
.org 0x8b1d2
	pop {r1}	@ 0008b1d2 02bc
.org 0x8b1d4
	bx r1	@ 0008b1d4 0847
