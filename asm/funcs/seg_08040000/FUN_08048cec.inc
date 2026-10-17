@ FUN_08048cec  entry 0x08048cec  size 40
.thumb
.org 0x48cec
FUN_08048cec:
	push {lr}	@ 00048cec 00b5
.org 0x48cee
	bl 0x7c7c	@ 00048cee bef7c5ff
.org 0x48cf2
	lsls r0, r0, #16	@ 00048cf2 0004
.org 0x48cf4
	lsrs r0, r0, #16	@ 00048cf4 000c
.org 0x48cf6
	adds r1, r0, #0	@ 00048cf6 011c
.org 0x48cf8
	movs r0, #15	@ 00048cf8 0f20
.org 0x48cfa
	ands r0, r1	@ 00048cfa 0840
.org 0x48cfc
	cmp r0, #15	@ 00048cfc 0f28
.org 0x48cfe
	beq.n 0x48d0e	@ 00048cfe 06d0
.org 0x48d00
	movs r0, #128	@ 00048d00 8020
.org 0x48d02
	lsls r0, r0, #8	@ 00048d02 0002
.org 0x48d04
	ands r0, r1	@ 00048d04 0840
.org 0x48d06
	cmp r0, #0	@ 00048d06 0028
.org 0x48d08
	bne.n 0x48d0e	@ 00048d08 01d1
.org 0x48d0a
	adds r0, r1, #0	@ 00048d0a 081c
.org 0x48d0c
	b.n 0x48d10	@ 00048d0c 00e0
.org 0x48d0e
	movs r0, #0	@ 00048d0e 0020
.org 0x48d10
	pop {r1}	@ 00048d10 02bc
.org 0x48d12
	bx r1	@ 00048d12 0847
