@ FUN_080d9eac  entry 0x080d9eac  size 96
.thumb
.org 0xd9eac
FUN_080d9eac:
	push {r4, r5, lr}	@ 000d9eac 30b5
.org 0xd9eae
	sub sp, #8	@ 000d9eae 82b0
.org 0xd9eb0
	ldrb r1, [r0, #10]	@ 000d9eb0 817a
.org 0xd9eb2
	lsrs r5, r1, #4	@ 000d9eb2 0d09
.org 0xd9eb4
	movs r3, #1	@ 000d9eb4 0123
.org 0xd9eb6
	ands r5, r3	@ 000d9eb6 1d40
.org 0xd9eb8
	ldr r1, [r0, #84]	@ 000d9eb8 416d
.org 0xd9eba
	str r1, [sp, #0]	@ 000d9eba 0091
.org 0xd9ebc
	ldr r0, [r0, #88]	@ 000d9ebc 806d
.org 0xd9ebe
	str r0, [sp, #4]	@ 000d9ebe 0190
.org 0xd9ec0
	ldr r2, [pc, #72]	@ 000d9ec0 124a
.org 0xd9ec2
	ldr r1, [r2, #0]	@ 000d9ec2 1168
.org 0xd9ec4
	ldr r0, [pc, #72]	@ 000d9ec4 1248
.org 0xd9ec6
	muls r0, r1	@ 000d9ec6 4843
.org 0xd9ec8
	ldr r1, [pc, #72]	@ 000d9ec8 1249
.org 0xd9eca
	adds r0, r0, r1	@ 000d9eca 4018
.org 0xd9ecc
	lsls r0, r0, #1	@ 000d9ecc 4000
.org 0xd9ece
	lsrs r1, r0, #1	@ 000d9ece 4108
.org 0xd9ed0
	str r1, [r2, #0]	@ 000d9ed0 1160
.org 0xd9ed2
	lsrs r0, r0, #17	@ 000d9ed2 400c
.org 0xd9ed4
	ands r0, r3	@ 000d9ed4 1840
.org 0xd9ed6
	adds r4, r0, #2	@ 000d9ed6 841c
.org 0xd9ed8
	cmp r4, #0	@ 000d9ed8 002c
.org 0xd9eda
	beq.n 0xd9f04	@ 000d9eda 13d0
.org 0xd9edc
	lsls r0, r5, #4	@ 000d9edc 2801
.org 0xd9ede
	orrs r5, r0	@ 000d9ede 0543
.org 0xd9ee0
	lsls r5, r5, #24	@ 000d9ee0 2d06
.org 0xd9ee2
	adds r0, r4, #0	@ 000d9ee2 201c
.org 0xd9ee4
	movs r1, #3	@ 000d9ee4 0321
.org 0xd9ee6
	bl 0x129050	@ 000d9ee6 4ff0b3f8
.org 0xd9eea
	lsls r1, r0, #3	@ 000d9eea c100
.org 0xd9eec
	subs r1, r1, r0	@ 000d9eec 091a
.org 0xd9eee
	lsls r1, r1, #2	@ 000d9eee 8900
.org 0xd9ef0
	ldr r0, [pc, #36]	@ 000d9ef0 0948
.org 0xd9ef2
	adds r1, r1, r0	@ 000d9ef2 0918
.org 0xd9ef4
	mov r0, sp	@ 000d9ef4 6846
.org 0xd9ef6
	movs r2, #0	@ 000d9ef6 0022
.org 0xd9ef8
	lsrs r3, r5, #24	@ 000d9ef8 2b0e
.org 0xd9efa
	bl 0xd4c8c	@ 000d9efa faf7c7fe
.org 0xd9efe
	subs r4, #1	@ 000d9efe 013c
.org 0xd9f00
	cmp r4, #0	@ 000d9f00 002c
.org 0xd9f02
	bne.n 0xd9ee2	@ 000d9f02 eed1
.org 0xd9f04
	add sp, #8	@ 000d9f04 02b0
.org 0xd9f06
	pop {r4, r5}	@ 000d9f06 30bc
.org 0xd9f08
	pop {r0}	@ 000d9f08 01bc
.org 0xd9f0a
	bx r0	@ 000d9f0a 0047
