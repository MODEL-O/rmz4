@ FUN_0808ce0c  entry 0x0808ce0c  size 60
.thumb
.org 0x8ce0c
FUN_0808ce0c:
	push {r4, r5, r6, r7, lr}	@ 0008ce0c f0b5
.org 0x8ce0e
	sub sp, #8	@ 0008ce0e 82b0
.org 0x8ce10
	ldrb r1, [r0, #10]	@ 0008ce10 817a
.org 0x8ce12
	lsrs r1, r1, #4	@ 0008ce12 0909
.org 0x8ce14
	movs r2, #1	@ 0008ce14 0122
.org 0x8ce16
	ands r1, r2	@ 0008ce16 1140
.org 0x8ce18
	ldr r2, [r0, #84]	@ 0008ce18 426d
.org 0x8ce1a
	str r2, [sp, #0]	@ 0008ce1a 0092
.org 0x8ce1c
	ldr r0, [r0, #88]	@ 0008ce1c 806d
.org 0x8ce1e
	str r0, [sp, #4]	@ 0008ce1e 0190
.org 0x8ce20
	lsls r0, r1, #4	@ 0008ce20 0801
.org 0x8ce22
	orrs r1, r0	@ 0008ce22 0143
.org 0x8ce24
	lsls r6, r1, #24	@ 0008ce24 0e06
.org 0x8ce26
	movs r5, #0	@ 0008ce26 0025
.org 0x8ce28
	ldr r7, [pc, #28]	@ 0008ce28 074f
.org 0x8ce2a
	movs r4, #2	@ 0008ce2a 0224
.org 0x8ce2c
	adds r1, r5, r7	@ 0008ce2c e919
.org 0x8ce2e
	mov r0, sp	@ 0008ce2e 6846
.org 0x8ce30
	movs r2, #0	@ 0008ce30 0022
.org 0x8ce32
	lsrs r3, r6, #24	@ 0008ce32 330e
.org 0x8ce34
	bl 0xd4c8c	@ 0008ce34 47f02aff
.org 0x8ce38
	adds r5, #28	@ 0008ce38 1c35
.org 0x8ce3a
	subs r4, #1	@ 0008ce3a 013c
.org 0x8ce3c
	cmp r4, #0	@ 0008ce3c 002c
.org 0x8ce3e
	bge.n 0x8ce2c	@ 0008ce3e f5da
.org 0x8ce40
	add sp, #8	@ 0008ce40 02b0
.org 0x8ce42
	pop {r4, r5, r6, r7}	@ 0008ce42 f0bc
.org 0x8ce44
	pop {r0}	@ 0008ce44 01bc
.org 0x8ce46
	bx r0	@ 0008ce46 0047
