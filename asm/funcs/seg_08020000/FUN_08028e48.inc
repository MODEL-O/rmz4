@ FUN_08028e48  entry 0x08028e48  size 60
.thumb
.org 0x28e48
FUN_08028e48:
	push {lr}	@ 00028e48 00b5
.org 0x28e4a
	ldr r1, [r0, #12]	@ 00028e4a c168
.org 0x28e4c
	ldrb r0, [r1, #1]	@ 00028e4c 4878
.org 0x28e4e
	cmp r0, #1	@ 00028e4e 0128
.org 0x28e50
	beq.n 0x28e6a	@ 00028e50 0bd0
.org 0x28e52
	cmp r0, #1	@ 00028e52 0128
.org 0x28e54
	bgt.n 0x28e5c	@ 00028e54 02dc
.org 0x28e56
	cmp r0, #0	@ 00028e56 0028
.org 0x28e58
	beq.n 0x28e62	@ 00028e58 03d0
.org 0x28e5a
	b.n 0x28e7e	@ 00028e5a 10e0
.org 0x28e5c
	cmp r0, #2	@ 00028e5c 0228
.org 0x28e5e
	beq.n 0x28e74	@ 00028e5e 09d0
.org 0x28e60
	b.n 0x28e7e	@ 00028e60 0de0
.org 0x28e62
	ldrh r0, [r1, #4]	@ 00028e62 8888
.org 0x28e64
	bl 0x2b10	@ 00028e64 d9f754fe
.org 0x28e68
	b.n 0x28e7e	@ 00028e68 09e0
.org 0x28e6a
	movs r2, #4	@ 00028e6a 0422
.org 0x28e6c
	ldrsh r0, [r1, r2]	@ 00028e6c 885e
.org 0x28e6e
	bl 0x2b5c	@ 00028e6e d9f775fe
.org 0x28e72
	b.n 0x28e7e	@ 00028e72 04e0
.org 0x28e74
	movs r2, #4	@ 00028e74 0422
.org 0x28e76
	ldrsh r0, [r1, r2]	@ 00028e76 885e
.org 0x28e78
	ldrh r1, [r1, #2]	@ 00028e78 4988
.org 0x28e7a
	bl 0x2b7c	@ 00028e7a d9f77ffe
.org 0x28e7e
	movs r0, #0	@ 00028e7e 0020
.org 0x28e80
	pop {r1}	@ 00028e80 02bc
.org 0x28e82
	bx r1	@ 00028e82 0847
