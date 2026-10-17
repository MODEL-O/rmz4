@ FUN_0808cbe8  entry 0x0808cbe8  size 80
.thumb
.org 0x8cbe8
FUN_0808cbe8:
	push {r4, lr}	@ 0008cbe8 10b5
.org 0x8cbea
	sub sp, #8	@ 0008cbea 82b0
.org 0x8cbec
	adds r4, r0, #0	@ 0008cbec 041c
.org 0x8cbee
	movs r0, #42	@ 0008cbee 2a20
.org 0x8cbf0
	bl 0x2b10	@ 0008cbf0 75f78eff
.org 0x8cbf4
	ldrb r1, [r4, #10]	@ 0008cbf4 a17a
.org 0x8cbf6
	movs r0, #254	@ 0008cbf6 fe20
.org 0x8cbf8
	ands r0, r1	@ 0008cbf8 0840
.org 0x8cbfa
	strb r0, [r4, #10]	@ 0008cbfa a072
.org 0x8cbfc
	ldr r0, [r4, #84]	@ 0008cbfc 606d
.org 0x8cbfe
	str r0, [sp, #0]	@ 0008cbfe 0090
.org 0x8cc00
	ldr r0, [r4, #88]	@ 0008cc00 a06d
.org 0x8cc02
	str r0, [sp, #4]	@ 0008cc02 0190
.org 0x8cc04
	movs r0, #1	@ 0008cc04 0120
.org 0x8cc06
	mov r1, sp	@ 0008cc06 6946
.org 0x8cc08
	bl 0xd0c88	@ 0008cc08 44f03ef8
.org 0x8cc0c
	adds r0, r4, #0	@ 0008cc0c 201c
.org 0x8cc0e
	bl 0x8ce0c	@ 0008cc0e 00f0fdf8
.org 0x8cc12
	adds r2, r4, #0	@ 0008cc12 221c
.org 0x8cc14
	adds r2, #84	@ 0008cc14 5432
.org 0x8cc16
	movs r0, #3	@ 0008cc16 0320
.org 0x8cc18
	movs r1, #0	@ 0008cc18 0021
.org 0x8cc1a
	bl 0x2ab88	@ 0008cc1a 9df7b5ff
.org 0x8cc1e
	ldr r1, [pc, #24]	@ 0008cc1e 0649
.org 0x8cc20
	ldrb r0, [r4, #9]	@ 0008cc20 607a
.org 0x8cc22
	lsls r0, r0, #2	@ 0008cc22 8000
.org 0x8cc24
	adds r0, r0, r1	@ 0008cc24 4018
.org 0x8cc26
	movs r1, #4	@ 0008cc26 0421
.org 0x8cc28
	str r1, [r4, #12]	@ 0008cc28 e160
.org 0x8cc2a
	ldr r0, [r0, #0]	@ 0008cc2a 0068
.org 0x8cc2c
	ldr r0, [r0, #16]	@ 0008cc2c 0069
.org 0x8cc2e
	str r0, [r4, #20]	@ 0008cc2e 6061
.org 0x8cc30
	add sp, #8	@ 0008cc30 02b0
.org 0x8cc32
	pop {r4}	@ 0008cc32 10bc
.org 0x8cc34
	pop {r0}	@ 0008cc34 01bc
.org 0x8cc36
	bx r0	@ 0008cc36 0047
