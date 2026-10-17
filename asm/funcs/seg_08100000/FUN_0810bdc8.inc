@ FUN_0810bdc8  entry 0x0810bdc8  size 50
.thumb
.org 0x10bdc8
FUN_0810bdc8:
	push {lr}	@ 0010bdc8 00b5
.org 0x10bdca
	adds r2, r0, #0	@ 0010bdca 021c
.org 0x10bdcc
	ldr r0, [r2, #40]	@ 0010bdcc 906a
.org 0x10bdce
	ldr r1, [pc, #32]	@ 0010bdce 0849
.org 0x10bdd0
	adds r0, r0, r1	@ 0010bdd0 4018
.org 0x10bdd2
	ldrb r3, [r0, #5]	@ 0010bdd2 4379
.org 0x10bdd4
	cmp r3, #2	@ 0010bdd4 022b
.org 0x10bdd6
	bne.n 0x10bdf8	@ 0010bdd6 0fd1
.org 0x10bdd8
	ldr r1, [pc, #24]	@ 0010bdd8 0649
.org 0x10bdda
	ldrb r0, [r2, #9]	@ 0010bdda 507a
.org 0x10bddc
	lsls r0, r0, #2	@ 0010bddc 8000
.org 0x10bdde
	adds r0, r0, r1	@ 0010bdde 4018
.org 0x10bde0
	str r3, [r2, #12]	@ 0010bde0 d360
.org 0x10bde2
	ldr r0, [r0, #0]	@ 0010bde2 0068
.org 0x10bde4
	ldr r0, [r0, #8]	@ 0010bde4 8068
.org 0x10bde6
	str r0, [r2, #20]	@ 0010bde6 5061
.org 0x10bde8
	adds r0, r2, #0	@ 0010bde8 101c
.org 0x10bdea
	bl 0x10bd20	@ 0010bdea fff799ff
.org 0x10bdee
	b.n 0x10bdfe	@ 0010bdee 06e0
.org 0x10bdf0
	.byte 0xcc,0x0d,0x00,0x00	@ 0010bdf0 data
.org 0x10bdf4
	.byte 0xf8,0xca,0x86,0x08	@ 0010bdf4 data
.org 0x10bdf8
	adds r0, r2, #0	@ 0010bdf8 101c
