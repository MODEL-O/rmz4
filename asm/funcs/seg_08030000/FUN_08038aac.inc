@ FUN_08038aac  entry 0x08038aac  size 42
.thumb
.org 0x38aac
FUN_08038aac:
	push {lr}	@ 00038aac 00b5
.org 0x38aae
	adds r1, r0, #0	@ 00038aae 011c
.org 0x38ab0
	adds r0, #180	@ 00038ab0 b430
.org 0x38ab2
	ldrb r0, [r0, #19]	@ 00038ab2 c07c
.org 0x38ab4
	cmp r0, #2	@ 00038ab4 0228
.org 0x38ab6
	bne.n 0x38ac6	@ 00038ab6 06d1
.org 0x38ab8
	adds r0, r1, #0	@ 00038ab8 081c
.org 0x38aba
	adds r0, #242	@ 00038aba f230
.org 0x38abc
	ldrb r0, [r0, #0]	@ 00038abc 0078
.org 0x38abe
	cmp r0, #6	@ 00038abe 0628
.org 0x38ac0
	bls.n 0x38ad0	@ 00038ac0 06d9
.org 0x38ac2
	movs r0, #1	@ 00038ac2 0120
.org 0x38ac4
	b.n 0x38ad2	@ 00038ac4 05e0
.org 0x38ac6
	adds r0, r1, #0	@ 00038ac6 081c
.org 0x38ac8
	adds r0, #242	@ 00038ac8 f230
.org 0x38aca
	ldrb r0, [r0, #0]	@ 00038aca 0078
.org 0x38acc
	cmp r0, #7	@ 00038acc 0728
.org 0x38ace
	beq.n 0x38ac2	@ 00038ace f8d0
.org 0x38ad0
	movs r0, #0	@ 00038ad0 0020
.org 0x38ad2
	pop {r1}	@ 00038ad2 02bc
.org 0x38ad4
	bx r1	@ 00038ad4 0847
