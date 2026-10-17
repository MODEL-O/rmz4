@ FUN_0803aee8  entry 0x0803aee8  size 48
.thumb
.org 0x3aee8
FUN_0803aee8:
	push {lr}	@ 0003aee8 00b5
.org 0x3aeea
	adds r2, r0, #0	@ 0003aeea 021c
.org 0x3aeec
	ldrb r0, [r2, #13]	@ 0003aeec 507b
.org 0x3aeee
	cmp r0, #1	@ 0003aeee 0128
.org 0x3aef0
	beq.n 0x3aefa	@ 0003aef0 03d0
.org 0x3aef2
	cmp r0, #3	@ 0003aef2 0328
.org 0x3aef4
	beq.n 0x3aefa	@ 0003aef4 01d0
.org 0x3aef6
	cmp r0, #5	@ 0003aef6 0528
.org 0x3aef8
	bne.n 0x3af06	@ 0003aef8 05d1
.org 0x3aefa
	ldr r0, [r2, #84]	@ 0003aefa 506d
.org 0x3aefc
	str r0, [r1, #0]	@ 0003aefc 0860
.org 0x3aefe
	ldr r0, [r2, #88]	@ 0003aefe 906d
.org 0x3af00
	movs r2, #128	@ 0003af00 8022
.org 0x3af02
	lsls r2, r2, #5	@ 0003af02 5201
.org 0x3af04
	b.n 0x3af0e	@ 0003af04 03e0
.org 0x3af06
	ldr r0, [r2, #84]	@ 0003af06 506d
.org 0x3af08
	str r0, [r1, #0]	@ 0003af08 0860
.org 0x3af0a
	ldr r0, [r2, #88]	@ 0003af0a 906d
.org 0x3af0c
	ldr r2, [pc, #8]	@ 0003af0c 024a
.org 0x3af0e
	adds r0, r0, r2	@ 0003af0e 8018
.org 0x3af10
	str r0, [r1, #4]	@ 0003af10 4860
.org 0x3af12
	movs r0, #1	@ 0003af12 0120
.org 0x3af14
	pop {r1}	@ 0003af14 02bc
.org 0x3af16
	bx r1	@ 0003af16 0847
