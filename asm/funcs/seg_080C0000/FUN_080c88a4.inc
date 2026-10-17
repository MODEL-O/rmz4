@ FUN_080c88a4  entry 0x080c88a4  size 64
.thumb
.org 0xc88a4
FUN_080c88a4:
	push {lr}	@ 000c88a4 00b5
.org 0xc88a6
	adds r2, r0, #0	@ 000c88a6 021c
.org 0xc88a8
	adds r0, #140	@ 000c88a8 8c30
.org 0xc88aa
	ldr r0, [r0, #0]	@ 000c88aa 0068
.org 0xc88ac
	movs r1, #128	@ 000c88ac 8021
.org 0xc88ae
	lsls r1, r1, #2	@ 000c88ae 8900
.org 0xc88b0
	ands r0, r1	@ 000c88b0 0840
.org 0xc88b2
	cmp r0, #0	@ 000c88b2 0028
.org 0xc88b4
	beq.n 0xc88d4	@ 000c88b4 0ed0
.org 0xc88b6
	ldr r1, [pc, #24]	@ 000c88b6 0649
.org 0xc88b8
	ldrb r0, [r2, #9]	@ 000c88b8 507a
.org 0xc88ba
	lsls r0, r0, #2	@ 000c88ba 8000
.org 0xc88bc
	adds r0, r0, r1	@ 000c88bc 4018
.org 0xc88be
	movs r1, #2	@ 000c88be 0221
.org 0xc88c0
	str r1, [r2, #12]	@ 000c88c0 d160
.org 0xc88c2
	ldr r0, [r0, #0]	@ 000c88c2 0068
.org 0xc88c4
	ldr r0, [r0, #8]	@ 000c88c4 8068
.org 0xc88c6
	str r0, [r2, #20]	@ 000c88c6 5061
.org 0xc88c8
	adds r0, r2, #0	@ 000c88c8 101c
.org 0xc88ca
	bl 0xc88ec	@ 000c88ca 00f00ff8
.org 0xc88ce
	b.n 0xc88e4	@ 000c88ce 09e0
.org 0xc88d0
	.byte 0xf4,0x49,0x86,0x08	@ 000c88d0 data
.org 0xc88d4
	ldr r0, [pc, #16]	@ 000c88d4 0448
.org 0xc88d6
	ldrb r1, [r2, #16]	@ 000c88d6 117c
.org 0xc88d8
	lsls r1, r1, #2	@ 000c88d8 8900
.org 0xc88da
	adds r1, r1, r0	@ 000c88da 0918
.org 0xc88dc
	ldr r1, [r1, #0]	@ 000c88dc 0968
.org 0xc88de
	adds r0, r2, #0	@ 000c88de 101c
.org 0xc88e0
	bl 0x128f80	@ 000c88e0 60f04efb
