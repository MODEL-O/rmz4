@ FUN_080a8518  entry 0x080a8518  size 48
.thumb
.org 0xa8518
FUN_080a8518:
	push {r4, r5, r6, r7, lr}	@ 000a8518 f0b5
.org 0xa851a
	mov r7, r8	@ 000a851a 4746
.org 0xa851c
	push {r7}	@ 000a851c 80b4
.org 0xa851e
	sub sp, #12	@ 000a851e 83b0
.org 0xa8520
	adds r7, r0, #0	@ 000a8520 071c
.org 0xa8522
	ldr r4, [r7, #40]	@ 000a8522 bc6a
.org 0xa8524
	ldrb r0, [r7, #14]	@ 000a8524 b87b
.org 0xa8526
	cmp r0, #5	@ 000a8526 0528
.org 0xa8528
	bls.n 0xa852c	@ 000a8528 00d9
.org 0xa852a
	b.n 0xa880e	@ 000a852a 70e1
.org 0xa852c
	lsls r0, r0, #2	@ 000a852c 8000
.org 0xa852e
	ldr r1, [pc, #8]	@ 000a852e 0249
.org 0xa8530
	adds r0, r0, r1	@ 000a8530 4018
.org 0xa8532
	ldr r0, [r0, #0]	@ 000a8532 0068
.org 0xa8534
	mov pc, r0	@ 000a8534 8746
.org 0xa8536
	.byte 0x00	@ 000a8536 data
.org 0xa8537
	.byte 0x00	@ 000a8537 data
.org 0xa8538
	.byte 0x3c,0x85,0x0a,0x08	@ 000a8538 data
.org 0xa853c
	.byte 0x54,0x85,0x0a,0x08	@ 000a853c data
.org 0xa8540
	.byte 0x94,0x85,0x0a,0x08	@ 000a8540 data
.org 0xa8544
	.byte 0x44,0x86,0x0a,0x08	@ 000a8544 data
