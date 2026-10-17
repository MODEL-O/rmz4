@ FUN_0803508c  entry 0x0803508c  size 84
.thumb
.org 0x3508c
FUN_0803508c:
	push {lr}	@ 0003508c 00b5
.org 0x3508e
	mov ip, r0	@ 0003508e 8446
.org 0x35090
	ldr r0, [pc, #32]	@ 00035090 0848
.org 0x35092
	add r0, ip	@ 00035092 6044
.org 0x35094
	ldrb r1, [r0, #0]	@ 00035094 0178
.org 0x35096
	cmp r1, #0	@ 00035096 0029
.org 0x35098
	beq.n 0x350bc	@ 00035098 10d0
.org 0x3509a
	ldr r2, [pc, #28]	@ 0003509a 074a
.org 0x3509c
	add r2, ip	@ 0003509c 6244
.org 0x3509e
	movs r1, #0	@ 0003509e 0021
.org 0x350a0
	movs r0, #1	@ 000350a0 0120
.org 0x350a2
	strb r0, [r2, #0]	@ 000350a2 1070
.org 0x350a4
	movs r0, #129	@ 000350a4 8120
.org 0x350a6
	lsls r0, r0, #1	@ 000350a6 4000
.org 0x350a8
	add r0, ip	@ 000350a8 6044
.org 0x350aa
	strb r1, [r0, #0]	@ 000350aa 0170
.org 0x350ac
	mov r0, ip	@ 000350ac 6046
.org 0x350ae
	bl 0x350e8	@ 000350ae 00f01bf8
.org 0x350b2
	b.n 0x350e4	@ 000350b2 17e0
.org 0x350b4
	.byte 0x67,0x01,0x00,0x00	@ 000350b4 data
.org 0x350b8
	.byte 0x01,0x01,0x00,0x00	@ 000350b8 data
.org 0x350bc
	movs r0, #128	@ 000350bc 8020
.org 0x350be
	lsls r0, r0, #1	@ 000350be 4000
.org 0x350c0
	add r0, ip	@ 000350c0 6044
.org 0x350c2
	strb r1, [r0, #0]	@ 000350c2 0170
.org 0x350c4
	movs r1, #128	@ 000350c4 8021
.org 0x350c6
	lsls r1, r1, #2	@ 000350c6 8900
.org 0x350c8
	mov r0, ip	@ 000350c8 6046
.org 0x350ca
	adds r0, #113	@ 000350ca 7130
.org 0x350cc
	movs r2, #0	@ 000350cc 0022
.org 0x350ce
	ldrsb r2, [r0, r2]	@ 000350ce 8256
.org 0x350d0
	lsls r2, r2, #16	@ 000350d0 1204
.org 0x350d2
	lsrs r2, r2, #16	@ 000350d2 120c
.org 0x350d4
	adds r0, #1	@ 000350d4 0130
.org 0x350d6
	movs r3, #0	@ 000350d6 0023
.org 0x350d8
	ldrsb r3, [r0, r3]	@ 000350d8 c356
.org 0x350da
	lsls r3, r3, #16	@ 000350da 1b04
.org 0x350dc
	lsrs r3, r3, #16	@ 000350dc 1b0c
.org 0x350de
	mov r0, ip	@ 000350de 6046
