@ FUN_080fed54  entry 0x080fed54  size 38
.thumb
.org 0xfed54
FUN_080fed54:
	push {lr}	@ 000fed54 00b5
.org 0xfed56
	ldr r1, [r0, #12]	@ 000fed56 c168
.org 0xfed58
	ldr r2, [r1, #44]	@ 000fed58 ca6a
.org 0xfed5a
	ldr r0, [r0, #20]	@ 000fed5a 4069
.org 0xfed5c
	movs r1, #4	@ 000fed5c 0421
.org 0xfed5e
	ands r0, r1	@ 000fed5e 0840
.org 0xfed60
	cmp r0, #0	@ 000fed60 0028
.org 0xfed62
	beq.n 0xfed76	@ 000fed62 08d0
.org 0xfed64
	movs r0, #8	@ 000fed64 0820
.org 0xfed66
	ldrsb r0, [r2, r0]	@ 000fed66 1056
.org 0xfed68
	cmp r0, #0	@ 000fed68 0028
.org 0xfed6a
	bne.n 0xfed76	@ 000fed6a 04d1
.org 0xfed6c
	movs r0, #222	@ 000fed6c de20
.org 0xfed6e
	lsls r0, r0, #1	@ 000fed6e 4000
.org 0xfed70
	adds r1, r2, r0	@ 000fed70 1118
.org 0xfed72
	ldr r0, [pc, #8]	@ 000fed72 0248
.org 0xfed74
	str r0, [r1, #0]	@ 000fed74 0860
.org 0xfed76
	pop {r0}	@ 000fed76 01bc
.org 0xfed78
	bx r0	@ 000fed78 0047
