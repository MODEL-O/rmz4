@ FUN_0808bdac  entry 0x0808bdac  size 60
.thumb
.org 0x8bdac
FUN_0808bdac:
	push {r4, r5, r6, r7, lr}	@ 0008bdac f0b5
.org 0x8bdae
	sub sp, #8	@ 0008bdae 82b0
.org 0x8bdb0
	ldrb r1, [r0, #10]	@ 0008bdb0 817a
.org 0x8bdb2
	lsrs r1, r1, #4	@ 0008bdb2 0909
.org 0x8bdb4
	movs r2, #1	@ 0008bdb4 0122
.org 0x8bdb6
	ands r1, r2	@ 0008bdb6 1140
.org 0x8bdb8
	ldr r2, [r0, #84]	@ 0008bdb8 426d
.org 0x8bdba
	str r2, [sp, #0]	@ 0008bdba 0092
.org 0x8bdbc
	ldr r0, [r0, #88]	@ 0008bdbc 806d
.org 0x8bdbe
	str r0, [sp, #4]	@ 0008bdbe 0190
.org 0x8bdc0
	lsls r0, r1, #4	@ 0008bdc0 0801
.org 0x8bdc2
	orrs r1, r0	@ 0008bdc2 0143
.org 0x8bdc4
	lsls r6, r1, #24	@ 0008bdc4 0e06
.org 0x8bdc6
	movs r5, #0	@ 0008bdc6 0025
.org 0x8bdc8
	ldr r7, [pc, #28]	@ 0008bdc8 074f
.org 0x8bdca
	movs r4, #1	@ 0008bdca 0124
.org 0x8bdcc
	adds r1, r5, r7	@ 0008bdcc e919
.org 0x8bdce
	mov r0, sp	@ 0008bdce 6846
.org 0x8bdd0
	movs r2, #0	@ 0008bdd0 0022
.org 0x8bdd2
	lsrs r3, r6, #24	@ 0008bdd2 330e
.org 0x8bdd4
	bl 0xd4c8c	@ 0008bdd4 48f05aff
.org 0x8bdd8
	adds r5, #28	@ 0008bdd8 1c35
.org 0x8bdda
	subs r4, #1	@ 0008bdda 013c
.org 0x8bddc
	cmp r4, #0	@ 0008bddc 002c
.org 0x8bdde
	bge.n 0x8bdcc	@ 0008bdde f5da
.org 0x8bde0
	add sp, #8	@ 0008bde0 02b0
.org 0x8bde2
	pop {r4, r5, r6, r7}	@ 0008bde2 f0bc
.org 0x8bde4
	pop {r0}	@ 0008bde4 01bc
.org 0x8bde6
	bx r0	@ 0008bde6 0047
