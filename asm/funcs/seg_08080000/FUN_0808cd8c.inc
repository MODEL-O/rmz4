@ FUN_0808cd8c  entry 0x0808cd8c  size 60
.thumb
.org 0x8cd8c
FUN_0808cd8c:
	push {r4, r5, r6, r7, lr}	@ 0008cd8c f0b5
.org 0x8cd8e
	sub sp, #8	@ 0008cd8e 82b0
.org 0x8cd90
	ldrb r1, [r0, #10]	@ 0008cd90 817a
.org 0x8cd92
	lsrs r1, r1, #4	@ 0008cd92 0909
.org 0x8cd94
	movs r2, #1	@ 0008cd94 0122
.org 0x8cd96
	ands r1, r2	@ 0008cd96 1140
.org 0x8cd98
	ldr r2, [r0, #84]	@ 0008cd98 426d
.org 0x8cd9a
	str r2, [sp, #0]	@ 0008cd9a 0092
.org 0x8cd9c
	ldr r0, [r0, #88]	@ 0008cd9c 806d
.org 0x8cd9e
	str r0, [sp, #4]	@ 0008cd9e 0190
.org 0x8cda0
	lsls r0, r1, #4	@ 0008cda0 0801
.org 0x8cda2
	orrs r1, r0	@ 0008cda2 0143
.org 0x8cda4
	lsls r6, r1, #24	@ 0008cda4 0e06
.org 0x8cda6
	movs r5, #0	@ 0008cda6 0025
.org 0x8cda8
	ldr r7, [pc, #28]	@ 0008cda8 074f
.org 0x8cdaa
	movs r4, #2	@ 0008cdaa 0224
.org 0x8cdac
	adds r1, r5, r7	@ 0008cdac e919
.org 0x8cdae
	mov r0, sp	@ 0008cdae 6846
.org 0x8cdb0
	movs r2, #0	@ 0008cdb0 0022
.org 0x8cdb2
	lsrs r3, r6, #24	@ 0008cdb2 330e
.org 0x8cdb4
	bl 0xd4c8c	@ 0008cdb4 47f06aff
.org 0x8cdb8
	adds r5, #28	@ 0008cdb8 1c35
.org 0x8cdba
	subs r4, #1	@ 0008cdba 013c
.org 0x8cdbc
	cmp r4, #0	@ 0008cdbc 002c
.org 0x8cdbe
	bge.n 0x8cdac	@ 0008cdbe f5da
.org 0x8cdc0
	add sp, #8	@ 0008cdc0 02b0
.org 0x8cdc2
	pop {r4, r5, r6, r7}	@ 0008cdc2 f0bc
.org 0x8cdc4
	pop {r0}	@ 0008cdc4 01bc
.org 0x8cdc6
	bx r0	@ 0008cdc6 0047
