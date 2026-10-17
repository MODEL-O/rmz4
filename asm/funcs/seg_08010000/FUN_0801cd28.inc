@ FUN_0801cd28  entry 0x0801cd28  size 138
.thumb
.org 0x1cd28
FUN_0801cd28:
	push {r4, r5, r6, lr}	@ 0001cd28 70b5
.org 0x1cd2a
	adds r6, r0, #0	@ 0001cd2a 061c
.org 0x1cd2c
	adds r4, r6, #0	@ 0001cd2c 341c
.org 0x1cd2e
	adds r4, #52	@ 0001cd2e 3434
.org 0x1cd30
	adds r0, #108	@ 0001cd30 6c30
.org 0x1cd32
	ldr r1, [pc, #128]	@ 0001cd32 2049
.org 0x1cd34
	ldr r1, [r1, #0]	@ 0001cd34 0968
.org 0x1cd36
	bl 0x34a4	@ 0001cd36 e6f7b5fb
.org 0x1cd3a
	ldr r0, [pc, #124]	@ 0001cd3a 1f48
.org 0x1cd3c
	ldr r1, [r0, #0]	@ 0001cd3c 0168
.org 0x1cd3e
	adds r2, r6, #0	@ 0001cd3e 321c
.org 0x1cd40
	adds r2, #84	@ 0001cd40 5432
.org 0x1cd42
	adds r0, r4, #0	@ 0001cd42 201c
.org 0x1cd44
	bl 0x2d24	@ 0001cd44 e5f7eeff
.org 0x1cd48
	ldrb r0, [r6, #10]	@ 0001cd48 b07a
.org 0x1cd4a
	lsrs r0, r0, #4	@ 0001cd4a 0009
.org 0x1cd4c
	movs r3, #1	@ 0001cd4c 0123
.org 0x1cd4e
	ands r0, r3	@ 0001cd4e 1840
.org 0x1cd50
	movs r5, #0	@ 0001cd50 0025
.org 0x1cd52
	strb r0, [r4, #24]	@ 0001cd52 2076
.org 0x1cd54
	ldrb r0, [r6, #10]	@ 0001cd54 b07a
.org 0x1cd56
	lsrs r0, r0, #4	@ 0001cd56 0009
.org 0x1cd58
	ands r0, r3	@ 0001cd58 1840
.org 0x1cd5a
	lsls r0, r0, #4	@ 0001cd5a 0001
.org 0x1cd5c
	ldrb r2, [r4, #22]	@ 0001cd5c a27d
.org 0x1cd5e
	movs r1, #17	@ 0001cd5e 1121
.org 0x1cd60
	negs r1, r1	@ 0001cd60 4942
.org 0x1cd62
	ands r1, r2	@ 0001cd62 1140
.org 0x1cd64
	orrs r1, r0	@ 0001cd64 0143
.org 0x1cd66
	strb r1, [r4, #22]	@ 0001cd66 a175
.org 0x1cd68
	ldrb r0, [r6, #10]	@ 0001cd68 b07a
.org 0x1cd6a
	lsrs r0, r0, #5	@ 0001cd6a 4009
.org 0x1cd6c
	ands r0, r3	@ 0001cd6c 1840
.org 0x1cd6e
	strb r0, [r4, #25]	@ 0001cd6e 6076
.org 0x1cd70
	ldrb r0, [r6, #10]	@ 0001cd70 b07a
.org 0x1cd72
	lsrs r0, r0, #5	@ 0001cd72 4009
.org 0x1cd74
	ands r0, r3	@ 0001cd74 1840
.org 0x1cd76
	lsls r0, r0, #5	@ 0001cd76 4001
.org 0x1cd78
	movs r2, #33	@ 0001cd78 2122
.org 0x1cd7a
	negs r2, r2	@ 0001cd7a 5242
.org 0x1cd7c
	ands r1, r2	@ 0001cd7c 1140
.org 0x1cd7e
	orrs r1, r0	@ 0001cd7e 0143
.org 0x1cd80
	strb r1, [r4, #22]	@ 0001cd80 a175
.org 0x1cd82
	movs r0, #255	@ 0001cd82 ff20
.org 0x1cd84
	strb r0, [r6, #30]	@ 0001cd84 b077
.org 0x1cd86
	adds r0, r6, #0	@ 0001cd86 301c
.org 0x1cd88
	adds r0, #36	@ 0001cd88 2430
.org 0x1cd8a
	strb r5, [r0, #0]	@ 0001cd8a 0570
.org 0x1cd8c
	ldrb r0, [r6, #10]	@ 0001cd8c b07a
.org 0x1cd8e
	movs r1, #8	@ 0001cd8e 0821
.org 0x1cd90
	orrs r0, r1	@ 0001cd90 0843
.org 0x1cd92
	movs r1, #64	@ 0001cd92 4021
.org 0x1cd94
	orrs r0, r1	@ 0001cd94 0843
.org 0x1cd96
	strb r0, [r6, #10]	@ 0001cd96 b072
.org 0x1cd98
	ldrb r1, [r6, #11]	@ 0001cd98 f17a
.org 0x1cd9a
	movs r0, #254	@ 0001cd9a fe20
.org 0x1cd9c
	ands r0, r1	@ 0001cd9c 0840
.org 0x1cd9e
	movs r1, #253	@ 0001cd9e fd21
.org 0x1cda0
	ands r0, r1	@ 0001cda0 0840
.org 0x1cda2
	movs r1, #251	@ 0001cda2 fb21
.org 0x1cda4
	ands r0, r1	@ 0001cda4 0840
.org 0x1cda6
	movs r1, #223	@ 0001cda6 df21
.org 0x1cda8
	ands r0, r1	@ 0001cda8 0840
.org 0x1cdaa
	strb r0, [r6, #11]	@ 0001cdaa f072
.org 0x1cdac
	pop {r4, r5, r6}	@ 0001cdac 70bc
.org 0x1cdae
	pop {r0}	@ 0001cdae 01bc
.org 0x1cdb0
	bx r0	@ 0001cdb0 0047
