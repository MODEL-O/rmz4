@ FUN_080cfc2c  entry 0x080cfc2c  size 34
.thumb
.org 0xcfc2c
FUN_080cfc2c:
	push {lr}	@ 000cfc2c 00b5
.org 0xcfc2e
	adds r1, r0, #0	@ 000cfc2e 011c
.org 0xcfc30
	ldrb r0, [r1, #15]	@ 000cfc30 c87b
.org 0xcfc32
	cmp r0, #0	@ 000cfc32 0028
.org 0xcfc34
	bne.n 0xcfc44	@ 000cfc34 06d1
.org 0xcfc36
	adds r2, r1, #0	@ 000cfc36 0a1c
.org 0xcfc38
	adds r2, #181	@ 000cfc38 b532
.org 0xcfc3a
	movs r0, #1	@ 000cfc3a 0120
.org 0xcfc3c
	strb r0, [r2, #0]	@ 000cfc3c 1070
.org 0xcfc3e
	ldrb r0, [r1, #15]	@ 000cfc3e c87b
.org 0xcfc40
	adds r0, #1	@ 000cfc40 0130
.org 0xcfc42
	strb r0, [r1, #15]	@ 000cfc42 c873
.org 0xcfc44
	adds r0, r1, #0	@ 000cfc44 081c
.org 0xcfc46
	bl 0x1cff0	@ 000cfc46 4df7d3f9
.org 0xcfc4a
	pop {r0}	@ 000cfc4a 01bc
.org 0xcfc4c
	bx r0	@ 000cfc4c 0047
