@ FUN_08127ca0  entry 0x08127ca0  size 140
.thumb
.org 0x127ca0
FUN_08127ca0:
	push {r4, r5, lr}	@ 00127ca0 30b5
.org 0x127ca2
	adds r3, r0, #0	@ 00127ca2 031c
.org 0x127ca4
	ldr r0, [pc, #132]	@ 00127ca4 2148
.org 0x127ca6
	ldr r5, [r0, #0]	@ 00127ca6 0568
.org 0x127ca8
	ldr r1, [r5, #0]	@ 00127ca8 2968
.org 0x127caa
	ldr r0, [pc, #132]	@ 00127caa 2148
.org 0x127cac
	cmp r1, r0	@ 00127cac 8142
.org 0x127cae
	bne.n 0x127d26	@ 00127cae 3ad1
.org 0x127cb0
	adds r0, r1, #1	@ 00127cb0 481c
.org 0x127cb2
	str r0, [r5, #0]	@ 00127cb2 2860
.org 0x127cb4
	movs r4, #255	@ 00127cb4 ff24
.org 0x127cb6
	ands r4, r3	@ 00127cb6 1c40
.org 0x127cb8
	cmp r4, #0	@ 00127cb8 002c
.org 0x127cba
	beq.n 0x127cc2	@ 00127cba 02d0
.org 0x127cbc
	movs r0, #127	@ 00127cbc 7f20
.org 0x127cbe
	ands r4, r0	@ 00127cbe 0440
.org 0x127cc0
	strb r4, [r5, #5]	@ 00127cc0 6c71
.org 0x127cc2
	movs r4, #240	@ 00127cc2 f024
.org 0x127cc4
	lsls r4, r4, #4	@ 00127cc4 2401
.org 0x127cc6
	ands r4, r3	@ 00127cc6 1c40
.org 0x127cc8
	cmp r4, #0	@ 00127cc8 002c
.org 0x127cca
	beq.n 0x127ce2	@ 00127cca 0ad0
.org 0x127ccc
	lsrs r0, r4, #8	@ 00127ccc 200a
.org 0x127cce
	strb r0, [r5, #6]	@ 00127cce a871
.org 0x127cd0
	movs r4, #12	@ 00127cd0 0c24
.org 0x127cd2
	adds r0, r5, #0	@ 00127cd2 281c
.org 0x127cd4
	adds r0, #80	@ 00127cd4 5030
.org 0x127cd6
	movs r1, #0	@ 00127cd6 0021
.org 0x127cd8
	strb r1, [r0, #0]	@ 00127cd8 0170
.org 0x127cda
	subs r4, #1	@ 00127cda 013c
.org 0x127cdc
	adds r0, #64	@ 00127cdc 4030
.org 0x127cde
	cmp r4, #0	@ 00127cde 002c
.org 0x127ce0
	bne.n 0x127cd8	@ 00127ce0 fad1
.org 0x127ce2
	movs r4, #240	@ 00127ce2 f024
.org 0x127ce4
	lsls r4, r4, #8	@ 00127ce4 2402
.org 0x127ce6
	ands r4, r3	@ 00127ce6 1c40
.org 0x127ce8
	cmp r4, #0	@ 00127ce8 002c
.org 0x127cea
	beq.n 0x127cf0	@ 00127cea 01d0
.org 0x127cec
	lsrs r0, r4, #12	@ 00127cec 200b
.org 0x127cee
	strb r0, [r5, #7]	@ 00127cee e871
.org 0x127cf0
	movs r4, #176	@ 00127cf0 b024
.org 0x127cf2
	lsls r4, r4, #16	@ 00127cf2 2404
.org 0x127cf4
	ands r4, r3	@ 00127cf4 1c40
.org 0x127cf6
	cmp r4, #0	@ 00127cf6 002c
.org 0x127cf8
	beq.n 0x127d0e	@ 00127cf8 09d0
.org 0x127cfa
	movs r0, #192	@ 00127cfa c020
.org 0x127cfc
	lsls r0, r0, #14	@ 00127cfc 8003
.org 0x127cfe
	ands r0, r4	@ 00127cfe 2040
.org 0x127d00
	lsrs r4, r0, #14	@ 00127d00 840b
.org 0x127d02
	ldr r2, [pc, #48]	@ 00127d02 0c4a
.org 0x127d04
	ldrb r1, [r2, #0]	@ 00127d04 1178
.org 0x127d06
	movs r0, #63	@ 00127d06 3f20
.org 0x127d08
	ands r0, r1	@ 00127d08 0840
.org 0x127d0a
	orrs r0, r4	@ 00127d0a 2043
.org 0x127d0c
	strb r0, [r2, #0]	@ 00127d0c 1070
.org 0x127d0e
	movs r4, #240	@ 00127d0e f024
.org 0x127d10
	lsls r4, r4, #12	@ 00127d10 2403
.org 0x127d12
	ands r4, r3	@ 00127d12 1c40
.org 0x127d14
	cmp r4, #0	@ 00127d14 002c
.org 0x127d16
	beq.n 0x127d22	@ 00127d16 04d0
.org 0x127d18
	bl 0x127d8c	@ 00127d18 00f038f8
.org 0x127d1c
	adds r0, r4, #0	@ 00127d1c 201c
.org 0x127d1e
	bl 0x127bfc	@ 00127d1e fff76dff
.org 0x127d22
	ldr r0, [pc, #12]	@ 00127d22 0348
.org 0x127d24
	str r0, [r5, #0]	@ 00127d24 2860
.org 0x127d26
	pop {r4, r5}	@ 00127d26 30bc
.org 0x127d28
	pop {r0}	@ 00127d28 01bc
.org 0x127d2a
	bx r0	@ 00127d2a 0047
