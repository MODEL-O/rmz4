@ FUN_08027be4  entry 0x08027be4  size 28
.thumb
.org 0x27be4
FUN_08027be4:
	push {lr}	@ 00027be4 00b5
.org 0x27be6
	movs r2, #170	@ 00027be6 aa22
.org 0x27be8
	lsls r2, r2, #1	@ 00027be8 5200
.org 0x27bea
	adds r1, r0, r2	@ 00027bea 8118
.org 0x27bec
	ldr r0, [r1, #0]	@ 00027bec 0868
.org 0x27bee
	cmp r0, #0	@ 00027bee 0028
.org 0x27bf0
	beq.n 0x27bfc	@ 00027bf0 04d0
.org 0x27bf2
	ldrb r0, [r0, #12]	@ 00027bf2 007b
.org 0x27bf4
	cmp r0, #1	@ 00027bf4 0128
.org 0x27bf6
	bls.n 0x27bfc	@ 00027bf6 01d9
.org 0x27bf8
	movs r0, #0	@ 00027bf8 0020
.org 0x27bfa
	str r0, [r1, #0]	@ 00027bfa 0860
.org 0x27bfc
	pop {r0}	@ 00027bfc 01bc
.org 0x27bfe
	bx r0	@ 00027bfe 0047
