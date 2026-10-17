@ FUN_080b7278  entry 0x080b7278  size 38
.thumb
.org 0xb7278
FUN_080b7278:
	push {r4, lr}	@ 000b7278 10b5
.org 0xb727a
	adds r3, r0, #0	@ 000b727a 031c
.org 0xb727c
	ldr r0, [r3, #40]	@ 000b727c 986a
.org 0xb727e
	ldr r0, [r0, #40]	@ 000b727e 806a
.org 0xb7280
	adds r1, r0, #0	@ 000b7280 011c
.org 0xb7282
	adds r1, #204	@ 000b7282 cc31
.org 0xb7284
	ldrh r2, [r1, #0]	@ 000b7284 0a88
.org 0xb7286
	movs r4, #0	@ 000b7286 0024
.org 0xb7288
	ldrsh r0, [r1, r4]	@ 000b7288 085f
.org 0xb728a
	cmp r0, #0	@ 000b728a 0028
.org 0xb728c
	beq.n 0xb7292	@ 000b728c 01d0
.org 0xb728e
	subs r0, r2, #1	@ 000b728e 501e
.org 0xb7290
	strh r0, [r1, #0]	@ 000b7290 0880
.org 0xb7292
	adds r0, r3, #0	@ 000b7292 181c
.org 0xb7294
	bl 0x7f8ec	@ 000b7294 c8f72afb
.org 0xb7298
	pop {r4}	@ 000b7298 10bc
.org 0xb729a
	pop {r0}	@ 000b729a 01bc
.org 0xb729c
	bx r0	@ 000b729c 0047
