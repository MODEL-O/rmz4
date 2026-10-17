@ FUN_0808cdcc  entry 0x0808cdcc  size 60
.thumb
.org 0x8cdcc
FUN_0808cdcc:
	push {r4, r5, r6, r7, lr}	@ 0008cdcc f0b5
.org 0x8cdce
	sub sp, #8	@ 0008cdce 82b0
.org 0x8cdd0
	ldrb r1, [r0, #10]	@ 0008cdd0 817a
.org 0x8cdd2
	lsrs r1, r1, #4	@ 0008cdd2 0909
.org 0x8cdd4
	movs r2, #1	@ 0008cdd4 0122
.org 0x8cdd6
	ands r1, r2	@ 0008cdd6 1140
.org 0x8cdd8
	ldr r2, [r0, #84]	@ 0008cdd8 426d
.org 0x8cdda
	str r2, [sp, #0]	@ 0008cdda 0092
.org 0x8cddc
	ldr r0, [r0, #88]	@ 0008cddc 806d
.org 0x8cdde
	str r0, [sp, #4]	@ 0008cdde 0190
.org 0x8cde0
	lsls r0, r1, #4	@ 0008cde0 0801
.org 0x8cde2
	orrs r1, r0	@ 0008cde2 0143
.org 0x8cde4
	lsls r6, r1, #24	@ 0008cde4 0e06
.org 0x8cde6
	movs r5, #0	@ 0008cde6 0025
.org 0x8cde8
	ldr r7, [pc, #28]	@ 0008cde8 074f
.org 0x8cdea
	movs r4, #1	@ 0008cdea 0124
.org 0x8cdec
	adds r1, r5, r7	@ 0008cdec e919
.org 0x8cdee
	mov r0, sp	@ 0008cdee 6846
.org 0x8cdf0
	movs r2, #0	@ 0008cdf0 0022
.org 0x8cdf2
	lsrs r3, r6, #24	@ 0008cdf2 330e
.org 0x8cdf4
	bl 0xd4c8c	@ 0008cdf4 47f04aff
.org 0x8cdf8
	adds r5, #28	@ 0008cdf8 1c35
.org 0x8cdfa
	subs r4, #1	@ 0008cdfa 013c
.org 0x8cdfc
	cmp r4, #0	@ 0008cdfc 002c
.org 0x8cdfe
	bge.n 0x8cdec	@ 0008cdfe f5da
.org 0x8ce00
	add sp, #8	@ 0008ce00 02b0
.org 0x8ce02
	pop {r4, r5, r6, r7}	@ 0008ce02 f0bc
.org 0x8ce04
	pop {r0}	@ 0008ce04 01bc
.org 0x8ce06
	bx r0	@ 0008ce06 0047
