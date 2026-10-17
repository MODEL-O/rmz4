@ FUN_080b3f2c  entry 0x080b3f2c  size 24
.thumb
.org 0xb3f2c
FUN_080b3f2c:
	push {lr}	@ 000b3f2c 00b5
.org 0xb3f2e
	adds r1, r0, #0	@ 000b3f2e 011c
.org 0xb3f30
	ldrb r0, [r1, #18]	@ 000b3f30 887c
.org 0xb3f32
	cmp r0, #0	@ 000b3f32 0028
.org 0xb3f34
	beq.n 0xb3f3e	@ 000b3f34 03d0
.org 0xb3f36
	subs r0, #1	@ 000b3f36 0138
.org 0xb3f38
	strb r0, [r1, #18]	@ 000b3f38 8874
.org 0xb3f3a
	movs r0, #0	@ 000b3f3a 0020
.org 0xb3f3c
	b.n 0xb3f40	@ 000b3f3c 00e0
.org 0xb3f3e
	movs r0, #1	@ 000b3f3e 0120
.org 0xb3f40
	pop {r1}	@ 000b3f40 02bc
.org 0xb3f42
	bx r1	@ 000b3f42 0847
