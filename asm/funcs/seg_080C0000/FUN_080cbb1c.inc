@ FUN_080cbb1c  entry 0x080cbb1c  size 46
.thumb
.org 0xcbb1c
FUN_080cbb1c:
	push {r4, lr}	@ 000cbb1c 10b5
.org 0xcbb1e
	adds r4, r0, #0	@ 000cbb1e 041c
.org 0xcbb20
	ldr r0, [r4, #40]	@ 000cbb20 a06a
.org 0xcbb22
	adds r0, #200	@ 000cbb22 c830
.org 0xcbb24
	ldrb r0, [r0, #0]	@ 000cbb24 0078
.org 0xcbb26
	cmp r0, #0	@ 000cbb26 0028
.org 0xcbb28
	beq.n 0xcbb34	@ 000cbb28 04d0
.org 0xcbb2a
	adds r0, r4, #0	@ 000cbb2a 201c
.org 0xcbb2c
	adds r0, #116	@ 000cbb2c 7430
.org 0xcbb2e
	ldr r1, [pc, #28]	@ 000cbb2e 0749
.org 0xcbb30
	bl 0x5784	@ 000cbb30 39f728fe
.org 0xcbb34
	ldr r0, [pc, #24]	@ 000cbb34 0648
.org 0xcbb36
	ldrb r1, [r4, #13]	@ 000cbb36 617b
.org 0xcbb38
	lsls r1, r1, #2	@ 000cbb38 8900
.org 0xcbb3a
	adds r1, r1, r0	@ 000cbb3a 0918
.org 0xcbb3c
	ldr r1, [r1, #0]	@ 000cbb3c 0968
.org 0xcbb3e
	adds r0, r4, #0	@ 000cbb3e 201c
.org 0xcbb40
	bl 0x128f80	@ 000cbb40 5df01efa
.org 0xcbb44
	pop {r4}	@ 000cbb44 10bc
.org 0xcbb46
	pop {r0}	@ 000cbb46 01bc
.org 0xcbb48
	bx r0	@ 000cbb48 0047
