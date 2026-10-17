@ FUN_0808fbd8  entry 0x0808fbd8  size 60
.thumb
.org 0x8fbd8
FUN_0808fbd8:
	push {r4, r5, r6, r7, lr}	@ 0008fbd8 f0b5
.org 0x8fbda
	sub sp, #8	@ 0008fbda 82b0
.org 0x8fbdc
	ldrb r1, [r0, #10]	@ 0008fbdc 817a
.org 0x8fbde
	lsrs r1, r1, #4	@ 0008fbde 0909
.org 0x8fbe0
	movs r2, #1	@ 0008fbe0 0122
.org 0x8fbe2
	ands r1, r2	@ 0008fbe2 1140
.org 0x8fbe4
	ldr r2, [r0, #84]	@ 0008fbe4 426d
.org 0x8fbe6
	str r2, [sp, #0]	@ 0008fbe6 0092
.org 0x8fbe8
	ldr r0, [r0, #88]	@ 0008fbe8 806d
.org 0x8fbea
	str r0, [sp, #4]	@ 0008fbea 0190
.org 0x8fbec
	lsls r0, r1, #4	@ 0008fbec 0801
.org 0x8fbee
	orrs r1, r0	@ 0008fbee 0143
.org 0x8fbf0
	lsls r6, r1, #24	@ 0008fbf0 0e06
.org 0x8fbf2
	movs r5, #0	@ 0008fbf2 0025
.org 0x8fbf4
	ldr r7, [pc, #28]	@ 0008fbf4 074f
.org 0x8fbf6
	movs r4, #2	@ 0008fbf6 0224
.org 0x8fbf8
	adds r1, r5, r7	@ 0008fbf8 e919
.org 0x8fbfa
	mov r0, sp	@ 0008fbfa 6846
.org 0x8fbfc
	movs r2, #0	@ 0008fbfc 0022
.org 0x8fbfe
	lsrs r3, r6, #24	@ 0008fbfe 330e
.org 0x8fc00
	bl 0xd4c8c	@ 0008fc00 45f044f8
.org 0x8fc04
	adds r5, #28	@ 0008fc04 1c35
.org 0x8fc06
	subs r4, #1	@ 0008fc06 013c
.org 0x8fc08
	cmp r4, #0	@ 0008fc08 002c
.org 0x8fc0a
	bge.n 0x8fbf8	@ 0008fc0a f5da
.org 0x8fc0c
	add sp, #8	@ 0008fc0c 02b0
.org 0x8fc0e
	pop {r4, r5, r6, r7}	@ 0008fc0e f0bc
.org 0x8fc10
	pop {r0}	@ 0008fc10 01bc
.org 0x8fc12
	bx r0	@ 0008fc12 0047
