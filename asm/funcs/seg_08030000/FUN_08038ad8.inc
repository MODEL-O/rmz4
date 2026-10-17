@ FUN_08038ad8  entry 0x08038ad8  size 50
.thumb
.org 0x38ad8
FUN_08038ad8:
	push {lr}	@ 00038ad8 00b5
.org 0x38ada
	adds r1, r0, #0	@ 00038ada 011c
.org 0x38adc
	adds r2, r1, #0	@ 00038adc 0a1c
.org 0x38ade
	adds r2, #180	@ 00038ade b432
.org 0x38ae0
	ldrb r0, [r2, #18]	@ 00038ae0 907c
.org 0x38ae2
	cmp r0, #20	@ 00038ae2 1428
.org 0x38ae4
	beq.n 0x38af6	@ 00038ae4 07d0
.org 0x38ae6
	ldrb r0, [r2, #19]	@ 00038ae6 d07c
.org 0x38ae8
	cmp r0, #2	@ 00038ae8 0228
.org 0x38aea
	bne.n 0x38afa	@ 00038aea 06d1
.org 0x38aec
	adds r0, r1, #0	@ 00038aec 081c
.org 0x38aee
	adds r0, #242	@ 00038aee f230
.org 0x38af0
	ldrb r0, [r0, #0]	@ 00038af0 0078
.org 0x38af2
	cmp r0, #0	@ 00038af2 0028
.org 0x38af4
	beq.n 0x38b04	@ 00038af4 06d0
.org 0x38af6
	movs r0, #1	@ 00038af6 0120
.org 0x38af8
	b.n 0x38b06	@ 00038af8 05e0
.org 0x38afa
	adds r0, r1, #0	@ 00038afa 081c
.org 0x38afc
	adds r0, #242	@ 00038afc f230
.org 0x38afe
	ldrb r0, [r0, #0]	@ 00038afe 0078
.org 0x38b00
	cmp r0, #1	@ 00038b00 0128
.org 0x38b02
	beq.n 0x38af6	@ 00038b02 f8d0
.org 0x38b04
	movs r0, #0	@ 00038b04 0020
.org 0x38b06
	pop {r1}	@ 00038b06 02bc
.org 0x38b08
	bx r1	@ 00038b08 0847
