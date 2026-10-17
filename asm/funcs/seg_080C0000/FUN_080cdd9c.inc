@ FUN_080cdd9c  entry 0x080cdd9c  size 82
.thumb
.org 0xcdd9c
FUN_080cdd9c:
	push {r4, r5, r6, r7, lr}	@ 000cdd9c f0b5
.org 0xcdd9e
	adds r6, r0, #0	@ 000cdd9e 061c
.org 0xcdda0
	adds r7, r1, #0	@ 000cdda0 0f1c
.org 0xcdda2
	lsls r2, r2, #24	@ 000cdda2 1206
.org 0xcdda4
	lsrs r5, r2, #24	@ 000cdda4 150e
.org 0xcdda6
	lsls r3, r3, #24	@ 000cdda6 1b06
.org 0xcdda8
	lsrs r4, r3, #24	@ 000cdda8 1c0e
.org 0xcddaa
	ldr r0, [pc, #68]	@ 000cddaa 1148
.org 0xcddac
	ldr r0, [r0, #0]	@ 000cddac 0068
.org 0xcddae
	bl 0x5500	@ 000cddae 37f7a7fb
.org 0xcddb2
	adds r3, r0, #0	@ 000cddb2 031c
.org 0xcddb4
	cmp r3, #0	@ 000cddb4 002b
.org 0xcddb6
	beq.n 0xcdde8	@ 000cddb6 17d0
.org 0xcddb8
	adds r1, r3, #0	@ 000cddb8 191c
.org 0xcddba
	adds r1, #37	@ 000cddba 2531
.org 0xcddbc
	movs r2, #0	@ 000cddbc 0022
.org 0xcddbe
	movs r0, #8	@ 000cddbe 0820
.org 0xcddc0
	strb r0, [r1, #0]	@ 000cddc0 0870
.org 0xcddc2
	ldr r0, [pc, #48]	@ 000cddc2 0c48
.org 0xcddc4
	movs r1, #52	@ 000cddc4 3421
.org 0xcddc6
	strb r1, [r3, #9]	@ 000cddc6 5972
.org 0xcddc8
	adds r0, #208	@ 000cddc8 d030
.org 0xcddca
	ldr r0, [r0, #0]	@ 000cddca 0068
.org 0xcddcc
	ldr r0, [r0, #0]	@ 000cddcc 0068
.org 0xcddce
	str r0, [r3, #20]	@ 000cddce 5861
.org 0xcddd0
	movs r0, #0	@ 000cddd0 0020
.org 0xcddd2
	strh r2, [r3, #32]	@ 000cddd2 1a84
.org 0xcddd4
	adds r1, r3, #0	@ 000cddd4 191c
.org 0xcddd6
	adds r1, #34	@ 000cddd6 2231
.org 0xcddd8
	strb r0, [r1, #0]	@ 000cddd8 0870
.org 0xcddda
	str r6, [r3, #40]	@ 000cddda 9e62
.org 0xcdddc
	ldr r0, [r7, #0]	@ 000cdddc 3868
.org 0xcddde
	ldr r1, [r7, #4]	@ 000cddde 7968
.org 0xcdde0
	str r0, [r3, #84]	@ 000cdde0 5865
.org 0xcdde2
	str r1, [r3, #88]	@ 000cdde2 9965
.org 0xcdde4
	strb r5, [r3, #16]	@ 000cdde4 1d74
.org 0xcdde6
	strb r4, [r3, #17]	@ 000cdde6 5c74
.org 0xcdde8
	pop {r4, r5, r6, r7}	@ 000cdde8 f0bc
.org 0xcddea
	pop {r0}	@ 000cddea 01bc
.org 0xcddec
	bx r0	@ 000cddec 0047
