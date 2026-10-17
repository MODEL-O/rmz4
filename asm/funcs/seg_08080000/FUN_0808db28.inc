@ FUN_0808db28  entry 0x0808db28  size 108
.thumb
.org 0x8db28
FUN_0808db28:
	push {r4, r5, r6, r7, lr}	@ 0008db28 f0b5
.org 0x8db2a
	adds r4, r0, #0	@ 0008db2a 041c
.org 0x8db2c
	ldr r0, [r4, #84]	@ 0008db2c 606d
.org 0x8db2e
	ldr r1, [r4, #88]	@ 0008db2e a16d
.org 0x8db30
	bl 0x8534	@ 0008db30 7af700fd
.org 0x8db34
	adds r6, r0, #0	@ 0008db34 061c
.org 0x8db36
	ldr r0, [r4, #88]	@ 0008db36 a06d
.org 0x8db38
	subs r0, r6, r0	@ 0008db38 301a
.org 0x8db3a
	ldr r1, [pc, #64]	@ 0008db3a 1049
.org 0x8db3c
	cmp r0, r1	@ 0008db3c 8842
.org 0x8db3e
	bgt.n 0x8db42	@ 0008db3e 00dc
.org 0x8db40
	str r6, [r4, #88]	@ 0008db40 a665
.org 0x8db42
	ldrb r0, [r4, #10]	@ 0008db42 a07a
.org 0x8db44
	lsrs r5, r0, #4	@ 0008db44 0509
.org 0x8db46
	movs r0, #1	@ 0008db46 0120
.org 0x8db48
	ands r5, r0	@ 0008db48 0540
.org 0x8db4a
	lsls r0, r5, #2	@ 0008db4a a800
.org 0x8db4c
	adds r0, r0, r5	@ 0008db4c 4019
.org 0x8db4e
	lsls r0, r0, #11	@ 0008db4e c002
.org 0x8db50
	ldr r1, [pc, #44]	@ 0008db50 0b49
.org 0x8db52
	adds r7, r0, r1	@ 0008db52 4718
.org 0x8db54
	ldr r0, [r4, #88]	@ 0008db54 a06d
.org 0x8db56
	ldr r1, [pc, #44]	@ 0008db56 0b49
.org 0x8db58
	adds r6, r0, r1	@ 0008db58 4618
.org 0x8db5a
	ldr r0, [r4, #84]	@ 0008db5a 606d
.org 0x8db5c
	adds r0, r0, r7	@ 0008db5c c019
.org 0x8db5e
	adds r1, r6, #0	@ 0008db5e 311c
.org 0x8db60
	bl 0x7c7c	@ 0008db60 7af78cf8
.org 0x8db64
	lsls r0, r0, #16	@ 0008db64 0004
.org 0x8db66
	cmp r0, #0	@ 0008db66 0028
.org 0x8db68
	beq.n 0x8db9a	@ 0008db68 17d0
.org 0x8db6a
	cmp r5, #0	@ 0008db6a 002d
.org 0x8db6c
	beq.n 0x8db88	@ 0008db6c 0cd0
.org 0x8db6e
	ldr r0, [r4, #84]	@ 0008db6e 606d
.org 0x8db70
	adds r0, r0, r7	@ 0008db70 c019
.org 0x8db72
	adds r1, r6, #0	@ 0008db72 311c
.org 0x8db74
	bl 0x8868	@ 0008db74 7af778fe
.org 0x8db78
	b.n 0x8db92	@ 0008db78 0be0
.org 0x8db7a
	.byte 0x00	@ 0008db7a data
.org 0x8db7b
	.byte 0x00	@ 0008db7b data
.org 0x8db7c
	.byte 0x3f,0x04,0x00,0x00	@ 0008db7c data
.org 0x8db80
	.byte 0x00,0xec,0xff,0xff	@ 0008db80 data
.org 0x8db84
	.byte 0x00,0xf8,0xff,0xff	@ 0008db84 data
.org 0x8db88
	ldr r0, [r4, #84]	@ 0008db88 606d
.org 0x8db8a
	adds r0, r0, r7	@ 0008db8a c019
.org 0x8db8c
	adds r1, r6, #0	@ 0008db8c 311c
.org 0x8db8e
	bl 0x8988	@ 0008db8e 7af7fbfe
.org 0x8db92
	subs r0, r0, r7	@ 0008db92 c01b
