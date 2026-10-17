@ FUN_080caafc  entry 0x080caafc  size 90
.thumb
.org 0xcaafc
FUN_080caafc:
	push {r4, lr}	@ 000caafc 10b5
.org 0xcaafe
	adds r4, r0, #0	@ 000caafe 041c
.org 0xcab00
	ldr r0, [r4, #84]	@ 000cab00 606d
.org 0xcab02
	ldr r1, [r4, #92]	@ 000cab02 e16d
.org 0xcab04
	adds r0, r0, r1	@ 000cab04 4018
.org 0xcab06
	str r0, [r4, #84]	@ 000cab06 6065
.org 0xcab08
	ldr r1, [r4, #88]	@ 000cab08 a16d
.org 0xcab0a
	ldr r2, [r4, #96]	@ 000cab0a 226e
.org 0xcab0c
	adds r1, r1, r2	@ 000cab0c 8918
.org 0xcab0e
	str r1, [r4, #88]	@ 000cab0e a165
.org 0xcab10
	ldr r3, [r4, #104]	@ 000cab10 a36e
.org 0xcab12
	adds r2, r2, r3	@ 000cab12 d218
.org 0xcab14
	str r2, [r4, #96]	@ 000cab14 2266
.org 0xcab16
	bl 0x7c7c	@ 000cab16 3df7b1f8
.org 0xcab1a
	lsls r0, r0, #16	@ 000cab1a 0004
.org 0xcab1c
	cmp r0, #0	@ 000cab1c 0028
.org 0xcab1e
	beq.n 0xcab32	@ 000cab1e 08d0
.org 0xcab20
	ldr r1, [pc, #52]	@ 000cab20 0d49
.org 0xcab22
	ldrb r0, [r4, #9]	@ 000cab22 607a
.org 0xcab24
	lsls r0, r0, #2	@ 000cab24 8000
.org 0xcab26
	adds r0, r0, r1	@ 000cab26 4018
.org 0xcab28
	movs r1, #2	@ 000cab28 0221
.org 0xcab2a
	str r1, [r4, #12]	@ 000cab2a e160
.org 0xcab2c
	ldr r0, [r0, #0]	@ 000cab2c 0068
.org 0xcab2e
	ldr r0, [r0, #8]	@ 000cab2e 8068
.org 0xcab30
	str r0, [r4, #20]	@ 000cab30 6061
.org 0xcab32
	ldrb r0, [r4, #18]	@ 000cab32 a07c
.org 0xcab34
	cmp r0, #0	@ 000cab34 0028
.org 0xcab36
	bne.n 0xcab4a	@ 000cab36 08d1
.org 0xcab38
	adds r1, r4, #0	@ 000cab38 211c
.org 0xcab3a
	adds r1, #84	@ 000cab3a 5431
.org 0xcab3c
	movs r0, #4	@ 000cab3c 0420
.org 0xcab3e
	movs r2, #0	@ 000cab3e 0022
.org 0xcab40
	movs r3, #0	@ 000cab40 0023
.org 0xcab42
	bl 0xd0cec	@ 000cab42 06f0d3f8
.org 0xcab46
	movs r0, #255	@ 000cab46 ff20
.org 0xcab48
	strb r0, [r4, #18]	@ 000cab48 a074
.org 0xcab4a
	ldrb r0, [r4, #18]	@ 000cab4a a07c
.org 0xcab4c
	subs r0, #1	@ 000cab4c 0138
.org 0xcab4e
	strb r0, [r4, #18]	@ 000cab4e a074
.org 0xcab50
	pop {r4}	@ 000cab50 10bc
.org 0xcab52
	pop {r0}	@ 000cab52 01bc
.org 0xcab54
	bx r0	@ 000cab54 0047
