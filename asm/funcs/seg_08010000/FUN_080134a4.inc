@ FUN_080134a4  entry 0x080134a4  size 52
.thumb
.org 0x134a4
FUN_080134a4:
	push {lr}	@ 000134a4 00b5
.org 0x134a6
	ldr r2, [pc, #36]	@ 000134a6 094a
.org 0x134a8
	ldrh r1, [r2, #20]	@ 000134a8 918a
.org 0x134aa
	movs r0, #1	@ 000134aa 0120
.org 0x134ac
	ands r0, r1	@ 000134ac 0840
.org 0x134ae
	cmp r0, #0	@ 000134ae 0028
.org 0x134b0
	beq.n 0x134d0	@ 000134b0 0ed0
.org 0x134b2
	movs r0, #162	@ 000134b2 a220
.org 0x134b4
	lsls r0, r0, #1	@ 000134b4 4000
.org 0x134b6
	adds r1, r2, r0	@ 000134b6 1118
.org 0x134b8
	movs r0, #240	@ 000134b8 f020
.org 0x134ba
	lsls r0, r0, #8	@ 000134ba 0002
.org 0x134bc
	str r0, [r1, #0]	@ 000134bc 0860
.org 0x134be
	movs r0, #164	@ 000134be a420
.org 0x134c0
	lsls r0, r0, #1	@ 000134c0 4000
.org 0x134c2
	adds r1, r2, r0	@ 000134c2 1118
.org 0x134c4
	movs r0, #240	@ 000134c4 f020
.org 0x134c6
	lsls r0, r0, #14	@ 000134c6 8003
.org 0x134c8
	b.n 0x134d8	@ 000134c8 06e0
.org 0x134ca
	.byte 0x00	@ 000134ca data
.org 0x134cb
	.byte 0x00	@ 000134cb data
.org 0x134cc
	.byte 0x10,0xe9,0x02,0x02	@ 000134cc data
.org 0x134d0
	movs r0, #162	@ 000134d0 a220
.org 0x134d2
	lsls r0, r0, #1	@ 000134d2 4000
.org 0x134d4
	adds r1, r2, r0	@ 000134d4 1118
.org 0x134d6
	ldr r0, [pc, #8]	@ 000134d6 0248
