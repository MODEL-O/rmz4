@ FUN_0808cfc4  entry 0x0808cfc4  size 140
.thumb
.org 0x8cfc4
FUN_0808cfc4:
	push {r4, lr}	@ 0008cfc4 10b5
.org 0x8cfc6
	adds r4, r0, #0	@ 0008cfc6 041c
.org 0x8cfc8
	adds r2, r4, #0	@ 0008cfc8 221c
.org 0x8cfca
	adds r2, #140	@ 0008cfca 8c32
.org 0x8cfcc
	ldr r0, [r2, #0]	@ 0008cfcc 1068
.org 0x8cfce
	movs r1, #128	@ 0008cfce 8021
.org 0x8cfd0
	lsls r1, r1, #2	@ 0008cfd0 8900
.org 0x8cfd2
	ands r0, r1	@ 0008cfd2 0840
.org 0x8cfd4
	cmp r0, #0	@ 0008cfd4 0028
.org 0x8cfd6
	beq.n 0x8d012	@ 0008cfd6 1cd0
.org 0x8cfd8
	ldr r1, [pc, #40]	@ 0008cfd8 0a49
.org 0x8cfda
	ldrb r0, [r4, #9]	@ 0008cfda 607a
.org 0x8cfdc
	lsls r0, r0, #2	@ 0008cfdc 8000
.org 0x8cfde
	adds r0, r0, r1	@ 0008cfde 4018
.org 0x8cfe0
	movs r1, #2	@ 0008cfe0 0221
.org 0x8cfe2
	str r1, [r4, #12]	@ 0008cfe2 e160
.org 0x8cfe4
	ldr r0, [r0, #0]	@ 0008cfe4 0068
.org 0x8cfe6
	ldr r0, [r0, #8]	@ 0008cfe6 8068
.org 0x8cfe8
	str r0, [r4, #20]	@ 0008cfe8 6061
.org 0x8cfea
	ldrb r0, [r4, #19]	@ 0008cfea e07c
.org 0x8cfec
	cmp r0, #0	@ 0008cfec 0028
.org 0x8cfee
	bne.n 0x8d008	@ 0008cfee 0bd1
.org 0x8cff0
	ldr r1, [r2, #0]	@ 0008cff0 1168
.org 0x8cff2
	movs r0, #128	@ 0008cff2 8020
.org 0x8cff4
	lsls r0, r0, #9	@ 0008cff4 4002
.org 0x8cff6
	ands r1, r0	@ 0008cff6 0140
.org 0x8cff8
	cmp r1, #0	@ 0008cff8 0029
.org 0x8cffa
	beq.n 0x8d008	@ 0008cffa 05d0
.org 0x8cffc
	movs r0, #1	@ 0008cffc 0120
.org 0x8cffe
	strb r0, [r4, #13]	@ 0008cffe 6073
.org 0x8d000
	b.n 0x8d00a	@ 0008d000 03e0
.org 0x8d002
	.byte 0x00	@ 0008d002 data
.org 0x8d003
	.byte 0x00	@ 0008d003 data
.org 0x8d004
	.byte 0x40,0xdb,0x85,0x08	@ 0008d004 data
.org 0x8d008
	strb r1, [r4, #13]	@ 0008d008 6173
.org 0x8d00a
	adds r0, r4, #0	@ 0008d00a 201c
.org 0x8d00c
	bl 0x8d060	@ 0008d00c 00f028f8
.org 0x8d010
	b.n 0x8d050	@ 0008d010 1ee0
.org 0x8d012
	adds r0, r4, #0	@ 0008d012 201c
.org 0x8d014
	bl 0x7f90c	@ 0008d014 f2f77afc
.org 0x8d018
	cmp r0, #0	@ 0008d018 0028
.org 0x8d01a
	beq.n 0x8d02a	@ 0008d01a 06d0
.org 0x8d01c
	adds r0, r4, #0	@ 0008d01c 201c
.org 0x8d01e
	adds r0, #188	@ 0008d01e bc30
.org 0x8d020
	ldr r0, [r0, #0]	@ 0008d020 0068
.org 0x8d022
	cmp r0, #0	@ 0008d022 0028
.org 0x8d024
	bne.n 0x8d02a	@ 0008d024 01d1
.org 0x8d026
	strb r0, [r4, #13]	@ 0008d026 6073
.org 0x8d028
	strb r0, [r4, #14]	@ 0008d028 a073
.org 0x8d02a
	ldr r1, [pc, #44]	@ 0008d02a 0b49
.org 0x8d02c
	ldrb r0, [r4, #13]	@ 0008d02c 607b
.org 0x8d02e
	lsls r0, r0, #2	@ 0008d02e 8000
.org 0x8d030
	adds r0, r0, r1	@ 0008d030 4018
.org 0x8d032
	ldr r1, [r0, #0]	@ 0008d032 0168
.org 0x8d034
	adds r0, r4, #0	@ 0008d034 201c
.org 0x8d036
	bl 0x128f80	@ 0008d036 9bf0a3ff
.org 0x8d03a
	adds r0, r4, #0	@ 0008d03a 201c
.org 0x8d03c
	bl 0x8daa0	@ 0008d03c 00f030fd
.org 0x8d040
	ldr r1, [pc, #24]	@ 0008d040 0649
.org 0x8d042
	ldrb r0, [r4, #13]	@ 0008d042 607b
.org 0x8d044
	lsls r0, r0, #2	@ 0008d044 8000
.org 0x8d046
	adds r0, r0, r1	@ 0008d046 4018
.org 0x8d048
	ldr r1, [r0, #0]	@ 0008d048 0168
.org 0x8d04a
	adds r0, r4, #0	@ 0008d04a 201c
.org 0x8d04c
	bl 0x128f80	@ 0008d04c 9bf098ff
