@ FUN_08002bcc  entry 0x08002bcc  size 52
.thumb
.org 0x2bcc
FUN_08002bcc:
	push {r4, lr}	@ 00002bcc 10b5
.org 0x2bce
	lsls r0, r0, #16	@ 00002bce 0004
.org 0x2bd0
	lsrs r4, r0, #16	@ 00002bd0 040c
.org 0x2bd2
	adds r0, r4, #0	@ 00002bd2 201c
.org 0x2bd4
	bl 0x2ad0	@ 00002bd4 fff77cff
.org 0x2bd8
	cmp r0, #0	@ 00002bd8 0028
.org 0x2bda
	beq.n 0x2bfa	@ 00002bda 0ed0
.org 0x2bdc
	ldr r2, [pc, #32]	@ 00002bdc 084a
.org 0x2bde
	ldr r1, [pc, #36]	@ 00002bde 0949
.org 0x2be0
	lsls r0, r4, #3	@ 00002be0 e000
.org 0x2be2
	adds r0, r0, r1	@ 00002be2 4018
.org 0x2be4
	ldrh r1, [r0, #4]	@ 00002be4 8188
.org 0x2be6
	lsls r0, r1, #1	@ 00002be6 4800
.org 0x2be8
	adds r0, r0, r1	@ 00002be8 4018
.org 0x2bea
	lsls r0, r0, #2	@ 00002bea 8000
.org 0x2bec
	adds r0, r0, r2	@ 00002bec 8018
.org 0x2bee
	ldr r0, [r0, #0]	@ 00002bee 0068
.org 0x2bf0
	ldr r1, [pc, #20]	@ 00002bf0 0549
.org 0x2bf2
	movs r2, #128	@ 00002bf2 8022
.org 0x2bf4
	lsls r2, r2, #1	@ 00002bf4 5200
.org 0x2bf6
	bl 0x128714	@ 00002bf6 25f18dfd
.org 0x2bfa
	pop {r4}	@ 00002bfa 10bc
.org 0x2bfc
	pop {r0}	@ 00002bfc 01bc
.org 0x2bfe
	bx r0	@ 00002bfe 0047
