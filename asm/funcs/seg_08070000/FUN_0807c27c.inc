@ FUN_0807c27c  entry 0x0807c27c  size 30
.thumb
.org 0x7c27c
FUN_0807c27c:
	push {r4, lr}	@ 0007c27c 10b5
.org 0x7c27e
	adds r4, r0, #0	@ 0007c27e 041c
.org 0x7c280
	bl 0x7e9b0	@ 0007c280 02f096fb
.org 0x7c284
	ldr r1, [pc, #20]	@ 0007c284 0549
.org 0x7c286
	ldrb r0, [r4, #13]	@ 0007c286 607b
.org 0x7c288
	lsls r0, r0, #2	@ 0007c288 8000
.org 0x7c28a
	adds r0, r0, r1	@ 0007c28a 4018
.org 0x7c28c
	ldr r1, [r0, #0]	@ 0007c28c 0168
.org 0x7c28e
	adds r0, r4, #0	@ 0007c28e 201c
.org 0x7c290
	bl 0x128f80	@ 0007c290 acf076fe
.org 0x7c294
	pop {r4}	@ 0007c294 10bc
.org 0x7c296
	pop {r0}	@ 0007c296 01bc
.org 0x7c298
	bx r0	@ 0007c298 0047
